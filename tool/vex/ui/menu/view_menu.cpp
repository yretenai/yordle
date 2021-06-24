//
// Created by Lilith on 2021-06-21.
//

#include "view_menu.hpp"

#include "../../vex.hpp"
#include "../window/debug_log.hpp"
#include "../window/debug_menu.hpp"
#include "../window/debug_resource_menu.hpp"
#include "../window/skin_menu.hpp"

bool vex::ui::view_menu::paint(vex::device::render_device_framework *fx) {
    if (ImGui::BeginMenu(name.c_str(), true)) {
        std::set<std::string> names;
        for (const auto &element : *fx->elements) {
            names.insert(element->title);
        }

        bool has_skins = names.find("skin") != names.end();
        if (ImGui::MenuItem("skin", nullptr, has_skins, !has_skins)) {
            fx->elements->emplace_back(std::make_shared<skin_menu>());
        }

        bool has_debug = names.find("debug") != names.end();
        if (ImGui::MenuItem("debug", nullptr, has_debug, !has_debug)) {
            fx->elements->emplace_back(std::make_shared<debug_menu>());
        }

        bool has_log = names.find("log") != names.end();
        if (ImGui::MenuItem("log", nullptr, has_log, !has_log)) {
            fx->elements->emplace_back(std::make_shared<debug_log>());
        }

        bool has_resource = names.find("resources") != names.end();
        if (ImGui::MenuItem("resources", nullptr, has_resource, !has_resource)) {
            fx->elements->emplace_back(std::make_shared<debug_resource_menu>());
        }

        ImGui::EndMenu();
    }
    return true;
}
