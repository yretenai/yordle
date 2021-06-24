//
// Created by Lilith on 2021-06-21.
//

#include "debug_resource_menu.hpp"

#include "../../vex.hpp"

bool vex::ui::debug_resource_menu::paint(vex::device::render_device_framework *fx) {
    if (ImGui::BeginTabBar("#tabs")) {
        if (ImGui::BeginTabItem("textures")) {
            for (const auto &texture : *fx->textures) {
                auto aspect = fx->texture_dimensions->at(texture.first);
                ImGui::Text("%llx - 0x%p", texture.first, texture.second.get());
                ImGui::Image(texture.second.get(), ImVec2(260, float(260.0 / aspect)));
            }
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("models")) {
            for (const auto &model : *fx->models) {
                ImGui::Text("%llx - 0x%p", model.first, model.second.get());
            }
            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("shaders")) {
            for (const auto &shader : *fx->shaders) {
                ImGui::Text("%llx - 0x%p", shader.first, shader.second.get());
            }
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }
    return true;
}
