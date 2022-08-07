#pragma once

#include <map>
#include <memory>
#include <string>

#include <standard_dragon/Array.hpp>
#include <standard_dragon/macros.hpp>

#include <yordle/yordle_export.h>

namespace yordle::audio {
    class YORDLE_EXPORT wem_pack {
    private:
        static constexpr uint32_t FOURCC = DRAGON_MAGIC32('r', '3', 'd', '2');

    public:
        explicit wem_pack() = default;
        explicit wem_pack(dragon::Array<uint8_t> &buffer);
        ~wem_pack() = default;

        std::map<std::wstring, std::shared_ptr<dragon::Array<uint8_t>>> audio;
    };
} // namespace yordle::audio
