//
// Created by Lilith on 2021-03-21.
//

#include <iostream>

#include <yordle/sieve/version_set.hpp>

using namespace std;
using namespace nlohmann;

namespace yordle::sieve {
    version_set::version_set(const string &buffer) {
        data = json::parse(buffer);
    }
} // namespace yordle::sieve
