//
// Created by Lilith on 3/23/2021.
//

#include <yordle/sieve/release_channel.hpp>

[[maybe_unused]] yordle::sieve::release_channel::release_channel(const std::string &buffer) {
    data = nlohmann::json::parse(buffer);
}
