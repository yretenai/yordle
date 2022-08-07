#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/data/inibin.hpp>
#include <yordle/data/inibin_v1.hpp>
#include <yordle/data/inibin_v2.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

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

    json inibin::to_json(const yordle::cdtb::hashlist_collection &hashes) {
        json j;
        for (const auto &prop : properties) {
            auto key = hashes.get_fnvhash(prop.first);
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
                j[key] = prop.second.type().name();
            }
        }
        return j;
    }
} // namespace yordle::data
