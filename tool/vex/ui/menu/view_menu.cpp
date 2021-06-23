//
// Created by Lilith on 2021-06-21.
//

#include "view_menu.hpp"

#include "../../vex.hpp"
#include "../window/debug_menu.hpp"
#include "../window/skin_menu.hpp"

bool vex::ui::view_menu::paint(vex::device::render_device_framework *fx) {
    if (ImGui::BeginMenu(name.c_str(), true)) {
        auto fx = vex::g_framework.load();

        bool has_skins = std::any_of(fx->elements->begin(), fx->elements->end(), [&](const std::shared_ptr<vex::ui::imgui_element> &element) { return element->title == "skin"; });
        if (ImGui::MenuItem("skin", nullptr, has_skins, !has_skins)) {
            fx->elements->emplace_back(std::make_shared<skin_menu>());
        }

        bool has_debug = std::any_of(fx->elements->begin(), fx->elements->end(), [&](const std::shared_ptr<vex::ui::imgui_element> &element) { return element->title == "debug"; });
        if (ImGui::MenuItem("debug", nullptr, has_debug, !has_debug)) {
            fx->elements->emplace_back(std::make_shared<debug_menu>());
        }

        ImGui::EndMenu();
    }
    return true;
}
