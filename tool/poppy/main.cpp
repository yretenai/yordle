//
// Created by yretenai on 2020-08-25.
//


#include <yordle/yordle.hpp>
#include <ostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        return -1;
    }

    std::ifstream file(argv[1], std::ios::binary | std::ios::in);
    auto wad = yordle::archive::wad_file_v3(file);
}
