//
// Created by Lilith on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

using namespace std;

namespace yordle::cdtb {
    xxhashlist::xxhashlist(std::istream &stream) {
        std::string line;

        uint64_t hash;
        while (std::getline(stream, line, '\n')) {
            std::istringstream line_stream = std::istringstream(line);
            line_stream >> std::hex >> hash;
            line_stream >> hashes[hash];
        }
    }

    void xxhashlist::validate() {
        uint64_t hash;
        for (const auto &pair : hashes) {
            std::string data = pair.second.string();
            std::transform(data.begin(), data.end(), data.begin(), [](char c) { return std::tolower(c); });
            hash = XXH64(data.data(), data.length(), 0);
            if (hash != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG64 << pair.first << " instead got " << HEXLOG64 << hash);
            }
        }
    }

    std::filesystem::path xxhashlist::get_path(uint64_t hash) {
        if (!hashes.contains(hash)) {
            std::stringstream stream;
            stream << hex << hash;
            return std::filesystem::path("__unknown") / stream.str();
        }

        return hashes[hash];
    }
} // namespace yordle::cdtb
