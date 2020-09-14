//
// Created by yretenai on 2020-08-25.
//


#include <yordle/yordle.hpp>

int main(int argc, char **argv) {
    if (argc < 2) {
        return -1;
    }
    auto list = yordle::cdtb::fnvhashlist(dragon::read_file(argv[1]));
    list.validate();
}
