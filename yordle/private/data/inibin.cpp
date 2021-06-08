//
// Created by Lilith on 2021-06-06.
//

#include <yordle/data/inibin.hpp>
#include <yordle/data/inibin_v1.hpp>
#include <yordle/data/inibin_v2.hpp>

using namespace std;
using namespace dragon;

namespace yordle::data {
    shared_ptr<inibin> inibin::load_inibin_file(Array<uint8_t> &buffer) {
        switch (buffer.get(0)) {
            case 1:
                return make_shared<inibin_v1>(buffer);
            case 2:
                return make_shared<inibin_v2>(buffer);
            default:
                return nullptr;
        }
    }
} // namespace yordle::data
