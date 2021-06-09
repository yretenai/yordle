//
// Created by Lilith on 2020-09-10.
//

#include <sstream>
#include <string>

#include <yordle/cdtb/fnvhashlist.hpp>

#include <standard_dragon/hash/fnv1a.hpp>

using namespace dragon;
using namespace dragon::hash;
using namespace std;

namespace yordle::cdtb {
    fnvhashlist::fnvhashlist(Array<uint8_t> &buffer) {
        string line;

        uint32_t hash;
        auto stream = buffer.to_string_stream();
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash;
            line_stream >> hashes[hash];
        }
    }

    void fnvhashlist::validate() {
        uint32_t hash;
        for (const auto &pair : hashes) {
            string data = pair.second;
            transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
            hash = fnv1a32(reinterpret_cast<uint8_t *>(data.data()), data.length());
            if (hash != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG32 << pair.first << " instead got " << HEXLOG32 << hash);
            }
        }
    }

    string fnvhashlist::get_string(uint32_t hash) const {
        if (!hashes.contains(hash)) {
            stringstream stream;
            stream << "0x" << hex << hash;
            return stream.str();
        }

        return hashes.at(hash);
    }

    filesystem::path fnvhashlist::get_path(uint32_t hash) const {
        if (!hashes.contains(hash)) {
            return filesystem::path("__unknown") / get_string(hash);
        }

        return hashes.at(hash);
    }

    void fnvhashlist::combine(hashlist<uint32_t> &hashlist) {
        hashes.merge(hashlist.hashes);
    }
} // namespace yordle::cdtb
