//
// Created by Lilith on 2021-06-06.
//

#include <standard_dragon/exception/invalid_data.hpp>
#include <standard_dragon/exception/not_implemented.hpp>

#include <yordle/data/property_bin.hpp>

using namespace std;
using namespace dragon;
using namespace dragon::exception;
using namespace nlohmann;

namespace yordle::data {
    property_bin::property_bin(Array<uint8_t> &buffer) {
        uintptr_t ptr = 0;

        auto fourcc = buffer.lpcast<uint32_t>(&ptr);
        if (fourcc == FOURCC_PATCH) {
            parent_hash = buffer.lpcast<uint64_t>(&ptr);
            fourcc      = buffer.lpcast<uint32_t>(&ptr);
        }

        if (fourcc != FOURCC) {
            throw invalid_data("Buffer passed to property_bin is not a valid PROP buffer.");
        }

        version = buffer.lpcast<uint32_t>(&ptr);
        if (version > 3) {
            throw not_implemented("property_bin version is not supported");
        }

        if (version >= 2) {
            auto dep_count = buffer.lpcast<uint32_t>(&ptr);
            for (auto i = 0; i < dep_count; ++i) {
                auto size = buffer.lpcast<uint16_t>(&ptr);
                dependencies.emplace_back(string(reinterpret_cast<const char *>(buffer.data() + ptr), size));
                ptr += size;
            }
        }

        auto obj_count  = buffer.lpcast<uint32_t>(&ptr);
        auto obj_hashes = buffer.lpcast<uint32_t>(&ptr, obj_count);

        for (auto obj_hash : obj_hashes) {
            objects.emplace(make_shared<prop::object_prop>(buffer, ptr, version, obj_hash));
        }
    }

    json property_bin::to_json(const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list) const {
        json j;

        if (parent_hash > 0) {
            j["prev"] = hash_list.get_string(parent_hash);
        }

        j["dependencies"] = dependencies;

        json objs = json::array();
        for (const auto &object : objects) {
            json obj;
            obj["type"] = hash_list.get_string(object->path_hash);
            json data;
            object->to_json(data, hash_list, file_hash_list, {});
            obj["data"] = data;
            objs.emplace_back(obj);
        }
        j["objects"] = objs;

        return j;
    }
} // namespace yordle::data
