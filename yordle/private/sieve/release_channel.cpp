//
// Created by Lilith on 2021-03-23.
//

#include <yordle/sieve/release_channel.hpp>

using namespace std;
using namespace nlohmann;

namespace yordle::sieve {
    release_channel::release_channel(const string &buffer) {
        data = json::parse(buffer);
    }
} // namespace yordle::sieve
