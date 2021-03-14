//
// Created by yretenai on 2020-09-10.
//

#include <sstream>

#include <yordle/cdtb/xxhashlist.hpp>

#include <xxhash.h>

yordle::cdtb::xxhashlist::xxhashlist(const dragon::Array<uint8_t> &buffer) {
    if (buffer.empty()) return;

    std::istringstream stream(reinterpret_cast<char *>(buffer.data()));
    std::string line;

    uint64_t hash;
    while (std::getline(stream, line, '\n')) {
        std::istringstream line_stream = std::istringstream(line);
        line_stream >> std::hex >> hash;
        line_stream >> hashes[hash];
    }
}

void yordle::cdtb::xxhashlist::validate() {
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
