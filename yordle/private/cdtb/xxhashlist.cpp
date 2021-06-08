//
// Created by Lilith on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

using namespace std;

namespace yordle::cdtb {
    xxhashlist::xxhashlist(istream &stream) {
        string line;

        uint64_t hash;
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash;
            line_stream >> hashes[hash];
        }
    }

    void xxhashlist::validate() {
        uint64_t hash;
        for (const auto &pair : hashes) {
            string data = pair.second.string();
            transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
            hash = XXH64(data.data(), data.length(), 0);
            if (hash != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG64 << pair.first << " instead got " << HEXLOG64 << hash);
            }
        }
    }

    filesystem::path xxhashlist::get_path(uint64_t hash) {
        if (!hashes.contains(hash)) {
            stringstream stream;
            stream << hex << hash;
            return filesystem::path("__unknown") / stream.str();
        }

        return hashes[hash];
    }
} // namespace yordle::cdtb
