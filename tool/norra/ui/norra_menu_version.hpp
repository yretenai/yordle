//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "imgui_menu_item.hpp"

#include "../norra.hpp"

namespace norra::ui {
    class norra_menu_version : public imgui_menu_item {
    public:
        norra_menu_version() {
            priority = -100;
        }

        ~norra_menu_version() override = default;

        std::string name = "norra " + norra::get_version_str();

        bool paint() override {
            ImGui::MenuItem(name.c_str(), nullptr, false, false);
            return true;
        }
    };
} // namespace norra::ui
