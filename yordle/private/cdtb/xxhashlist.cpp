//
// Created by Lilith on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

using namespace dragon;
using namespace std;

namespace yordle::cdtb {
    xxhashlist::xxhashlist(Array<uint8_t> &buffer) {
        string line;

        uint64_t hash_value;
        auto stream = buffer.to_string_stream();
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash_value;
            line_stream >> hashes[hash_value];
        }
    }

    void xxhashlist::validate() {
        uint64_t test;
        for (const auto &pair : hashes) {
            test = hash(pair.second);
            if (test != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG64 << pair.first << " instead got " << HEXLOG64 << test);
            }
        }
    }

    uint64_t xxhashlist::hash(std::string str) {
        str_to_lower(str);
        return XXH64(str.data(), str.length(), 0);
    }

    shared_ptr<hashlist<uint64_t>> xxhashlist::restrict_bits(uint8_t bits) const {
        auto list = make_shared<xxhashlist>();
        auto mask = ((uint64_t) 1 << bits) - 1;
        for (const auto &hash : hashes) {
            list->hashes[hash.first & mask] = hash.second;
        }
        return list;
    }
} // namespace yordle::cdtb
