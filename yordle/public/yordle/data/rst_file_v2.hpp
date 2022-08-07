//
// Created by Naomi on 2021-06-17.
//

#pragma once

#pragma once

#include <yordle/data/rst_file_v1.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT rst_file_v2 : public rst_file_v1 {
    public:
        explicit rst_file_v2() = default;
        explicit rst_file_v2(dragon::Array<uint8_t> &buffer);
        ~rst_file_v2() = default;

        std::string config;

        nlohmann::json to_json(cdtb::hashlist_collection &hashes) override;
    };

} // namespace yordle::data
