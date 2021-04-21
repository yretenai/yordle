//
// Created by Lilith on 2021-03-22.
//

#include <cassert>

#include <yordle/manifest/riot_bundle.hpp>

#include <standard_dragon/exception/invalid_data.hpp>


yordle::manifest::riot_bundle::riot_bundle(dragon::Array<uint8_t> &buffer) {
    auto data_start = reinterpret_cast<uintptr_t>(&id);
#ifndef NDEBUG
    auto data_end = reinterpret_cast<uintptr_t>(&version) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    size_t offset = buffer.size() - sizeof(uint32_t);
    if (buffer.size() < EXPECTED_DATA_SIZE || buffer.cast<uint32_t>(offset) != FOURCC) {
        throw dragon::exception::invalid_data("Buffer passed to RiotBundle is not a valid RBUN buffer.");
    }

    offset -= EXPECTED_DATA_SIZE;
    buffer.copy(data_start, offset, EXPECTED_DATA_SIZE);
    assert(version == 1);
    offset -= sizeof(riot_bundle_block) * block_count;
    data = std::make_shared<dragon::Array<uint8_t>>(buffer.data(), offset, true);
    blocks = std::make_shared<dragon::Array<riot_bundle_block>>(reinterpret_cast<riot_bundle_block *>(buffer.data() + offset), block_count, true);
}

void yordle::manifest::riot_bundle::print(std::ostream &stream, dragon::Indent &indent) const {
    auto indent1 = indent + 1;
    auto indent2 = indent + 2;
    auto indent3 = indent + 3;

    stream << indent << "Riot Bundle v" << version << std::endl;

    stream << indent1 << "Id: " << HEXLOG64 << id << std::endl;
    stream << indent1 << "Count: " << std::dec << block_count << std::endl;

    stream << indent1 << "Blocks: " << std::endl;
    for (auto const &block : *blocks) {
        stream << indent2 << "Block(" << HEXLOG64 << block.block_id << ") = " << std::endl;
        stream << indent3 << "Size: " << HEXLOG64 << block.size << std::endl;
        stream << indent3 << "Compressed Size: " << HEXLOG64 << block.csize << std::endl;
    }
}
