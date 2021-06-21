//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../imgui_menu_item.hpp"

#include <thread>

namespace vex::ui {
    class view_menu : public imgui_menu_item {
    public:
        view_menu() {
            priority = 0x1000;
        }

        ~view_menu() override = default;

        std::string name = "view";

        bool paint() override;
    };
} // namespace vex::ui
