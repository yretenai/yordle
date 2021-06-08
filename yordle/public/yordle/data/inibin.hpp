//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <any>
#include <array>
#include <map>

#include <standard_dragon/Array.hpp>

#include <yordle/data/json_helper.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT inibin {
    public:
        explicit inibin() = default;

        std::map<uint32_t, std::any> properties;

        static std::shared_ptr<yordle::data::inibin> load_inibin_file(dragon::Array<uint8_t> &buffer);

        virtual uint8_t inibin_version() = 0;
    };
} // namespace yordle::data
