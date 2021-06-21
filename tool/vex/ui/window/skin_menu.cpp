//
// Created by Lilith on 2021-06-21.
//

#include "skin_menu.hpp"

#include "../../mage/skin_container.hpp"
#include "../../vex.hpp"

bool vex::ui::skin_menu::paint() {
    auto skin_container = vex::g_skin.load();
    if (!skin_container->is_busy) {
        std::string champ_name = "None";
        if (skin_container->selected_champion > -1) {
            champ_name = skin_container->champions[skin_container->selected_champion]->name;
        }
        if (ImGui::BeginCombo("champion", champ_name.c_str())) {
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
            ImGui::EndCombo();
        }

        std::string skin_name = "None";
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1) {
            skin_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->name;
        }
        if (ImGui::BeginCombo("skin", skin_name.c_str())) {
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
            ImGui::EndCombo();
        }

        std::string chroma_name = "None";
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1 && skin_container->selected_chroma > -1) {
            chroma_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->chromas[skin_container->selected_chroma]->name;
        }
        if (ImGui::BeginCombo("chroma", chroma_name.c_str())) {
            if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1) {
                for (const auto &chroma : skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->chromas) {
                    bool selected = skin_container->selected_chroma == chroma.first;
                    if (ImGui::Selectable(chroma.second->name.c_str(), selected)) {
                        skin_container->selected_chroma = chroma.first;
                    }

                    if (selected) {
                        ImGui::SetItemDefaultFocus();
                    }
                }
            }
            ImGui::EndCombo();
        }

        if (ImGui::Button("load")) {
            // TODO
        }
    }
    return true;
}
