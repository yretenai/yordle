//
// Created by yretenai on 2020-08-25.
//


#include <yordle/yordle.hpp>
#include <ostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        return -1;
    }

    std::string data = dragon::read_file(argv[1]).to_string();
    auto test = yordle::sieve::client_config(data);
}
