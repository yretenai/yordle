//
// Created by Lilith on 2020-09-10.
//

#include <sstream>
#include <string>

#include <yordle/cdtb/fnvhashlist.hpp>

#include <standard_dragon/hash/fnv1a.hpp>

using namespace dragon::hash;
using namespace std;

namespace yordle::cdtb {
    fnvhashlist::fnvhashlist(istream &stream) {
        string line;

        uint32_t hash;
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash;
            line_stream >> hashes[hash];
        }
    }

    void fnvhashlist::validate() {
        uint32_t hash;
        for (const auto &pair : hashes) {
            string data = pair.second.string();
            transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
            hash = fnv1a32(reinterpret_cast<uint8_t *>(data.data()), data.length());
            if (hash != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG32 << pair.first << " instead got " << HEXLOG32 << hash);
            }
        }
    }

    filesystem::path fnvhashlist::get_path(uint32_t hash) {
        if (!hashes.contains(hash)) {
            stringstream stream;
            stream << hex << hash;
            return filesystem::path("__unknown") / stream.str();
        }

        return hashes[hash];
    }
} // namespace yordle::cdtb
