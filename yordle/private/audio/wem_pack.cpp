//
// Created by Lilith on 2021-06-13.
//

#include <yordle/audio/wem_pack.hpp>

#include <standard_dragon/exception/invalid_data.hpp>
#include <standard_dragon/exception/not_implemented.hpp>

using namespace dragon;
using namespace dragon::exception;

namespace yordle::audio {
    wem_pack::wem_pack(Array<uint8_t> &buffer) {
        if (buffer.cast<uint32_t>(0) != FOURCC) {
            throw invalid_data("Buffer passed to WemPack is not a valid r3d2 buffer.");
        }

        if (buffer.cast<uint32_t>(4) != 1) {
            throw not_implemented("Buffer passed to WemPack is an invalid version.");
        }

        auto count   = buffer.cast<uint32_t>(8);
        auto offsets = buffer.cast<uint32_t>(12, count);

        for (auto offset : offsets) {
            auto wem_offset      = buffer.cast<uint32_t>(offset);
            auto wem_size        = buffer.cast<uint32_t>(offset + 4);
            auto wem_name_length = buffer.cast<uint32_t>(offset + 8);
            auto str             = std::wstring(reinterpret_cast<wchar_t *>(buffer.data() + offset + 12), wem_name_length);

            audio[str] = std::make_shared<dragon::Array<uint8_t>>(buffer.data() + wem_offset, wem_size);
        }
    }
} // namespace yordle::audio
