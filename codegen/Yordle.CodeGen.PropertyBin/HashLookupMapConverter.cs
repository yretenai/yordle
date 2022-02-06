using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace Yordle.CodeGen.PropertyBin;

public class HashLookupMapConverter<T> : JsonConverter<Dictionary<(string, uint), T>> {
    public override Dictionary<(string, uint), T>? Read(ref Utf8JsonReader reader, Type typeToConvert, JsonSerializerOptions options) {
        var originalDict = JsonSerializer.Deserialize<Dictionary<string, T>>(ref reader, options);
        if (originalDict == null) {
            return null;
        }
        
        var dict = new Dictionary<(string, uint), T>();
        foreach (var (text, value) in originalDict) {
            if (text.Length < 3 || !text.StartsWith("0x")) {
                dict[(text, 0)] = value;
            }
            
            var hash = uint.Parse(text[2..], NumberStyles.HexNumber);
            dict[(HashLookupConverter.HashMap.TryGetValue(hash, out var name) ? name : text[1..], hash)] = value;
        }

        return dict;
    }

    public override void Write(Utf8JsonWriter writer, Dictionary<(string, uint), T> value, JsonSerializerOptions options) {
        throw new NotSupportedException();
    }
}
