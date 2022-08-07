#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/data/prop/string_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    string_prop::string_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type      = prop_type::string;
        auto size = buffer.lpcast<uint16_t>(ptr);
        value     = std::string(reinterpret_cast<const char *>(buffer.data() + ptr), size);

        ptr += size;
    }

    void string_prop::to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hashes.get_fnvhash(key, cdtb::hashlist_target::prop_field);
        }

        if (store_type_info) {
            json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", value}};
        } else {
            json[obj_key.value()] = value;
        }
    }
} // namespace yordle::data::prop
