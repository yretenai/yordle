//
// Created by Lilith on 2021-03-23.
//

#include <yordle/sieve/client_config.hpp>

using namespace std;
using namespace nlohmann;

namespace yordle::sieve {
    client_config::client_config(const string &buffer) {
        data = json::parse(buffer);
    }
} // namespace yordle::sieve
