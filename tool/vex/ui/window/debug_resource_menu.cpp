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
                ImGui::Text("name: %s", model.second->name.c_str());
                ImGui::Text("vbo: 0x%p", model.second->vbo.get());
                ImGui::Text("ibo: 0x%p", model.second->ibo.get());
                ImGui::Value("stride", static_cast<int>(model.second->mesh->vbo_stride));
                ImGui::Value("flags", static_cast<int>(model.second->mesh->flags));
                ImGui::Value("type", static_cast<int>(model.second->mesh->vbo_type.value));
                ImGui::Text("render order");
                for (const auto &submesh_entry : model.second->render_order) {
                    if (model.second->submeshes_to_hide.contains(submesh_entry)) {
                        ImGui::Text("\t%s (hidden)", submesh_entry.c_str());
                    } else {
                        ImGui::Text("\t%s", submesh_entry.c_str());
                    }
                }
                ImGui::Value("submeshes", static_cast<int>(model.second->mesh->submeshes.size()));
                for (const auto &submesh : model.second->mesh->submeshes) {
                    ImGui::Text("\t%s", submesh.first.c_str());
                    ImGui::Value("\t\tvbo start", static_cast<int>(submesh.second.vbo_start));
                    ImGui::Value("\t\tvbo count", static_cast<int>(submesh.second.vbo_count));
                    ImGui::Value("\t\tibo start", static_cast<int>(submesh.second.ibo_start));
                    ImGui::Value("\t\tibo count", static_cast<int>(submesh.second.ibo_count));
                }
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
