//
// Created by Lilith on 2021-06-08.
//

#include <sstream>

#include <yordle/data/json_helper.hpp>

using namespace nlohmann;
using namespace std;

namespace yordle::data {
    json dump(const map<uint32_t, any> &properties) {
        json j;
        for (const auto &prop : properties) {
            stringstream str_stream;
            str_stream << hex << prop.first;
            auto str = str_stream.str();
            if (!prop.second.has_value()) {
                j[str] = nullptr;
            }

            if (prop.second.type() == typeid(uint32_t)) {
                j[str] = any_cast<uint32_t const &>(prop.second);
            } else if (prop.second.type() == typeid(float)) {
                j[str] = any_cast<float const &>(prop.second);
            } else if (prop.second.type() == typeid(uint16_t)) {
                j[str] = any_cast<uint16_t const &>(prop.second);
            } else if (prop.second.type() == typeid(uint8_t)) {
                j[str] = any_cast<uint8_t const &>(prop.second);
            } else if (prop.second.type() == typeid(bool)) {
                j[str] = any_cast<bool const &>(prop.second);
            } else if (prop.second.type() == typeid(uint8x3_type)) {
                j[str] = any_cast<uint8x3_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float4_type)) {
                j[str] = any_cast<float4_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float3_type)) {
                j[str] = any_cast<float3_type const &>(prop.second);
            } else if (prop.second.type() == typeid(float2_type)) {
                j[str] = any_cast<float2_type const &>(prop.second);
            } else if (prop.second.type() == typeid(string)) {
                j[str] = any_cast<string const &>(prop.second);
            } else {
                j[str] = prop.second.type().raw_name();
            }
        }
        return j;
    }
} // namespace yordle::data
