#pragma once

#include "../imgui_element.hpp"

#include <thread>

namespace vex::ui {
    class view_menu : public imgui_menu_item {
    public:
        view_menu() {
            priority = 0x1000;
        }

        ~view_menu() override = default;

        std::string name = "view";

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
