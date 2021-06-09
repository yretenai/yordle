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
            }
        }

        auto obj_count  = buffer.lpcast<uint32_t>(&ptr);
        auto obj_hashes = buffer.lpcast<uint32_t>(&ptr, obj_count);

        for (auto obj_hash : obj_hashes) {
            objects[obj_hash] = make_shared<prop::object_prop>(buffer, ptr, version, obj_hash);
        }
    }

    nlohmann::json property_bin::dump(const yordle::cdtb::fnvhashlist &hashlist) {
        return nlohmann::json();
    }
} // namespace yordle::data
