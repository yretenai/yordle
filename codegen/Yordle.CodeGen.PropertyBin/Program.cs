using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.Json;
using Microsoft.CodeAnalysis.CSharp;

namespace Yordle.CodeGen.PropertyBin {
    public static class Program {
        public static void Main(string[] args) {
            if (args.Length < 2) {
                Console.WriteLine("Usage: Yordle.CodeGen.PropertyBin path/to/meta.json path/to/output");
            }
            
            var meta = JsonSerializer.Deserialize<Meta>(File.ReadAllText(args[0]), new JsonSerializerOptions { PropertyNamingPolicy = JsonNamingPolicy.CamelCase});
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
                    var headerSource = BuildHeader(metaName, metaHash, metaClass, headerOutputDefs);
                    dispatchReferences.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
                        ["name"] = metaName,
                    }));
                    dispatchTable.Add(Templates.CompileTemplate(Templates.BIN_DISPATCH_ENTRY, new Dictionary<string, object> {
                        ["hash"] = metaHash,
                        ["name"] = metaName,
                    }));
                    File.WriteAllText(Path.Combine(headerOutputDefs, $"{metaName}.cpp"), headerSource + "\n");
                } catch {
                    
                }
            }

            var dispatch = Templates.CompileTemplate(Templates.BIN_DISPATCH_MAIN, new Dictionary<string, object> {
                    ["bin_ref"] = dispatchReferences,
                    ["table_entries"] = dispatchTable,
                });
            
            File.WriteAllText(Path.Combine(sourceOutput, "bin_dispatch.cpp"), dispatch + "\n");
        }

        private static string BuildHeader(string metaName, uint metaHash, Class metaClass, string output) {
            var stdlib = new HashSet<string> {
                Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF,  new Dictionary<string, object> {
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
                    case ClassPropertyType.None:
                        throw new NotSupportedException();
                    case ClassPropertyType.Bool:
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "bool",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetBoolean().ToString().ToLower(),
                        }));
                        break;
                    case ClassPropertyType.I8:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                                    ["name"] = "cstdint",
                                }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "int8_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetSByte(),
                        }));
                        break;
                    case ClassPropertyType.U8:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "uint8_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetByte(),
                        }));
                        break;
                    case ClassPropertyType.I16:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "int16_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetInt16(),
                        }));
                        break;
                    case ClassPropertyType.U16:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "int16_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetInt16(),
                        }));
                        break;
                    case ClassPropertyType.I32:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "int32_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetInt32(),
                        }));
                        break;
                    case ClassPropertyType.U32:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "uint32_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetUInt32(),
                        }));
                        break;
                    case ClassPropertyType.I64:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "int64_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetInt64(),
                        }));
                        break;
                    case ClassPropertyType.U64:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "uint64_t",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetUInt64(),
                        }));
                        break;
                    case ClassPropertyType.F32:
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "float",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetSingle(),
                        }));
                        break;
                    case ClassPropertyType.Vec2:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::array<float, 2>",
                            ["name"] = propertyName,
                            ["default"] = $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle())) } }}",
                        }));
                        break;
                    case ClassPropertyType.Vec3:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::array<float, 3>",
                            ["name"] = propertyName,
                            ["default"] = $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle())) } }}",
                        }));
                        break;
                    case ClassPropertyType.Vec4:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::array<float, 3>",
                            ["name"] = propertyName,
                            ["default"] = $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetSingle())) } }}",
                        }));
                        break;
                    case ClassPropertyType.Mtx44:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::array<float, 16>",
                            ["name"] = propertyName,
                            ["default"] = $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.EnumerateArray().Select(y => y.GetSingle()))) } }}",
                        }));
                        break;
                    case ClassPropertyType.Color:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "cstdint",
                        }));
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "array",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::array<uint8_t, 4>",
                            ["name"] = propertyName,
                            ["default"] = $"{{ {string.Join(", ", defaultValue.EnumerateArray().Select(x => x.GetByte()))} }}",
                        }));
                        break;
                    case ClassPropertyType.String:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "string",
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "std::string",
                            ["name"] = propertyName,
                            ["default"] = SymbolDisplay.FormatLiteral(defaultValue.GetString()!, true),
                        }));
                        break;
                    case ClassPropertyType.Hash:
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "yordle::data::meta::bin_fnv_hash",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetUInt32(),
                        }));
                        break;
                    case ClassPropertyType.File:
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "yordle::data::meta::bin_xx_hash",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetUInt64(),
                        }));
                        break;
                    case ClassPropertyType.List:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "vector",
                        }));
                        Debug.Assert(defaultValue.GetArrayLength() == 0);
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::vector<{GetContainerType(property.Container, fwdDeclare, references)}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.List2:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "vector",
                        }));
                        Debug.Assert(defaultValue.GetArrayLength() == 0);
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::vector<{GetContainerType(property.Container, fwdDeclare, references)}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.Pointer:
                        Debug.Assert(defaultValue.ValueKind == JsonValueKind.Null);
                        fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF, new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                        references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::shared_ptr<yordle::data::meta::{property.OtherClass.Name}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.Embed:
                        Debug.Assert(defaultValue.ValueKind == JsonValueKind.Null);
                        fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF, new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                        references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::shared_ptr<yordle::data::meta::{property.OtherClass.Name}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.Link:
                        var defaultLinkValue = $"{{ {property.OtherClass.Hash} ";
                        var defaultLinkValueRaw = defaultValue.GetString();
                        if (defaultLinkValueRaw != "0x0" &&
                            defaultLinkValueRaw?.StartsWith("0x") == true) {
                            defaultLinkValue += $", {uint.Parse(defaultLinkValueRaw[2..])} }}";
                        } else {
                            defaultLinkValue += "}";
                        }
                        fwdDeclare.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_REF, new Dictionary<string, object> {
                            ["ref"] = property.OtherClass.Name!,
                        }));
                        references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
                            ["name"] = property.OtherClass.Name!,
                        }));
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"yordle::data::meta::bin_ref<yordle::data::meta::{property.OtherClass.Name}",
                            ["name"] = propertyName,
                            ["default"] = defaultLinkValue,
                        }));
                        break;
                    case ClassPropertyType.Option:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "optional",
                        }));
                        Debug.Assert(defaultValue.ValueKind == JsonValueKind.Null);
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::optional<{GetContainerType(property.Container, fwdDeclare, references)}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.Map:
                        stdlib.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_STDLIB_REF, new Dictionary<string, object> {
                            ["name"] = "optional",
                        }));
                        Debug.Assert(defaultValue.GetArrayLength() == 0);
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = $"std::map<{GetRawType(property.Map?.KeyType)}, {GetRawType(property.Map?.ValueType)}>",
                            ["name"] = propertyName,
                            ["default"] = "{}",
                        }));
                        break;
                    case ClassPropertyType.Flag:
                        properties.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_PROPERTY, new Dictionary<string, object> {
                            ["type"] = "bool",
                            ["name"] = propertyName,
                            ["default"] = defaultValue.GetBoolean(),
                        }));
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            var bases = new HashSet<string>();
            var typeCheck = string.Empty;
            if (metaClass.Base.Hash != 0) {
                if(bases.Add($"public {metaClass.Base.Name}")) {
                    typeCheck += Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_IS_TYPE, new Dictionary<string, object> {
                        ["base_class"] = metaClass.Base.Name!,
                    });
                    
                    references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
                        ["name"] = metaClass.Base.Name!,
                    }));
                }
            }

            foreach (var ((baseName, baseHash), _) in metaClass.SecondaryBases) {
                if(bases.Add($"public {baseName}")) {
                    typeCheck += Templates.CompileTemplate(Templates.BIN_CLASS_DEF_CLASS_IS_TYPE, new Dictionary<string, object> {
                        ["base_class"] = baseName,
                    });
                    
                    references.Add(Templates.CompileTemplate(Templates.BIN_CLASS_DEF_BASE_REF, new Dictionary<string, object> {
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

            return Templates.CompileTemplate(Templates.BIN_CLASS_DEF_MAIN, new Dictionary<string, object> {
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

        private static string GetRawType(ClassPropertyType? mapValueType) {
            throw new NotImplementedException();
        }

        private static string GetContainerType(ClassPropertyContainer? propertyContainer, HashSet<string> fwdDecalre, HashSet<string> binRef) {
            throw new NotImplementedException();
        }
    }
}
