//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class debug_menu : public imgui_element {
    public:
        explicit debug_menu() {
            title = "debug";
        }
        ~debug_menu() override = default;

        bool paint() override;
    };
} // namespace vex::ui
