//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include "../imgui_element.hpp"

namespace vex::ui {
    class skin_menu : public imgui_element {
    private:
        uint64_t skin_image_hash = 0;

    public:
        explicit skin_menu() {
            title = "skin";
        }
        ~skin_menu() override = default;

        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
