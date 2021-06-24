//
// Created by Lilith on 2021-06-21.
//

#include "skin_menu.hpp"

#include "../../mage/skin_container.hpp"
#include "../../vex.hpp"

bool vex::ui::skin_menu::paint(vex::device::render_device_framework *fx) {
    auto skin_container = vex::g_skin.load();
    bool busy           = skin_container->is_busy || fx->is_busy.load();

    std::string champ_name = "None";
    auto current_id        = 0;
    if (!busy) {
        skin_container->skin_id();
        if (skin_container->selected_champion > -1) {
            champ_name = skin_container->champions[skin_container->selected_champion]->name;
        }
    }

    if (ImGui::BeginCombo("champion", champ_name.c_str())) {
        if (!busy) {
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
    if (!busy) {
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1) {
            skin_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->name;
        }
    }

    if (ImGui::BeginCombo("skin", skin_name.c_str())) {
        if (!busy) {
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
    if (!busy) {
        if (skin_container->selected_champion > -1 && skin_container->selected_skin > -1 && skin_container->selected_chroma > -1) {
            chroma_name = skin_container->champions[skin_container->selected_champion]->skins[skin_container->selected_skin]->chromas[skin_container->selected_chroma]->name;
        }
    }

    if (ImGui::BeginCombo("chroma", chroma_name.c_str(), ImGuiComboFlags_PopupAlignLeft)) {
        if (!busy) {
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

    if (!busy) {
        if (current_id != skin_container->skin_id()) {
            auto image = skin_container->get_skin().image;
            if (skin_image_hash != image) {
                fx->clear_texture(skin_image_hash);
            }
            skin_image_hash = image;
        }

        if (skin_image_hash != 0) {
            auto ptr = fx->load_image(skin_image_hash);
            if (ptr != nullptr) {
                auto aspect = fx->texture_dimensions->at(skin_image_hash);
                auto uv1    = ImVec2(0.0, 0.0);
                auto uv2    = ImVec2(1.0, 1.0);
                if (1.0f - aspect > 0.001) { // not square madge
                    uv1.y += float(1.0 - aspect) / 2;
                    uv2.y -= float(1.0 - aspect) / 2;
                }

                if (ImGui::ImageButton(ptr.get(), ImVec2(256, 256), uv1, uv2)) {
                    load_skin(fx);
                }
            } else {
                if (ImGui::Button("load")) {
                    load_skin(fx);
                }
            }
        } else {
            if (ImGui::Button("load")) {
                load_skin(fx);
            }
        }
    } else {
        if (!skin_container->is_busy) {
            if (skin_image_hash != 0) {
                auto ptr    = fx->load_image(skin_image_hash);
                auto aspect = fx->texture_dimensions->at(skin_image_hash);
                if (ptr != nullptr) {
                    ImGui::Image(ptr.get(), ImVec2(256, float(256.0 / aspect)));
                }
            }
        }

        ImGui::Text("loading data...");
    }
    return true;
}

void vex::ui::skin_menu::load_skin(device::render_device_framework *fx) {
    // TODO
    fx->clear_assets();
    fx->is_busy = true;
    std::thread([] {
        auto skin_container = vex::g_skin.load();
        auto fx             = vex::g_framework.load();
        try {
            if (skin_container->is_busy) {
                fx->is_busy = false;
                return;
            }

            auto skin = skin_container->get_skin();
            if (skin.id == -1) {
                fx->is_busy = false;
                return;
            }
            fx->load_model(skin.bin_path, skin.resource_key);
        } catch (std::exception &e) {
            vex::post_message(std::string("error: ") + e.what());
        }
        fx->is_busy = false;
    }).detach();
}
