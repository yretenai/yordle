//
// Created by Lilith on 2021-06-18.
//

#pragma once

#include <cstdint>
#include <filesystem>
#include <map>
#include <set>

#include <standard_dragon/dragon.hpp>
#include <yordle/archive/wad_file.hpp>

namespace norra::mage {
    class wad_container {
    public:
        explicit wad_container() = default;
        ~wad_container()         = default;

        std::set<std::filesystem::path> paths;
        std::map<int64_t, std::shared_ptr<yordle::archive::wad_file>> wads;
        std::map<uint64_t, std::pair<int64_t, yordle::archive::wad_entry>> entries;

        void load_wad(std::filesystem::path &wad_path);
        void load_wads(std::set<std::filesystem::path> &game_paths);
        void clear();
    };
} // namespace norra::mage
