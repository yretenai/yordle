//
// Created by Lilith on 2021-03-23.
//

#include <yordle/sieve/client_config.hpp>
[[maybe_unused]] yordle::sieve::client_config::client_config(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
