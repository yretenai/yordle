﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace Yordle.CodeGen.PropertyBin; 

public class HashLookupConverter : JsonConverter<string?> {
    public static Dictionary<uint, string> HashMap { get; } = new();

    static HashLookupConverter() {
        ProcessHashes("binfields");
        ProcessHashes("binhashes");
        ProcessHashes("bintypes");
    }

    private static void ProcessHashes(string type) {
        var cwd = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? "./";
        foreach (var rawLine in File.ReadAllLines(Path.Combine(cwd, $"hashes.{type}.txt"))) {
            var line = rawLine.Trim();
            if (line.Length <= 10) {
                continue;
            }

            var hash = uint.Parse(line[..8], NumberStyles.HexNumber);
            var value = line[9..];

            if (HashMap.ContainsKey(hash)) {
                Debug.WriteLine($"hash collision: {hash:x8} {HashMap[hash]} = {value}");
            }

            HashMap[hash] = value;
        }
    }

    public override string? Read(ref Utf8JsonReader reader, Type typeToConvert, JsonSerializerOptions options) {
        if (reader.TokenType != JsonTokenType.String && reader.TokenType != JsonTokenType.PropertyName) {
            return null;
        }

        var text = reader.GetString();
        if (text == null ||
            text.Length < 10 ||
            !text.StartsWith("0x")) {
            return text;
        }

        try {
            var hash = uint.Parse(text[2..], NumberStyles.HexNumber);
            return HashMap.TryGetValue(hash, out var value) ? value : text[1..];
        } catch {
            return text;
        }
    }

    public override void Write(Utf8JsonWriter writer, string? value, JsonSerializerOptions options) {
        throw new NotSupportedException();
    }
}