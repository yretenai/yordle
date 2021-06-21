//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class skin_menu : public imgui_element {
    public:
        explicit skin_menu() {
            title = "skin";
        }
        ~skin_menu() override = default;

        bool paint() override;
    };
} // namespace vex::ui
