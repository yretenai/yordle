//
// Created by Lilith on 2021-05-08.
//

#pragma once

#include <imgui.h>
#include <memory>
#include <vector>

#include "../ui/imgui_element.hpp"
#include "../ui/imgui_menu_item.hpp"

namespace norra::device {
    class render_device_framework {
    protected:
        const ImVec4 clear_color = ImVec4(0.05f, 0.06f, 0.09f, 1.00f);

        virtual bool startup() = 0;

        static void setup_imgui();
        void render_imgui();

    public:
        std::vector<std::shared_ptr<norra::ui::imgui_element>> elements;
        std::vector<std::shared_ptr<norra::ui::imgui_menu_item>> menu_items;

        virtual ~render_device_framework() = default;
        virtual void run() = 0;
        virtual void close() = 0;
        virtual void shutdown() = 0;

        void refresh_menu();
    };
} // namespace norra::device
