//
// Created by Lilith on 2021-04-23.
//

#include <yordle/yordle.hpp>

using namespace std;

namespace yordle {
    string get_version_str() {
        return YORDLE_VERSION_S;
    }

    int get_version() {
        return YORDLE_VERSION;
    }
} // namespace yordle
