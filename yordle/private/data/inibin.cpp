//
// Created by Lilith on 2021-06-06.
//

#include <yordle/data/inibin.hpp>
#include <yordle/data/inibin_v1.hpp>
#include <yordle/data/inibin_v2.hpp>

#include <nlohmann/json.hpp>

using namespace std;
using namespace dragon;

shared_ptr<yordle::data::inibin> yordle::data::inibin::load_inibin_file(Array<uint8_t> &buffer) {
    switch (buffer.get(0)) {
        case 1:
            return make_shared<yordle::data::inibin_v1>(buffer);
        case 2:
            return make_shared<yordle::data::inibin_v2>(buffer);
        default:
            return nullptr;
    }
}

std::string yordle::data::inibin::dump_to_json() {
    nlohmann::json j;
    for (auto prop : properties) {
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
        } else if (prop.second.type() == typeid(std::string)) {
            j[str] = any_cast<std::string const &>(prop.second);
        } else {
            j[str] = prop.second.type().raw_name();
        }
    }

    return j.dump(2, ' ', false, nlohmann::json::error_handler_t::replace);
}
