//
// Created by Lilith on 2021-03-23.
//

#pragma once

#include <standard_dragon/Array.hpp>
#include <yordle/sieve/models/client_config_model.hpp>
#include <yordle/yordle_export.h>


namespace yordle::sieve {
    class YORDLE_EXPORT client_config {
    public:
        explicit client_config(const std::string &buffer);
        ~client_config() = default;

        std::shared_ptr<std::map<std::string, models::keystone_products_patchlines>> data;
    };
} // namespace yordle::sieve
