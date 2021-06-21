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

namespace vex::mage {
    class wad_container {
    public:
        explicit wad_container() = default;
        ~wad_container()         = default;

        std::vector<std::filesystem::path> paths;
        std::map<uint64_t, std::pair<int64_t, yordle::archive::wad_entry>> entries;

        void load_wad(std::filesystem::path &wad_path);
        void load_wads(std::set<std::filesystem::path> &game_paths);
        std::shared_ptr<dragon::Array<uint8_t>> read_file(const std::filesystem::path &path);
        std::shared_ptr<dragon::Array<uint8_t>> read_file(uint64_t hash);
        bool has_file(const std::filesystem::path &path);
        bool has_file(uint64_t hash);
        void clear();
    };
} // namespace vex::mage
