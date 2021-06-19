//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include <imgui.h>
#include <string>

namespace vex::ui {
    class imgui_element {
    public:
        std::string title;
        bool open                     = true;
        ImGuiWindowFlags window_flags = ImGuiWindowFlags_Modal;
        virtual ~imgui_element()      = default;
        virtual bool paint()          = 0;
    };
} // namespace vex::ui
