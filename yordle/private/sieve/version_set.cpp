//
// Created by Lilith on 3/21/2021.
//

#include "yordle/sieve/version_set.h"

[[maybe_unused]] yordle::sieve::version_set::version_set(std::string &buffer) {
    data = std::make_shared<version_set_model>(nlohmann::json::parse(buffer));
}
