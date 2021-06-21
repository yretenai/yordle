//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace vex::mage {
    class skin_container {
    public:
        explicit skin_container() = default;
        ~skin_container()         = default;

        struct chroma_info {
            int64_t id;
            int64_t lcu_id;
            uint64_t bin_path;
            std::string name;
            uint64_t image;
        };

        struct skin_info : chroma_info {
            std::vector<chroma_info> chromas;
        };

        struct champion_info {
            int64_t id;
            bool is_monster = false;
            uint64_t bin_path;
            std::string name;
            uint64_t image;
            std::vector<std::shared_ptr<skin_info>> skins;
        };

        bool is_busy = false;
        std::map<int64_t, std::shared_ptr<champion_info>> champions;

        void load_data();
        void clear();
    };
} // namespace vex::mage
