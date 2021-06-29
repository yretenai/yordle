//
// Created by Lilith on 2020-09-10.
//

#include <sstream>
#include <string>

#include <yordle/cdtb/fnvhashlist.hpp>
#include <yordle/cdtb/hashlist_collection.hpp>

#include <standard_dragon/hash/fnv1a.hpp>

using namespace dragon;
using namespace dragon::hash;
using namespace std;

namespace yordle::cdtb {
    fnvhashlist::fnvhashlist(Array<uint8_t> &buffer) {
        string line;

        uint32_t hash_value;
        auto stream = buffer.to_string_stream();
        while (getline(stream, line, '\n')) {
            istringstream line_stream = istringstream(line);
            line_stream >> hex >> hash_value;
            line_stream >> hashes[hash_value];
        }
    }

    void fnvhashlist::validate() {
        uint32_t test;
        for (const auto &pair : hashes) {
            test = hash(pair.second);
            if (test != pair.first) {
                DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG32 << pair.first << " instead got " << HEXLOG32 << test);
            }
        }
    }

    uint32_t fnvhashlist::hash(std::string str) {
        dragon::str_to_lower(str);
        return dragon::hash::fnv1a32(reinterpret_cast<uint8_t *>(str.data()), str.length());
    }

    shared_ptr<hashlist<uint32_t>> fnvhashlist::restrict_bits(uint8_t bits) const {
        auto list = make_shared<fnvhashlist>();
        auto mask = (1u << bits) - 1;
        for (const auto &hash : hashes) {
            list->hashes[hash.first & mask] = hash.second;
        }
        return list;
    }
} // namespace yordle::cdtb
