//
// Created by Lilith on 3/23/2021.
//

#pragma once

#include <standard_dragon/Array.hpp>
#include <yordle/sieve/models/client_config_model.hpp>
#include <yordle/yordle_export.h>


namespace yordle::sieve {
    class YORDLE_EXPORT [[maybe_unused]] client_config {
    public:
        [[maybe_unused]] explicit client_config(const std::string &buffer);
        ~client_config() = default;

        std::shared_ptr<std::map<std::string, models::keystone_products_patchlines>> data;
    };
} // namespace yordle::sieve
