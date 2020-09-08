//
// Created by yretenai on 2020-08-25.
//


#include <poppy/manifest/riot_manifest.hpp>
#include <standard_dragon/dragon.h>

using namespace poppy::manifest;

int main(int argc, char **argv) {
    dragon::Array<uint8_t> data = dragon::read_file(argv[1]);
    riot_manifest rman(data);
}
