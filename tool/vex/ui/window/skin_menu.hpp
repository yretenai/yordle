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

        static void load_skin(device::render_device_framework *fx);
        bool paint(vex::device::render_device_framework *fx) override;
    };
} // namespace vex::ui
