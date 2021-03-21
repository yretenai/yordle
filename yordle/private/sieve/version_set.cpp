//
// Created by Lilith on 3/21/2021.
//

#include "yordle/sieve/version_set.hpp"
#include <iostream>

[[maybe_unused]] yordle::sieve::version_set::version_set(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
