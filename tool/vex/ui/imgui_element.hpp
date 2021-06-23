//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include <imgui.h>
#include <string>

namespace vex::device {
    class render_device_framework;
}

namespace vex::ui {
    class imgui_element {
    public:
        std::string title;
        bool open                                                    = true;
        ImGuiWindowFlags window_flags                                = ImGuiWindowFlags_Modal;
        virtual ~imgui_element()                                     = default;
        virtual bool paint(vex::device::render_device_framework *fx) = 0;
    };

    class imgui_menu_item : public imgui_element {
    public:
        virtual ~imgui_menu_item() override = default;
        int priority;
    };
} // namespace vex::ui
