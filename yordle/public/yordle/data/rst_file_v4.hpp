//
// Created by Lilith on 2021-06-17.
//

#pragma once

#pragma once

#include <yordle/data/rst_file_v1.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data {
    class YORDLE_EXPORT rst_file_v4 : public rst_file_v1 {
    public:
        explicit rst_file_v4() = default;
        explicit rst_file_v4(dragon::Array<uint8_t> &buffer);
        ~rst_file_v4() = default;

        nlohmann::json to_json(cdtb::hashlist_collection &hashes) override;
    };

} // namespace yordle::data
