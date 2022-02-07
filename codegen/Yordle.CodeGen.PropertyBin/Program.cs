using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text.Json;
using Microsoft.CodeAnalysis.CSharp;

namespace Yordle.CodeGen.PropertyBin;

public static class Program {
    public static void Main(string[] args) {
        if (args.Length < 2) {
            Console.WriteLine("Usage: Yordle.CodeGen.PropertyBin path/to/meta.json path/to/output");
        }

        var meta = JsonSerializer.Deserialize<Meta>(File.ReadAllText(args[0]), new JsonSerializerOptions { PropertyNamingPolicy = JsonNamingPolicy.CamelCase });
        if (meta == null) {
            return;
        }

        var headerOutput = Path.Combine(args[1], "public");
        var sourceOutput = Path.Combine(args[1], "private");
        var headerOutputDefs = Path.Combine(args[1], "public", "bin_defs");
        var sourceOutputDefs = Path.Combine(args[1], "private", "bin_defs");

        if (!Directory.Exists(headerOutputDefs)) {
            Directory.CreateDirectory(headerOutputDefs);
        }

        if (!Directory.Exists(sourceOutputDefs)) {
            Directory.CreateDirectory(sourceOutputDefs);
        }

        var dispatchReferences = new List<string>();
        var dispatchTable = new List<string>();

        foreach (var ((metaName, metaHash), metaClass) in meta.Classes) {
            try {
                var header = BuildHeader(metaName, metaHash, metaClass);
                var source = BuildSource(metaName, metaHash, metaClass);
                dispatchReferences.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = metaName,
                    }));
                dispatchTable.Add(Templates.CompileTemplate(Templates.BIN_DISPATCH_ENTRY,
                    new Dictionary<string, object> {
                        ["hash"] = metaHash,
                        ["name"] = metaName,
                    }));
                File.WriteAllText(Path.Combine(headerOutputDefs, $"{metaName}.hpp"), header + "\n");
                File.WriteAllText(Path.Combine(sourceOutputDefs, $"{metaName}.cpp"), source + "\n");
                Console.WriteLine(metaName);
            } catch { }
        }

        var dispatch = Templates.CompileTemplate(Templates.BIN_DISPATCH_MAIN,
            new Dictionary<string, object> {
                ["bin_ref"] = dispatchReferences,
                ["table_entries"] = dispatchTable,
            });

        File.WriteAllText(Path.Combine(sourceOutput, "bin_dispatch.cpp"), dispatch + "\n");
    }

    private static string BuildSource(string metaName, uint metaHash, Class metaClass) {
        var references = new HashSet<string>();
        var properties = new List<string>();

        foreach (var ((propertyName, propertyHash), property) in (metaClass.Properties ?? new Dictionary<(string Name, uint Hash), ClassProperties>()).OrderBy(x => x.Value.Offset)) {
            switch (property.ValueType) {
                case ClassPropertyType.Bool:
                case ClassPropertyType.I8:
                case ClassPropertyType.U8:
                case ClassPropertyType.I16:
                case ClassPropertyType.U16:
                case ClassPropertyType.I32:
                case ClassPropertyType.U32:
                case ClassPropertyType.I64:
                case ClassPropertyType.U64:
                case ClassPropertyType.F32:
                case ClassPropertyType.Vec2:
                case ClassPropertyType.Vec3:
                case ClassPropertyType.Vec4:
                case ClassPropertyType.Mtx44:
                case ClassPropertyType.Color:
                case ClassPropertyType.String:
                case ClassPropertyType.Hash:
                case ClassPropertyType.File:
                case ClassPropertyType.Flag:
                    properties.Add(GetPropertyValue(propertyName, propertyHash, property.ValueType, 1, property.Bitmask));
                    break;
                case ClassPropertyType.List:
                case ClassPropertyType.List2:
                    properties.Add(GetPropertyListValue(propertyName, propertyHash, property.ValueType, property.Container!.ValueType, 1, property.Container.Storage == "Fixed"));
                    break;
                case ClassPropertyType.Pointer:
                case ClassPropertyType.Embed:
                    throw new NotImplementedException();
                case ClassPropertyType.Link:
                    throw new NotImplementedException();
                case ClassPropertyType.Option:
                    throw new NotImplementedException();
                case ClassPropertyType.Map:
                    properties.Add(GetPropertyMapValue(propertyName, propertyHash, property.ValueType, property.Map!.KeyType, property.Map.ValueType, 1));
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        var bases = new HashSet<string>();
        if (metaClass.Base.Hash != 0) {
            var baseRef = Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_BASE,
                new Dictionary<string, object> {
                    ["name"] = metaClass.Base.Name!,
                });
            if (bases.Add(baseRef)) {
                references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = metaClass.Base.Name!,
                    }));
            }
        }

        foreach (var ((baseName, baseHash), _) in metaClass.SecondaryBases) {
            var baseRef = Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_BASE,
                new Dictionary<string, object> {
                    ["name"] = baseName,
                });

            if (bases.Add(baseRef)) {
                references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = baseName,
                    }));
            }
        }

        string baseClass;
        if (bases.Count == 0) {
            baseClass = Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_BASE,
                new Dictionary<string, object> {
                    ["name"] = "bin_class",
                });
            references.Add("#include <yordle/data/meta/bin_class.hpp>");
        } else {
            baseClass = string.Join(", ", bases);
        }

        return Templates.CompileTemplate(Templates.BIN_CLASS_IMPL,
            new Dictionary<string, object> {
                ["class_ref"] = references,
                ["name"] = metaName,
                ["hash"] = metaHash,
                ["base_class"] = baseClass,
                ["properties"] = string.Join('\n', properties),
            });
    }

    private static string GetPropertyListValue(string name, uint hash, ClassPropertyType propertyType, ClassPropertyType containerType, int level, bool isFixed) {
        var subLogic = string.Empty;
        switch (containerType) {
            case ClassPropertyType.Bool:
            case ClassPropertyType.I8:
            case ClassPropertyType.U8:
            case ClassPropertyType.I16:
            case ClassPropertyType.U16:
            case ClassPropertyType.I32:
            case ClassPropertyType.U32:
            case ClassPropertyType.I64:
            case ClassPropertyType.U64:
            case ClassPropertyType.F32:
            case ClassPropertyType.Vec2:
            case ClassPropertyType.Vec3:
            case ClassPropertyType.Vec4:
            case ClassPropertyType.Mtx44:
            case ClassPropertyType.Color:
            case ClassPropertyType.String:
            case ClassPropertyType.Hash:
            case ClassPropertyType.File:
                subLogic = GetPropertyRawValueLogic($"{name}_entry");
                break;
            case ClassPropertyType.Pointer:
                throw new NotImplementedException();

                break;
            case ClassPropertyType.Embed:
                throw new NotImplementedException();

                break;
            case ClassPropertyType.Link:
                throw new NotImplementedException();

                break;
            case ClassPropertyType.Option:
                throw new NotImplementedException();

                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(containerType), containerType, null);
        }

        var template = Templates.CompileTemplate(isFixed ? Templates.BIN_CLASS_IMPL_FIXED_SET : Templates.BIN_CLASS_IMPL_SET,
            new Dictionary<string, object> {
                ["name"] = name,
                ["hash"] = hash,
                ["type"] = GetPropertyType(propertyType),
                ["value_type"] = GetPropertyType(containerType),
                ["sub_logic"] = subLogic,
            });

        var indent = new string(' ', level * 4);
        return string.Join('\n', template.Split('\n').Select(x => indent + x));
    }

    private static string GetPropertyMapValue(string name, uint hash, ClassPropertyType propertyType, ClassPropertyType keyType, ClassPropertyType valueType, int level) => throw new NotImplementedException();

    private static string GetPropertyValue(string name, uint hash, ClassPropertyType propertyType, int level, int bitMask) {
        var template = Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE,
            new Dictionary<string, object> {
                ["name"] = name,
                ["hash"] = hash,
                ["type"] = GetPropertyType(propertyType),
                ["sub_logic"] = propertyType == ClassPropertyType.Flag ? GetPropertyValueBitLogic(name, bitMask) : GetPropertyRawValueLogic(name),
            });

        var indent = new string(' ', level * 4);
        return string.Join('\n', template.Split('\n').Select(x => indent + x));
    }

    private static string GetPropertyBitValue(string name, uint hash, ClassProperties property, int level) {
        var template = Templates.CompileTemplate(Templates.BIN_CLASS_DEF_MAIN,
            new Dictionary<string, object> {
                ["name"] = name,
                ["hash"] = hash,
                ["type"] = GetPropertyType(property.ValueType),
                ["sub_logic"] = GetPropertyValueBitLogic(name, property.Bitmask),
            });

        var indent = new string(' ', level * 4);
        return string.Join('\n', template.Split('\n').Select(x => indent + x));
    }

    private static string GetPropertyRawValueLogic(string name) =>
        Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE_SUB_LOGIC,
            new Dictionary<string, object> {
                ["name"] = name,
            });

    private static string GetPropertyPointerValueLogic(string name) {
        throw new NotImplementedException();

        return Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE_SUB_LOGIC_POINTER,
            new Dictionary<string, object> {
                ["name"] = name,
            });
    }

    private static string GetPropertyEmbedValueLogic(string name) {
        throw new NotImplementedException();

        return Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE_SUB_LOGIC_EMBED,
            new Dictionary<string, object> {
                ["name"] = name,
            });
    }

    private static string GetPropertyOptionalValueLogic(string name) {
        throw new NotImplementedException();

        return Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE_SUB_LOGIC_OPTIONAL,
            new Dictionary<string, object> {
                ["name"] = name,
            });
    }

    private static string GetPropertyValueBitLogic(string name, int bitMask) =>
        Templates.CompileTemplate(Templates.BIN_CLASS_IMPL_VALUE_SUB_LOGIC_BIT,
            new Dictionary<string, object> {
                ["name"] = name,
                ["bit"] = bitMask,
            });

    private static string GetPropertyType(ClassPropertyType type) {
        return type switch {
            ClassPropertyType.Bool => "bool_prop",
            ClassPropertyType.I8 => "int8_prop",
            ClassPropertyType.U8 => "uint8_prop",
            ClassPropertyType.I16 => "int16_prop",
            ClassPropertyType.U16 => "uint16_prop",
            ClassPropertyType.I32 => "int32_prop",
            ClassPropertyType.U32 => "uint32_prop",
            ClassPropertyType.I64 => "int64_prop",
            ClassPropertyType.U64 => "uint64_prop",
            ClassPropertyType.F32 => "float32_prop",
            ClassPropertyType.Vec2 => "vec2_prop",
            ClassPropertyType.Vec3 => "vec3_prop",
            ClassPropertyType.Vec4 => "vec4_prop",
            ClassPropertyType.Mtx44 => "matrix_prop",
            ClassPropertyType.Color => "color_prop",
            ClassPropertyType.String => "string_prop",
            ClassPropertyType.Hash => "fnv_hash_prop",
            ClassPropertyType.File => "xx_hash_prop",
            ClassPropertyType.List => "set_prop",
            ClassPropertyType.List2 => "unordered_set_prop",
            ClassPropertyType.Pointer => "structure_prop",
            ClassPropertyType.Embed => "inline_structure_prop",
            ClassPropertyType.Link => "reference_prop",
            ClassPropertyType.Option => "optional_prop",
            ClassPropertyType.Map => "map_prop",
            ClassPropertyType.Flag => "bit_prop",
            _ => throw new ArgumentOutOfRangeException(nameof(type), type, null),
        };
    }

    private static string BuildHeader(string metaName, uint metaHash, Class metaClass) {
        var stdlib = new HashSet<string> {
            Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                new Dictionary<string, object> {
                    ["name"] = "memory",
                }),
        };

        var references = new HashSet<string>();
        var properties = new List<string>();
        var fwdDeclare = new HashSet<string>();

        metaClass.Defaults ??= new Dictionary<(string Name, uint Hash), JsonElement>();

        foreach (var ((propertyName, propertyHash), property) in (metaClass.Properties ?? new Dictionary<(string Name, uint Hash), ClassProperties>()).OrderBy(x => x.Value.Offset)) {
            if (!metaClass.Defaults.TryGetValue((propertyName, propertyHash), out var defaultValue)) {
                defaultValue = default;
            }

            switch (property.ValueType) {
                case ClassPropertyType.Flag:
                case ClassPropertyType.Bool:
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "bool",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "false" : defaultValue.GetBoolean().ToString().ToLower(),
                        }));
                    break;
                case ClassPropertyType.I8:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "int8_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetSByte(),
                        }));
                    break;
                case ClassPropertyType.U8:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "uint8_t",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetByte()) + "u",
                        }));
                    break;
                case ClassPropertyType.I16:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "int16_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetInt16(),
                        }));
                    break;
                case ClassPropertyType.U16:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "int16_t",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetUInt16()) + "u",
                        }));
                    break;
                case ClassPropertyType.I32:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "int32_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetInt32(),
                        }));
                    break;
                case ClassPropertyType.U32:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "uint32_t",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetUInt32()) + "u",
                        }));
                    break;
                case ClassPropertyType.I64:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "int64_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetInt64(),
                        }));
                    break;
                case ClassPropertyType.U64:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "uint64_t",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetUInt64()) + "u",
                        }));
                    break;
                case ClassPropertyType.F32:
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "float",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.ToString(),
                        }));
                    break;
                case ClassPropertyType.Vec2:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::array<float, 2>",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "{}" : $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle()))} }}",
                        }));
                    break;
                case ClassPropertyType.Vec3:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::array<float, 3>",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "{}" : $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle()))} }}",
                        }));
                    break;
                case ClassPropertyType.Vec4:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::array<float, 3>",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "{}" : $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle()))} }}",
                        }));
                    break;
                case ClassPropertyType.Mtx44:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::array<float, 16>",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "{}" : $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.EnumerateArray().Select(y => y.GetSingle())))} }}",
                        }));
                    break;
                case ClassPropertyType.Color:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::array<uint8_t, 4>",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "{}" : $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetByte()))} }}",
                        }));
                    break;
                case ClassPropertyType.String:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "string",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "std::string",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.ValueKind == JsonValueKind.Undefined ? "\"\"" : SymbolDisplay.FormatLiteral(defaultValue.GetString()!, true),
                        }));
                    break;
                case ClassPropertyType.Hash:
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "yordle::data::meta::bin_fnv_hash",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.String ? uint.Parse(defaultValue.GetString()![2..], NumberStyles.HexNumber) : defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetUInt32()) + "u",
                        }));
                    break;
                case ClassPropertyType.File:
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = "yordle::data::meta::bin_xx_hash",
                            ["name"] = propertyName,
                            ["default"] = (defaultValue.ValueKind == JsonValueKind.String ? ulong.Parse(defaultValue.GetString()![2..], NumberStyles.HexNumber) : defaultValue.ValueKind == JsonValueKind.Undefined ? "0" : defaultValue.GetUInt64()) + "u",
                        }));
                    break;
                case ClassPropertyType.List:
                case ClassPropertyType.List2:
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = GetContainerType(property, fwdDeclare, references, stdlib),
                            ["name"] = propertyName,
                            ["default"] = GetDefaultArray(defaultValue, property),
                        }));
                    break;
                case ClassPropertyType.Pointer:
                    Debug.Assert(defaultValue.ValueKind is JsonValueKind.Null or JsonValueKind.Undefined);
                    fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF,
                        new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                    references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                        new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = $"std::shared_ptr<yordle::data::meta::{property.OtherClass.Name}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                    break;
                case ClassPropertyType.Embed:
                    Debug.Assert(defaultValue.ToString() == "{}" || defaultValue.ValueKind == JsonValueKind.Undefined);
                    fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF,
                        new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                    references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                        new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = $"std::shared_ptr<yordle::data::meta::{property.OtherClass.Name}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                    break;
                case ClassPropertyType.Link:
                    var defaultLinkValue = $"{{ {property.OtherClass.Hash} ";
                    var defaultLinkValueRaw = defaultValue.ValueKind == JsonValueKind.Undefined ? "0x0" : defaultValue.GetString();
                    if (defaultLinkValueRaw != "0x0" &&
                        defaultLinkValueRaw?.StartsWith("0x") == true) {
                        defaultLinkValue += $", {uint.Parse(defaultLinkValueRaw[2..])} }}";
                    } else {
                        defaultLinkValue += "}";
                    }

                    fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF,
                        new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                    references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                        new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = $"yordle::data::meta::bin_ref<yordle::data::meta::{property.OtherClass.Name}>",
                            ["name"] = propertyName,
                            ["default"] = defaultLinkValue,
                        }));
                    break;
                case ClassPropertyType.Option:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "optional",
                        }));
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = $"std::optional<{GetContainerType(property, fwdDeclare, references, stdlib)}>",
                            ["name"] = propertyName,
                            ["default"] = GetDefault(defaultValue, property),
                        }));
                    break;
                case ClassPropertyType.Map:
                    stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                        new Dictionary<string, object> {
                            ["name"] = "map",
                        }));
                    Debug.Assert(defaultValue.ToString() == "{}" || defaultValue.ValueKind == JsonValueKind.Undefined);
                    properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY,
                        new Dictionary<string, object> {
                            ["type"] = $"std::map<{GetRawType(property.Map?.KeyType, property, fwdDeclare, references, stdlib)}, {GetRawType(property.Map?.ValueType, property, fwdDeclare, references, stdlib)}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        var bases = new HashSet<string>();
        var typeCheck = string.Empty;
        if (metaClass.Base.Hash != 0) {
            if (bases.Add($"public {metaClass.Base.Name}")) {
                typeCheck += Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_IS_TYPE,
                    new Dictionary<string, object> {
                        ["base_class"] = metaClass.Base.Name!,
                    });

                references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = metaClass.Base.Name!,
                    }));
            }
        }

        foreach (var ((baseName, baseHash), _) in metaClass.SecondaryBases) {
            if (bases.Add($"public {baseName}")) {
                typeCheck += Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_IS_TYPE,
                    new Dictionary<string, object> {
                        ["base_class"] = baseName,
                    });

                references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = baseName,
                    }));
            }
        }

        if (!string.IsNullOrEmpty(typeCheck)) {
            typeCheck = " " + typeCheck;
        }

        string baseClass;
        if (bases.Count == 0) {
            baseClass = "public bin_class";

            references.Add("#include <yordle/data/meta/bin_class.hpp>");
        } else {
            baseClass = string.Join(", ", bases);
        }

        return Templates.CompileTemplate(Templates.BIN_CLASS_DEF_MAIN,
            new Dictionary<string, object> {
                ["stdlib"] = stdlib,
                ["class_impl_ref"] = references,
                ["class_ref"] = fwdDeclare,
                ["name"] = metaName,
                ["hash"] = metaHash,
                ["base_class"] = baseClass,
                ["type_check"] = typeCheck,
                ["properties"] = properties,
            });
    }

    private static string GetDefaultArray(JsonElement defaultValue, ClassProperties property) {
        if (defaultValue.ValueKind == JsonValueKind.Undefined) {
            return "{}";
        }

        if (defaultValue.GetArrayLength() == 0) {
            return "{}";
        }

        switch (property.Container!.ValueType) {
            case ClassPropertyType.Flag:
            case ClassPropertyType.Bool:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.ToString().ToLower()))} }}";
            case ClassPropertyType.I8:
            case ClassPropertyType.I16:
            case ClassPropertyType.I32:
            case ClassPropertyType.I64:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetInt64()))} }}";
            case ClassPropertyType.U8:
            case ClassPropertyType.U16:
            case ClassPropertyType.U32:
            case ClassPropertyType.U64:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetUInt64()))} }}";
            case ClassPropertyType.F32:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.ToString()))} }}";
            case ClassPropertyType.String:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => SymbolDisplay.FormatLiteral(x.GetString()!, true)))} }}";
            case ClassPropertyType.Hash:
            case ClassPropertyType.File:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => ulong.Parse(x.GetString()![2..], NumberStyles.HexNumber) + "u"))} }}";
            case ClassPropertyType.Embed:
            case ClassPropertyType.Pointer:
            case ClassPropertyType.Link:
                if (defaultValue.ValueKind != JsonValueKind.Undefined) {
                    foreach (var entry in defaultValue.EnumerateArray()) {
                        Debug.Assert(entry.ToString() is "{}" or "0x0" || entry.ValueKind == JsonValueKind.Null);
                    }
                }

                return "{}";
            case ClassPropertyType.Vec2:
            case ClassPropertyType.Vec3:
            case ClassPropertyType.Vec4:
            case ClassPropertyType.Mtx44:
            case ClassPropertyType.Color:
                var stack = new List<string>();
                if (defaultValue.ValueKind != JsonValueKind.Undefined) {
                    stack.AddRange(defaultValue.EnumerateArray().Select(entry => string.Join(", ", entry.EnumerateArray().Select(x => x.ToString()))));
                }

                return $"{{ {string.Join(", ", stack.Select(x => $"{{ {x} }}"))} }}";
            default:
                throw new ArgumentOutOfRangeException();
        }
    }

    private static string GetDefault(JsonElement defaultValue, ClassProperties property) {
        if (defaultValue.ValueKind == JsonValueKind.Null) {
            return "{}";
        }

        switch (property.Container!.ValueType) {
            case ClassPropertyType.Flag:
            case ClassPropertyType.Bool:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "false";
                }

                return defaultValue.GetBoolean().ToString().ToLower();
            case ClassPropertyType.I8:
            case ClassPropertyType.I16:
            case ClassPropertyType.I32:
            case ClassPropertyType.I64:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "0";
                }

                return defaultValue.GetInt64().ToString();
            case ClassPropertyType.U8:
            case ClassPropertyType.U16:
            case ClassPropertyType.U32:
            case ClassPropertyType.U64:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "0u";
                }

                return defaultValue.GetUInt64() + "u";
            case ClassPropertyType.F32:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "0.0";
                }

                return defaultValue.ToString();
            case ClassPropertyType.String:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "\"\"";
                }

                return SymbolDisplay.FormatLiteral(defaultValue.GetString()!, true);
            case ClassPropertyType.Hash:
            case ClassPropertyType.File:
                if (defaultValue.ValueKind == JsonValueKind.Undefined) {
                    return "0u";
                }

                return ulong.Parse(defaultValue.GetString()![2..], NumberStyles.HexNumber) + "u";
            case ClassPropertyType.Embed:
            case ClassPropertyType.Pointer:
                Debug.Assert(defaultValue.ToString() == "{}");
                return "{}";
            case ClassPropertyType.Vec2:
            case ClassPropertyType.Vec3:
            case ClassPropertyType.Vec4:
            case ClassPropertyType.Mtx44:
            case ClassPropertyType.Color:
                return $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.ToString()))} }}";
            default:
                throw new ArgumentOutOfRangeException();
        }
    }

    private static string GetRawType(ClassPropertyType? type, ClassProperties property, HashSet<string> fwdDeclare, HashSet<string> binRef, HashSet<string> stdlib) {
        switch (type) {
            case ClassPropertyType.Flag:
            case ClassPropertyType.Bool:
                return "bool";
            case ClassPropertyType.I8:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "int8_t";
            case ClassPropertyType.U8:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "uint8_t";
            case ClassPropertyType.I16:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "int16_t";
            case ClassPropertyType.U16:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "uint16_t";
            case ClassPropertyType.I32:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "int32_t";
            case ClassPropertyType.U32:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "uint32_t";
            case ClassPropertyType.I64:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "int64_t";
            case ClassPropertyType.U64:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "uint64_t";
            case ClassPropertyType.F32:
                return "float";
            case ClassPropertyType.String:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "string",
                    }));
                return "std::string";
            case ClassPropertyType.Hash:
                return "yordle::data::meta::bin_fnv_hash";
            case ClassPropertyType.File:
                return "yordle::data::meta::bin_xx_hash";
            case ClassPropertyType.Pointer:
            case ClassPropertyType.Embed:
                fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF,
                    new Dictionary<string, object> {
                        ["ref"] = property.OtherClass.Name!,
                    }));
                binRef.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = property.OtherClass.Name!,
                    }));
                return $"std::shared_ptr<yordle::data::meta::{property.OtherClass.Name}>";
            case ClassPropertyType.Link:
                fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF,
                    new Dictionary<string, object> {
                        ["ref"] = property.OtherClass.Name!,
                    }));
                binRef.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF,
                    new Dictionary<string, object> {
                        ["name"] = property.OtherClass.Name!,
                    }));
                return $"yordle::data::meta::bin_ref<yordle::data::meta::{property.OtherClass.Name}>";
            case ClassPropertyType.Vec2:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "array",
                    }));
                return "std::array<float, 2>";
            case ClassPropertyType.Vec3:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "array",
                    }));
                return "std::array<float, 3>";
            case ClassPropertyType.Vec4:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "array",
                    }));
                return "std::array<float, 4>";
            case ClassPropertyType.Mtx44:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "array",
                    }));
                return "std::array<float, 16>";
            case ClassPropertyType.Color:
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "array",
                    }));
                stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                    new Dictionary<string, object> {
                        ["name"] = "cstdint",
                    }));
                return "std::array<uint8_t, 4>";
            default:
                throw new ArgumentOutOfRangeException(nameof(type), type, null);
        }
    }

    private static string GetContainerType(ClassProperties property, HashSet<string> fwdDeclare, HashSet<string> binRef, HashSet<string> stdlib) {
        if (property.Container == null) {
            throw new InvalidDataException();
        }

        var type = GetRawType(property.Container.ValueType, property, fwdDeclare, binRef, stdlib);
        if (property.Container.FixedSize is > 0) {
            stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
                new Dictionary<string, object> {
                    ["name"] = "array",
                }));
            return $"std::array<{type}, {property.Container.FixedSize}>";
        }

        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,
            new Dictionary<string, object> {
                ["name"] = "vector",
            }));
        return $"std::vector<{type}>";
    }
}
