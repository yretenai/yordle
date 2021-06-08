//
// Created by Lilith on 2021-06-06.
//
#include <yordle/data/property_bin.hpp>

yordle::data::property_bin::property_bin(dragon::Array<uint8_t> &buffer) {
}

nlohmann::json yordle::data::property_bin::dump(const yordle::cdtb::fnvhashlist &hashlist) {
    return nlohmann::json();
}
