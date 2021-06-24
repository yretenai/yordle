//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class debug_menu : public imgui_element {
    public:
        explicit debug_menu() {
            title        = "debug";
            window_flags = ImGuiWindowFlags_NoNav;
        }
        ~debug_menu() override = default;

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
