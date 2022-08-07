#pragma once

#include "../../mage/wad_container.hpp"
#include "../imgui_element.hpp"

#include <thread>

namespace vex::ui {
    class exit_menu : public imgui_menu_item {
    public:
        exit_menu() {
            priority = 100;
        }

        ~exit_menu() override = default;

        std::string name = "exit";

        bool paint(vex::device::render_device_framework *fx) override {
            if (ImGui::MenuItem(name.c_str(), nullptr, false, true)) {
                auto device = vex::g_framework.load();
                if (device != nullptr) {
                    device->close();
                }
            }
            return true;
        }
    };
} // namespace vex::ui
