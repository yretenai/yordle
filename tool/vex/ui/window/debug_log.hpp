#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class debug_log : public imgui_element {
    public:
        explicit debug_log() {
            title        = "log";
            window_flags = ImGuiWindowFlags_NoNav;
        }
        ~debug_log() override = default;

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
