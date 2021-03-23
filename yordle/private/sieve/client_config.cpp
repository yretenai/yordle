//
// Created by Lilith on 3/23/2021.
//

#include <yordle/sieve/client_config.hpp>
[[maybe_unused]] yordle::sieve::client_config::client_config(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
