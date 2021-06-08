//
// Created by Lilith on 2021-06-08.
//

#include <sstream>

#include <yordle/data/json_helper.hpp>

using namespace nlohmann;
using namespace std;

namespace yordle::data {
    json dump(const map<uint32_t, any> &properties, const yordle::cdtb::fnvhashlist &hashlist) {
        json j;
        for (const auto &prop : properties) {
            auto key = hashlist.get_string(prop.first);
            if (!prop.second.has_value()) {
                j[key] = nullptr;
            }

            if (prop.second.type() == typeid(uint32_t)) {
                j[key] = any_cast<uint32_t const &>(prop.second);
            } else if (prop.second.type() == typeid(float)) {
                j[key] = any_cast<float const &>(prop.second);
            } else if (prop.second.type() == typeid(uint16_t)) {
                j[key] = any_cast<uint16_t const &>(prop.second);
            } else if (prop.second.type() == typeid(uint8_t)) {
                j[key] = any_cast<uint8_t const &>(prop.second);
            } else if (prop.second.type() == typeid(bool)) {
                j[key] = any_cast<bool const &>(prop.second);
            } else if (prop.second.type() == typeid(uint8x3_type)) {
                j[key] = any_cast<uint8x3_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float4_type)) {
                j[key] = any_cast<float4_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float3_type)) {
                j[key] = any_cast<float3_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float2_type)) {
                j[key] = any_cast<float2_type const &>(prop.second);
            } else if (prop.second.type() == typeid(string)) {
                j[key] = any_cast<string const &>(prop.second);
            } else {
                j[key] = prop.second.type().raw_name();
            }
        }
        return j;
    }
} // namespace yordle::data
