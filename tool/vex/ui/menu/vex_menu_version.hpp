#pragma once

#include "../../vex.hpp"
#include "../imgui_element.hpp"

#include <yordle/yordle.hpp>

namespace vex::ui {
    class vex_menu_version : public imgui_menu_item {
    public:
        vex_menu_version() {
            priority = -100;

            if (yordle::get_version() != YORDLE_VERSION) {
                name += "!!!";
            }
        }

        ~vex_menu_version() override = default;

        std::string name = "vex " + vex::get_version_str() + "/" + yordle::get_version_str();

        bool paint(vex::device::render_device_framework *fx) override {
            ImGui::MenuItem(name.c_str(), nullptr, false, false);
            return true;
        }
    };
} // namespace vex::ui
