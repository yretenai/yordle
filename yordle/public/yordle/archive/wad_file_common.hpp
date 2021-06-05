//
// Created by Lilith on 2020-09-09.
//

#pragma once

#include <cstdint>
#include <filesystem>

#include <yordle/yordle_export.h>

#include <standard_dragon/Array.hpp>

namespace yordle::archive {
#pragma pack(push, 1)
    typedef enum class WAD_STORAGE_TYPE : uint8_t {
        Uncompressed = 0,
        Zlib = 1,
        Symlink = 2,
        Zstd = 3
    } wad_storage_type;
#pragma pack(pop)

    template<typename T>
    class YORDLE_EXPORT wad_file {
    public:
        std::shared_ptr<dragon::Array<T>> entries;

        virtual std::shared_ptr<dragon::Array<uint8_t>> read_file(std::istream &stream, const T &entry) = 0;
        [[nodiscard]] virtual bool has_file(uint64_t hash) const = 0;
        [[nodiscard]] virtual bool has_file(const std::filesystem::path &path) const = 0;
    };
} // namespace yordle::archive
