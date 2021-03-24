//
// Created by Lilith on 2021-03-21.
//

#include <iostream>

#include <yordle/sieve/version_set.hpp>

[[maybe_unused]] yordle::sieve::version_set::version_set(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
