//
// Created by Lilith on 2021-05-08.
//

#pragma once

#include <imgui.h>
#include <memory>
#include <vector>

#include "../ui/imgui_element.hpp"
#include "../ui/imgui_menu_item.hpp"

namespace vex::device {
    class render_device_framework {
    protected:
        const ImVec4 clear_color = ImVec4(0.05f, 0.06f, 0.09f, 1.00f);

        virtual void startup();
        void render_imgui();

        static void setup_imgui();

    public:
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_element>>> elements;
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_menu_item>>> menu_items;

        double frame_time = 0.0;

        virtual ~render_device_framework() = default;
        virtual void run()                 = 0;
        virtual void close()               = 0;
        virtual void shutdown()            = 0;

        void refresh_menu() const;
    };
} // namespace vex::device
