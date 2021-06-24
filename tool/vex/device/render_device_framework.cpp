//
// Created by Lilith on 2021-05-09.
//

#include <algorithm>

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
                ImGui::Begin(element->title.c_str(), &element->open, element->window_flags);
                if (element->paint(this) && element->open) {
                    new_elements->push_back(element);
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
            auto mut = g_message_mutex.load();
            if (mut->try_lock()) {
                g_message = make_shared<std::string>(std::string("error: ") + e.what());
                mut->unlock();
            }
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
        models             = std::make_shared<std::map<uint64_t, std::shared_ptr<void>>>();
        shaders            = std::make_shared<std::map<uint64_t, std::shared_ptr<void>>>();
    }

    void render_device_framework::shutdown_imgui() const {
        ImGui::DestroyContext(nullptr);
        menu_items->clear();
        elements->clear();
        clear_assets();
    }
} // namespace vex::device
