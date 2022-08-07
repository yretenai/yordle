#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class debug_resource_menu : public imgui_element {
    public:
        explicit debug_resource_menu() {
            title        = "resources";
            window_flags = ImGuiWindowFlags_NoNav;
        }
        ~debug_resource_menu() override = default;

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
