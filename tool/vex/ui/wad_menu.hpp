//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../mage/wad_container.hpp"
#include "../os/os_layer.hpp"
#include "imgui_menu_item.hpp"

#include <thread>

namespace vex::ui {
    class wad_menu : public imgui_menu_item {
    public:
        wad_menu() {
            priority = 0x7FFFFFFF;
        }

        ~wad_menu() override = default;

        std::string name = "open";

        static std::atomic<bool> locked;

        bool paint() override;
    };
} // namespace vex::ui
