//
// Created by Lilith on 2020-09-10.
//

#include <sstream>
#include <string>

#include <yordle/cdtb/fnvhashlist.hpp>

#include <standard_dragon/hash/fnv1a.hpp>

yordle::cdtb::fnvhashlist::fnvhashlist(std::istringstream stream) {
    std::string line;

    uint32_t hash;
    while (std::getline(stream, line, '\n')) {
        std::istringstream line_stream = std::istringstream(line);
        line_stream >> std::hex >> hash;
        line_stream >> hashes[hash];
    }
}

void yordle::cdtb::fnvhashlist::validate() {
    uint32_t hash;
    for (const auto &pair : hashes) {
        std::string data = pair.second.string();
        std::transform(data.begin(), data.end(), data.begin(), [](char c) { return std::tolower(c); });
        hash = dragon::hash::fnv1a32(reinterpret_cast<uint8_t *>(data.data()), data.length());
        if (hash != pair.first) {
            DRAGON_LOG("Failed to match " << pair.second << " to hash " << HEXLOG32 << pair.first << " instead got " << HEXLOG32 << hash);
        }
    }
}
