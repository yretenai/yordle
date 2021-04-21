//
// Created by Lilith on 2021-03-23.
//

#include <yordle/sieve/release_channel.hpp>

yordle::sieve::release_channel::release_channel(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
