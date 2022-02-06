using System.IO;
using System.Text.Json;

namespace Yordle.CodeGen.PropertyBin {
    public static class Program {
        public static void Main(string[] args) {
            var meta = JsonSerializer.Deserialize<Meta>(File.ReadAllText(args[0]), new JsonSerializerOptions { PropertyNamingPolicy = JsonNamingPolicy.CamelCase});
        }
    }
}
