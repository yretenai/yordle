//
// Created by Lilith on 2021-06-21.
//

#include "skin_menu.hpp"

#include "../../mage/skin_container.hpp"
#include "../../vex.hpp"

bool vex::ui::skin_menu::paint(vex::device::render_device_framework *fx) {
    auto skin_container = vex::g_skin.load();

    std::string champ_name = "None";
    auto current_id        = 0;
    if (!skin_container->is_busy) {
        skin_container->skin_id();
        if (skin_container->selected_champion > -1) {
            champ_name = skin_container->champions[skin_container->selected_champion]->name;
        }
    }

    if (ImGui::BeginCombo("champion", champ_name.c_str())) {
        if (!skin_container->is_busy) {
            for (const auto &champion : skin_container->champions) {
                bool selected = skin_container->selected_champion == champion.first;
                if (ImGui::Selectable(champion.second->name.c_str(), selected) && skin_container->selected_champion != champion.first) {
                    skin_container->selected_chroma   = -1;
                    skin_container->selected_skin     = -1;
                    skin_container->selected_champion = champion.first;
                }

                if (selected) {
                    ImGui::SetItemDefaultFocus();
                }
            }
        }
        ImGui::EndCombo();
    }

    std::string skin_name = "None";
    if (!skin_container->is_busy) {
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1) {
            skin_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->name;
        }
    }

    if (ImGui::BeginCombo("skin", skin_name.c_str())) {
        if (!skin_container->is_busy) {
            if (skin_container->selected_champion > -1) {
                for (const auto &skin : skin_container->champions[skin_container->selected_champion]->skins) {
                    bool selected = skin_container->selected_skin == skin.first;
                    if (ImGui::Selectable(skin.second->name.c_str(), selected) && skin_container->selected_skin != skin.first) {
                        skin_container->selected_chroma = -1;
                        skin_container->selected_skin   = skin.first;
                    }

                    if (selected) {
                        ImGui::SetItemDefaultFocus();
                    }
                }
            }
        }
        ImGui::EndCombo();
    }

    std::string chroma_name = "None";
    if (!skin_container->is_busy) {
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1 && skin_container->selected_chroma > -1) {
            chroma_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->chromas[skin_container->selected_chroma]->name;
        }
    }

    if (ImGui::BeginCombo("chroma", chroma_name.c_str(), ImGuiComboFlags_PopupAlignLeft)) {
        if (!skin_container->is_busy) {
            bool selected = skin_container->selected_chroma == -1;
            if (ImGui::Selectable("None", selected)) {
                skin_container->selected_chroma = -1;
            }

            if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1) {
                for (const auto &chroma : skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->chromas) {
                    selected = skin_container->selected_chroma == chroma.first;
                    ImGui::ColorButton("##color", {static_cast<float>((chroma.second->color & 0xFF0000) >> 16) / 255.0f, static_cast<float>((chroma.second->color & 0xFF00) >> 8) / 255.0f, static_cast<float>(chroma.second->color & 0xFF) / 255.0f, 1.0f}, ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoBorder);
                    ImGui::SameLine();
                    if (ImGui::Selectable(chroma.second->name.c_str(), selected)) {
                        skin_container->selected_chroma = chroma.first;
                    }

                    if (selected) {
                        ImGui::SetItemDefaultFocus();
                    }
                }
            }
        }
        ImGui::EndCombo();
    }

    if (!skin_container->is_busy) {
        if (current_id != skin_container->skin_id()) {
            auto image = skin_container->get_skin().image;
            if (skin_image_hash != image) {
                fx->clean_texture(skin_image_hash);
            }
            skin_image_hash = image;
        }

        if (skin_image_hash != 0) {
            auto ptr = fx->load_image(skin_image_hash);
            if (ImGui::ImageButton(ptr.get(), ImVec2(256, 256))) {
            }
        } else {
            if (ImGui::Button("load")) {
                // TODO
            }
        }
    }
    return true;
}
