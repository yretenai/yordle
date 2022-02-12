//
// Created by Lilith on 2021-05-09.
//

#include <algorithm>

#include <yordle/data/meta/bin_defs/SkinCharacterDataProperties.hpp>
#include "../vex.hpp"

namespace vex::device {
    void render_device_framework::setup_imgui() {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO &io = ImGui::GetIO();
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

        ImGui::StyleColorsDark();

        ImVec4 *colors                         = ImGui::GetStyle().Colors;
        colors[ImGuiCol_Text]                  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        colors[ImGuiCol_TextDisabled]          = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
        colors[ImGuiCol_WindowBg]              = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
        colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        colors[ImGuiCol_PopupBg]               = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
        colors[ImGuiCol_Border]                = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
        colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        colors[ImGuiCol_FrameBg]               = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_FrameBgActive]         = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_TitleBg]               = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_TitleBgActive]         = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_MenuBarBg]             = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
        colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
        colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
        colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
        colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
        colors[ImGuiCol_CheckMark]             = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_SliderGrab]            = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_Button]                = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_ButtonHovered]         = ImVec4(0.18f, 0.22f, 0.28f, 1.00f);
        colors[ImGuiCol_ButtonActive]          = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_Header]                = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_HeaderHovered]         = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_HeaderActive]          = ImVec4(0.14f, 0.15f, 0.17f, 1.00f);
        colors[ImGuiCol_Separator]             = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
        colors[ImGuiCol_SeparatorHovered]      = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_SeparatorActive]       = ImVec4(0.14f, 0.15f, 0.17f, 1.00f);
        colors[ImGuiCol_ResizeGrip]            = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_ResizeGripHovered]     = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_ResizeGripActive]      = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
        colors[ImGuiCol_Tab]                   = ImVec4(0.09f, 0.11f, 0.13f, 1.00f);
        colors[ImGuiCol_TabHovered]            = ImVec4(0.23f, 0.27f, 0.34f, 1.00f);
        colors[ImGuiCol_TabActive]             = ImVec4(0.14f, 0.17f, 0.22f, 1.00f);
        colors[ImGuiCol_TabUnfocused]          = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
        colors[ImGuiCol_TabUnfocusedActive]    = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
        colors[ImGuiCol_PlotLines]             = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
        colors[ImGuiCol_PlotLinesHovered]      = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
        colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        colors[ImGuiCol_TableHeaderBg]         = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
        colors[ImGuiCol_TableBorderStrong]     = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
        colors[ImGuiCol_TableBorderLight]      = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
        colors[ImGuiCol_TableRowBg]            = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        colors[ImGuiCol_TableRowBgAlt]         = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
        colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.11f, 0.33f, 0.57f, 0.35f);
        colors[ImGuiCol_DragDropTarget]        = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
        colors[ImGuiCol_NavHighlight]          = ImVec4(0.23f, 0.27f, 0.34f, 1.00f);
        colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
        colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
        colors[ImGuiCol_ModalWindowDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
    }

    void render_device_framework::render_imgui() {
        try {
            auto new_elements = std::make_shared<std::vector<std::shared_ptr<vex::ui::imgui_element>>>();
            for (const auto &element : *elements) {
                if (ImGui::Begin(element->title.c_str(), &element->open, element->window_flags | ImGuiWindowFlags_NoCollapse)) {
                    if (element->paint(this) && element->open) {
                        new_elements->push_back(element);
                    }
                }
                ImGui::End();
            }
            elements = new_elements;

            if (ImGui::BeginMainMenuBar()) {
                auto new_items = std::make_shared<std::vector<std::shared_ptr<vex::ui::imgui_menu_item>>>();
                for (const auto &item : *menu_items) {
                    if (item->paint(this)) {
                        new_items->push_back(item);
                    }
                }
                ImGui::EndMainMenuBar();
                menu_items = new_items;
            }
        } catch (std::exception &e) {
            vex::post_message(std::string("error: ") + e.what());
        }
    }

    void render_device_framework::refresh_menu() const {
        std::sort(menu_items->begin(), menu_items->end(), [](const std::shared_ptr<vex::ui::imgui_menu_item> &a, const std::shared_ptr<vex::ui::imgui_menu_item> &b) -> bool {
            return a->priority > b->priority;
        });
    }

    void render_device_framework::startup() {
        elements           = std::make_shared<std::vector<std::shared_ptr<vex::ui::imgui_element>>>();
        menu_items         = std::make_shared<std::vector<std::shared_ptr<vex::ui::imgui_menu_item>>>();
        textures           = std::make_shared<std::map<uint64_t, std::shared_ptr<void>>>();
        texture_dimensions = std::make_shared<std::map<uint64_t, float>>();
        models             = std::make_shared<std::map<uint64_t, std::shared_ptr<vex::mage::skinned_mesh_container>>>();
        shaders            = std::make_shared<std::map<uint64_t, std::shared_ptr<void>>>();
    }

    void render_device_framework::shutdown_imgui() const {
        ImGui::DestroyContext(nullptr);
        menu_items->clear();
        elements->clear();
        clear_assets();
    }

    std::shared_ptr<vex::mage::skinned_mesh_container> render_device_framework::load_model_base(uint64_t model_path, uint64_t resource_key) {
        auto wad = vex::g_wad.load();
        auto bin = wad->read_file(model_path);

        if (bin == nullptr) {
            vex::post_message(std::string("can't find bin file ") + std::to_string(model_path));
            return nullptr;
        }

        auto champion_bin = yordle::data::property_bin(*bin);
        if (!champion_bin.objects.contains(resource_key)) {
            vex::post_message(std::string("can't find resource ") + std::to_string(resource_key));
            return nullptr;
        }
        auto skin_props = yordle::data::meta::deserialize<yordle::data::meta::SkinCharacterDataProperties>(champion_bin.objects[resource_key]);
        if (skin_props == nullptr) {
            vex::post_message("can't deserialize skin properties");
            return nullptr;
        }
        if (skin_props->skinMeshProperties == nullptr) {
            vex::post_message("can't find skin mesh properties");
            return nullptr;
        }
        if (!skin_props->skinMeshProperties->is_type(0x6111d8a4)) {
            vex::post_message("can't deserialize skin mesh properties");
            return nullptr;
        }

        std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> mesh_props = std::reinterpret_pointer_cast<yordle::data::meta::SkinMeshDataProperties>(skin_props->skinMeshProperties);

        vex::post_message(std::string("loading ") + mesh_props->simpleSkin);

        auto skn_data = wad->read_file(mesh_props->simpleSkin);
        if (skn_data == nullptr) {
            vex::post_message("can't load skin file");
            return nullptr;
        }
        auto skn = yordle::r3d::skinned_mesh::load_skn_file(*skn_data);
        if (skn == nullptr) {
            vex::post_message("can't parse skin file");
            return nullptr;
        }
        return std::make_shared<vex::mage::skinned_mesh_container>(this, skin_props->championSkinName, mesh_props, skn, champion_bin);
    }
} // namespace vex::device
