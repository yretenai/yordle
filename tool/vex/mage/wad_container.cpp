//
// Created by Lilith on 2021-06-18.
//

#include "../vex.hpp"

#include <yordle/cdtb/xxhashlist.hpp>

using namespace std;
using namespace dragon;
using namespace vex;

namespace vex::mage {
    void wad_container::load_wad(filesystem::path &wad_path) {
        if (!filesystem::exists(wad_path)) {
            return;
        }

        ifstream stream(wad_path, ios::binary | ios::in);

        auto wad = yordle::archive::wad_file::load_wad_file(stream);
        if (wad == nullptr) {
            return;
        }

        auto index = paths.size();
        paths.emplace_back(wad_path);

        if (wad->entries != nullptr) {
            for (auto entry : *wad->entries) {
                entries[entry.hash] = pair<int64_t, yordle::archive::wad_entry>(index, entry);
            }
        }
    }

    void wad_container::load_wads(set<filesystem::path> &game_paths) {
        auto que       = deque<filesystem::path>(game_paths.begin(), game_paths.end());
        auto wad_paths = find_paths(que, {".wad", ".client", ".mobile"}, {});
        paths.reserve(wad_paths.size());
        for (auto path : wad_paths) {
            vex::post_message(string("loading ") + path.generic_string());
            load_wad(path);
        }
    }

    void wad_container::clear() {
        paths.clear();
        entries.clear();
    }

    std::shared_ptr<dragon::Array<uint8_t>> wad_container::read_file(uint64_t hash) {
        if (!has_file(hash)) {
            vex::post_message(std::string("can't find file ") + std::to_string(hash));
            return nullptr;
        }

        auto pair  = entries[hash];
        auto index = pair.first;
        auto entry = pair.second;

        ifstream stream(paths[index], ios::binary | ios::in);
        auto data = yordle::archive::wad_file::read_file(stream, entry);
        stream.close();
        return data;
    }

    std::shared_ptr<dragon::Array<uint8_t>> wad_container::read_file(const filesystem::path &path) {
        return read_file(yordle::cdtb::xxhashlist::hash(path.generic_string()));
    }

    bool wad_container::has_file(uint64_t hash) {
        return entries.contains(hash);
    }

    bool wad_container::has_file(const filesystem::path &path) {
        return has_file(yordle::cdtb::xxhashlist::hash(path.generic_string()));
    }
} // namespace vex::mage
