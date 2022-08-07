//
// Created by Naomi on 2022-08-07.
//

#pragma once

#pragma once

#include <yordle/data/rst_file_v4.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT rst_file_v5 : public rst_file_v4 {
    public:
        explicit rst_file_v5() = default;
        explicit rst_file_v5(dragon::Array<uint8_t> &buffer);
        ~rst_file_v5() = default;
    };

} // namespace yordle::data
