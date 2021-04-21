//
// Created by Lilith on 2021-03-23.
//

#pragma once

#include <standard_dragon/Array.hpp>
#include <yordle/sieve/models/release_channel_model.hpp>
#include <yordle/yordle_export.h>


namespace yordle::sieve {
    class YORDLE_EXPORT release_channel {
    public:
        explicit release_channel(const std::string &buffer);
        ~release_channel() = default;

        std::shared_ptr<models::release_channel> data;
    };
} // namespace yordle::sieve
