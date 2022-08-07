#pragma once

#include "../../mage/wad_container.hpp"
#include "../imgui_element.hpp"

#include <thread>

namespace vex::ui {
    class screenshot_menu : public imgui_menu_item {
    public:
        screenshot_menu() {
            priority = 110;
        }

        ~screenshot_menu() override = default;

        std::string name = "screenshot";

        bool paint(vex::device::render_device_framework *fx) override {
            if (ImGui::MenuItem(name.c_str(), nullptr, false, true)) {
                auto device = vex::g_framework.load();
                if (device != nullptr) {
                    device->perform_screenshot = true;
                }
            }
            return true;
        }
    };
} // namespace vex::ui
