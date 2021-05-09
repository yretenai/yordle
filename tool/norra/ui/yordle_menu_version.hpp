//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "imgui_menu_item.hpp"

#include <yordle/yordle.hpp>

namespace norra::ui {
    class yordle_menu_version : public imgui_menu_item {
    public:
        yordle_menu_version() {
            priority = -101;
        }

        ~yordle_menu_version() override = default;

        std::string name = "yordle " + yordle::get_version_str();

        void paint() override {
            ImGui::MenuItem(name.c_str(), nullptr, false, false);
        }
    };
} // namespace norra::ui
