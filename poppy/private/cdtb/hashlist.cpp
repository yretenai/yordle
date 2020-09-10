//
// Created by yretenai on 2020-09-10.
//

#include <sstream>

#include <poppy/cdtb/hashlist.hpp>

poppy::cdtb::hashlist::hashlist(const dragon::Array<uint8_t> &buffer) {
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