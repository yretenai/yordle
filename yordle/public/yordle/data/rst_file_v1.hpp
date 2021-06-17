//
// Created by Lilith on 2021-06-17.
//

#pragma once

#pragma once

#include <yordle/data/rst_file.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT rst_file_v1 : public rst_file {
    public:
        explicit rst_file_v1() = default;
        explicit rst_file_v1(dragon::Array<uint8_t> &buffer);
        ~rst_file_v1() = default;

#pragma pack(push, 1)
        struct {
            yordle::data::rst_version fourcc = yordle::data::rst_version::v0;
            uint32_t entry_count             = 0;
            bool some_switch                 = false;
        };
#pragma pack(pop)

        rst_version get_rst_version() override {
            return fourcc;
        }
    };

} // namespace yordle::data
