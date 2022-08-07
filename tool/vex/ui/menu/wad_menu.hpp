#pragma once

#include "../imgui_element.hpp"

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

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
