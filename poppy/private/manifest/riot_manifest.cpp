//
// Created by yretenai on 2020-08-25.
//

#include <cassert>
#include <poppy/exception/invalid_data_exception.hpp>
#include <poppy/manifest/riot_manifest.hpp>
#include <zstd.h>

using namespace poppy::exception;

poppy::manifest::riot_manifest::riot_manifest(dragon::Array<uint8_t> &buffer) {
    uintptr_t data_start = reinterpret_cast<uintptr_t>(&version_major);
#ifndef NDEBUG
    uintptr_t data_end = reinterpret_cast<uintptr_t>(&size) + sizeof(uint32_t);
    assert(data_end - data_start == riot_manifest::EXPECTED_DATA_SIZE);
#endif

    if (buffer.cast<uint32_t>(0) != riot_manifest::FOURCC || buffer.size() < riot_manifest::EXPECTED_DATA_SIZE + 0x100) {
        throw invalid_data_exception("Buffer passed to RiotManifest is not a valid RMAN buffer.");
    }

    buffer.copy(data_start, 4, riot_manifest::EXPECTED_DATA_SIZE);
    assert(buffer.size() >= csize + offset + 0x100);
    assert(version_major == 2);
    assert(version_minor == 0);
    assert(*reinterpret_cast<uint16_t *>(&flags) == 0x200);

    if (size > 0) {
        if (flags.compressed) {
            data = std::make_shared<dragon::Array<uint8_t>>(size, nullptr);
            ZSTD_decompress(data->data(), size, buffer.data() + offset, csize);
        } else {
            data = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset, size, nullptr);
        }
    }

    signature = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + offset + csize, 0x100, nullptr);
}

const poppy::manifest::generated::rman *poppy::manifest::riot_manifest::get_rman_data() const {
    return generated::Getrman(data->data());
}
