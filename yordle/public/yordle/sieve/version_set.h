//
// Created by Lilith on 3/21/2021.
//

#pragma once

#include "yordle/yordle_export.h"
#include "yordle/sieve/version_set_model.h"
#include <standard_dragon/Array.hpp>

namespace yordle::sieve {
    class YORDLE_EXPORT [[maybe_unused]] version_set {
    public:
        [[maybe_unused]] explicit version_set(std::string &buffer);
        ~version_set() = default;

        std::shared_ptr<version_set_model> data;
    };
}