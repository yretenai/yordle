//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include <imgui.h>

namespace norra::ui {
    class imgui_element {
    protected:
        static constexpr ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar;

    public:
        virtual ~imgui_element() = default;
        virtual void paint() = 0;
    };
} // namespace norra::ui
