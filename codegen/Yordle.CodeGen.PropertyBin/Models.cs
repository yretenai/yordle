using System.Collections.Generic;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace Yordle.CodeGen.PropertyBin;

public record Meta {
    [JsonConverter(typeof(HashLookupMapConverter<Class>))]
    public Dictionary<(string Name, uint Hash), Class> Classes { get; set; } = new();

    public string Version { get; set; } = "1.0.0.0";
}

public record Class {
    [JsonConverter(typeof(HashLookupConverter))]
    public (string? Name, uint Hash) Base { get; set; }

    [JsonPropertyName("secondary_bases")]
    private Dictionary<string, int> SecondaryBases { get; set; } = new();

    [JsonPropertyName("secondary_children")]
    private Dictionary<string, int> SecondaryChildren { get; set; } = new();

    private int Size { get; set; }
    private int Alignment { get; set; }
    private ClassFlags Is { get; set; } = new();
    private ClassFunctions Fn { get; set; } = new();
    [JsonConverter(typeof(HashLookupMapConverter<ClassProperties>))]
    public Dictionary<(string Name, uint Hash), ClassProperties>? Properties { get; set; }
    [JsonConverter(typeof(HashLookupMapConverter<JsonElement>))]
    public Dictionary<(string Name, uint Hash), JsonElement>? Defaults { get; set; } 
}

public record ClassFlags {
    [JsonPropertyName("property_base")]
    public bool PropertyBase { get; set; }

    public bool Interface { get; set; }
    public bool Value { get; set; }

    [JsonPropertyName("secondary_base")]
    public bool SecondaryBase { get; set; }

    public bool Unk5 { get; set; }
}

public record ClassFunctions {
    public string? Constructor { get; set; }
    public string? Destructor { get; set; }

    [JsonPropertyName("inplace_constructor")]
    public string? InplaceConstructor { get; set; }

    [JsonPropertyName("inplace_destructor")]
    public string? InplaceDestructor { get; set; }

    public string? Register { get; set; }

    [JsonPropertyName("upcast_secondary")]
    public string? UpcastSecondary { get; set; }
}

public record ClassProperties {
    [JsonPropertyName("other_class")]
    [JsonConverter(typeof(HashLookupConverter))]
    public (string? Name, uint Hash) OtherClass { get; set; }

    public int Offset { get; set; }
    public int Bitmask { get; set; }

    [JsonPropertyName("value_type"), JsonConverter(typeof(JsonStringEnumConverter))]
    public ClassPropertyType ValueType { get; set; }

    public ClassPropertyContainer? Container { get; set; }
    public ClassPropertyMap? Map { get; set; }
}

public enum ClassPropertyType {
    None = 0,
    Bool = 1,
    I8 = 2,
    U8 = 3,
    I16 = 4,
    U16 = 5,
    I32 = 6,
    U32 = 7,
    I64 = 8,
    U64 = 9,
    F32 = 10,
    Vec2 = 11,
    Vec3 = 12,
    Vec4 = 13,
    Mtx44 = 14,
    Color = 15,
    String = 16,
    Hash = 17,
    File = 18,
    List = 0x80 | 0,
    List2 = 0x80 | 1,
    Pointer = 0x80 | 2,
    Embed = 0x80 | 3,
    Link = 0x80 | 4,
    Option = 0x80 | 5,
    Map = 0x80 | 6,
    Flag = 0x80 | 7,
}

public record ClassPropertyContainer {
    [JsonPropertyName("vtable")]
    public string VTable { get; set; } = null!;

    [JsonPropertyName("value_type"), JsonConverter(typeof(JsonStringEnumConverter))]
    public ClassPropertyType ValueType { get; set; }

    [JsonPropertyName("value_size")]
    public int ValueSize { get; set; }

    [JsonPropertyName("fixed_size")]
    public int? FixedSize { get; set; }

    public string? Storage { get; set; }
}

public record ClassPropertyMap {
    [JsonPropertyName("vtable")]
    public string VTable { get; set; } = null!;

    [JsonPropertyName("key_type"), JsonConverter(typeof(JsonStringEnumConverter))]
    public ClassPropertyType KeyType { get; set; }

    [JsonPropertyName("value_type"), JsonConverter(typeof(JsonStringEnumConverter))]
    public ClassPropertyType ValueType { get; set; }

    public string? Storage { get; set; }
}
