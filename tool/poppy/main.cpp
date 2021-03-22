//
// Created by yretenai on 2020-08-25.
//


#include <yordle/yordle.hpp>
#include <ostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        return -1;
    }

    auto data = dragon::read_file(argv[1]);
    auto bundle = yordle::manifest::riot_bundle(data);
    std::ostream& out = std::cout;
    auto indent = dragon::Indent(0);
    bundle.print(out, indent);

    return 0;
}
