//
// Created by Lilith on 2021-06-18.
//

#include "wad_container.hpp"
#include "../norra.hpp"

void norra::mage::wad_container::load_wad(std::filesystem::path &wad_path) {
    if (!std::filesystem::exists(wad_path)) {
        return;
    }

    std::ifstream stream(wad_path, std::ios::binary | std::ios::in);

    auto wad = yordle::archive::wad_file::load_wad_file(stream);
    if (wad == nullptr) {
        return;
    }

    auto index  = std::distance(paths.begin(), paths.insert(wad_path).first);
    wads[index] = wad;
    if (wad->entries != nullptr) {
        for (auto entry : *wad->entries) {
            entries[entry.hash] = std::pair<int64_t, yordle::archive::wad_entry>(index, entry);
        }
    }
}

void norra::mage::wad_container::load_wads(std::set<std::filesystem::path> &game_paths) {
    auto que       = std::deque<std::filesystem::path>(game_paths.begin(), game_paths.end());
    auto wad_paths = dragon::find_paths(que, {".wad", ".client", ".mobile"}, {});
    auto mut       = norra::g_message_mutex.load();
    for (auto path : wad_paths) {
        if (mut->try_lock()) {
            norra::g_message = std::make_shared<std::string>(std::string("loading ") + path.filename().string());
            mut->unlock();
        }
        load_wad(path);
    }

    if (mut->try_lock()) {
        norra::g_message = nullptr;
        mut->unlock();
    }
}

void norra::mage::wad_container::clear() {
    paths.clear();
    wads.clear();
    entries.clear();
}
