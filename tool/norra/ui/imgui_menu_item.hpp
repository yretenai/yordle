//
// Created by Lilith on 2021-05-09.
//

#pragma once

#include <imgui.h>
#include <string>

#include "imgui_element.hpp"

namespace norra::ui {
    class imgui_menu_item : public imgui_element {
    public:
        virtual ~imgui_menu_item() override = default;
        int priority;
    };
} // namespace norra::ui
