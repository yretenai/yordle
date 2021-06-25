//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

namespace vex::mage {
    class skin_container {
    public:
        explicit skin_container() = default;
        ~skin_container()         = default;

        struct skin_info {
            int64_t id            = -1;
            int64_t lcu_id        = -1;
            uint64_t bin_path     = 0;
            uint32_t resource_key = 0;
            std::string name;
            uint64_t image = 0;
            uint32_t color = 0;
            std::map<int64_t, std::shared_ptr<skin_info>> chromas;
            std::string bin_path_debug;
            std::string resource_key_debug;
        };

        struct champion_info {
            int64_t id        = -1;
            bool is_monster   = false;
            uint64_t bin_path = 0;
            std::string name;
            uint64_t image = 0;
            std::map<int64_t, std::shared_ptr<skin_info>> skins;
            std::string bin_path_debug;
        };

        bool is_busy = false;
        std::map<int64_t, std::shared_ptr<champion_info>> champions;
        std::set<std::string> champion_names;
        std::map<std::string, int64_t> reverse_map;

        int64_t selected_champion = -1;
        int64_t selected_skin     = -1;
        int64_t selected_chroma   = -1;

        void load_data();
        void clear();
        skin_info get_skin();
        champion_info get_champion();
        int64_t skin_id() const;
    };
} // namespace vex::mage
