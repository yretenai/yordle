//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include "../mage/wad_container.hpp"
#include "../os/os_layer.hpp"
#include "imgui_menu_item.hpp"

#include <thread>

namespace norra::ui {
    class exit_menu : public imgui_menu_item {
    public:
        exit_menu() {
            priority = 0x7FFFFFFF;
        }

        ~exit_menu() override = default;

        std::string name = "exit";

        bool paint() override {
            if (ImGui::MenuItem(name.c_str(), nullptr, false, true)) {
                auto device = norra::g_framework.load();
                if (device != nullptr) {
                    device->close();
                }
            }
            return true;
        }
    };
} // namespace norra::ui
