//
// Created by Lilith on 2021-06-17.
//

#include <yordle/data/rst_file.hpp>
#include <yordle/data/rst_file_v1.hpp>
#include <yordle/data/rst_file_v2.hpp>
#include <yordle/data/rst_file_v4.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data {
    shared_ptr<rst_file> rst_file::load_rst_file(Array<uint8_t> &buffer) {
        auto fourcc = buffer.cast<rst_version>(0);

        switch (fourcc) {
            case rst_version::v1:
            case rst_version::v3:
                return make_shared<rst_file_v1>(buffer);
            case rst_version::v2:
                return make_shared<rst_file_v2>(buffer);
            case rst_version::v4:
                return make_shared<rst_file_v4>(buffer);
            case rst_version::v0:
            default:
                return nullptr;
        }
    }

    nlohmann::json rst_file::to_json(cdtb::hashlist_collection &hashes) {
        auto list = hashes.get_xxhashlist(cdtb::hashlist_target::rst_string);
        auto json = json::object();
        for (const auto &entry : strings) {
            json[list == nullptr ? hashes.hex_hash(entry.first) : list->get_string(entry.first)] = entry.second;
        }
        return json;
    }
} // namespace yordle::data
