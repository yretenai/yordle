//
// Created by Lilith on 2021-06-16.
//

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <standard_dragon/Array.hpp>

#include "../tool_export.h"

namespace lulu {
    class YORDLE_TOOL_EXPORT file_type_detector {
    public:
        using FileType = struct FILE_TYPE {
            std::string ext;
            uint64_t magic;
            uint8_t bits;
        };

        static const std::vector<FileType> types;

        static std::string detect_extension(std::shared_ptr<dragon::Array<uint8_t>> &buffer);
    };
} // namespace lulu
