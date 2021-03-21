//
// Created by yretenai on 2020-08-25.
//


#include <yordle/yordle.hpp>

int main(int argc, char **argv) {
    if (argc < 2) {
        return -1;
    }

    auto version_set = yordle::sieve::version_set(dragon::read_file(argv[1]).to_string());
}
