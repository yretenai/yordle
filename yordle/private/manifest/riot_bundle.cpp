//
// Created by Lilith on 2021-03-22.
//

#include <cassert>

#include <yordle/manifest/riot_bundle.hpp>

#include <standard_dragon/exception/invalid_data.hpp>
#include <zstd.h>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::manifest {
    riot_bundle::riot_bundle(ifstream &stream) {
        auto data_start = reinterpret_cast<uintptr_t>(&id);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&version) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        stream.seekg(0, ios::end);
        int64_t offset = stream.tellg();
        if (offset < EXPECTED_DATA_SIZE) {
            throw invalid_data("Buffer passed to RiotBundle is too small!");
        }

        uint32_t fourcc;
        offset -= sizeof(uint32_t);
        stream.seekg(offset);
        stream.read(reinterpret_cast<char *>(&fourcc), sizeof(uint32_t));
        if (fourcc != FOURCC) {
            throw invalid_data("Buffer passed to RiotBundle is not a valid RBUN buffer.");
        }

        offset -= EXPECTED_DATA_SIZE;
        stream.seekg(offset);
        Array<uint8_t> buffer(EXPECTED_DATA_SIZE, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE);
        buffer.copy(data_start, 0, EXPECTED_DATA_SIZE);
        assert(version == 1);

        offset -= (int64_t) sizeof(riot_bundle_block) * block_count;
        stream.seekg(offset);
        blocks = make_shared<Array<riot_bundle_block>>(block_count, nullptr);
        stream.read(reinterpret_cast<char *>(blocks->data()), (streamsize) blocks->byte_size());
    }

    // todo: drop this, pass istream into read.
    riot_bundle::riot_bundle(Array<uint8_t> &buffer) {
        auto data_start = reinterpret_cast<uintptr_t>(&id);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&version) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        size_t offset = buffer.size() - sizeof(uint32_t);
        if (buffer.size() < EXPECTED_DATA_SIZE || buffer.cast<uint32_t>(offset) != FOURCC) {
            throw invalid_data("Buffer passed to RiotBundle is not a valid RBUN buffer.");
        }

        offset -= EXPECTED_DATA_SIZE;
        buffer.copy(data_start, offset, EXPECTED_DATA_SIZE);
        assert(version == 1);
        offset -= sizeof(riot_bundle_block) * block_count;
        data   = make_shared<Array<uint8_t>>(buffer.data(), offset);
        blocks = make_shared<Array<riot_bundle_block>>(reinterpret_cast<riot_bundle_block *>(buffer.data() + offset), block_count);
    }

    void riot_bundle::print(ostream &stream, Indent &indent) const {
        auto indent1 = indent + 1;
        auto indent2 = indent + 2;
        auto indent3 = indent + 3;

        stream << indent << "Riot Bundle v" << version << endl;

        stream << indent1 << "Id: " << HEXLOG64 << id << endl;
        stream << indent1 << "Count: " << dec << block_count << endl;

        stream << indent1 << "Blocks: " << endl;
        for (auto const &block : *blocks) {
            stream << indent2 << "Block(" << HEXLOG64 << block.block_id << ") = " << endl;
            stream << indent3 << "Size: " << HEXLOG64 << block.size << endl;
            stream << indent3 << "Compressed Size: " << HEXLOG64 << block.csize << endl;
        }
    }

    shared_ptr<Array<uint8_t>> riot_bundle::read_block(uint64_t block_id) const {
        if (data == nullptr) {
            return nullptr;
        }

        uint64_t offset                   = 0;
        shared_ptr<Array<uint8_t>> buffer = nullptr;
        for (const auto &block : *blocks) {
            if (block.block_id != block_id) {
                offset += block.csize;
                continue;
            }

            buffer = make_shared<Array<uint8_t>>(block.size, nullptr);
            ZSTD_decompress(buffer->data(), block.size, data->data() + offset, block.csize);
            break;
        }

        return buffer;
    }

    void riot_bundle::read_block(uint64_t block_id, ostream &out) const {
        auto buffer = read_block(block_id);
        if (buffer != nullptr) {
            out.write(reinterpret_cast<const char *>(buffer->data()), (streamsize) buffer->size());
        }
    }

    void riot_bundle::read_block(uint64_t block_id, istream &in, ostream &out) const {
        streampos offset = 0;
        for (const auto &block : *blocks) {
            if (block.block_id != block_id) {
                offset += block.csize;
                continue;
            }

            auto buffer     = Array<uint8_t>(block.size, nullptr);
            auto compressed = Array<uint8_t>(block.csize, nullptr);
            in.seekg(offset, ios::beg);
            in.read(reinterpret_cast<char *>(compressed.data()), (streamsize) compressed.size());
            ZSTD_decompress(buffer.data(), block.size, compressed.data(), block.csize);
            out.write(reinterpret_cast<const char *>(buffer.data()), (streamsize) buffer.size());
            break;
        }
    }
} // namespace yordle::manifest
