//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../imgui_menu_item.hpp"

namespace vex::ui {
    class message_menu : public imgui_menu_item {
    public:
        message_menu() {
            priority = -100000;
        }

        ~message_menu() override = default;

        bool paint() override;
    };
} // namespace vex::ui
