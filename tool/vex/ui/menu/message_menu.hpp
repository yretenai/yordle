//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class message_menu : public imgui_menu_item {
    public:
        message_menu() {
            priority = -100000;
        }

        ~message_menu() override = default;

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
