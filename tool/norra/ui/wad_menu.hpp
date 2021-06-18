//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../mage/wad_container.hpp"
#include "../os/os_layer.hpp"
#include "imgui_menu_item.hpp"

#include <thread>

namespace norra::ui {
    class wad_menu : public imgui_menu_item {
    public:
        wad_menu() {
            priority = 100;
        }

        ~wad_menu() override = default;

        std::string name = "open";

        bool paint() override;
    };
} // namespace norra::ui
