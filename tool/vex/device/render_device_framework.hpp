//
// Created by Lilith on 2021-05-08.
//

#pragma once

#include <atomic>
#include <imgui.h>
#include <map>
#include <memory>
#include <vector>

#include <standard_dragon/Array.hpp>

#include "../ui/imgui_element.hpp"

namespace vex::device {
    class render_device_framework {
    protected:
        const ImVec4 clear_color = ImVec4(0.05f, 0.06f, 0.09f, 1.00f);

        virtual void startup();
        void render_imgui();

        static void setup_imgui();
        void shutdown_imgui() const;

    public:
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_element>>> elements;
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_menu_item>>> menu_items;

        std::shared_ptr<std::map<uint64_t, std::shared_ptr<void>>> textures;
        std::shared_ptr<std::map<uint64_t, std::shared_ptr<void>>> models;
        std::shared_ptr<std::map<uint64_t, std::shared_ptr<void>>> shaders;

        double frame_time = 0.0;
        std::atomic<bool> perform_screenshot;

        virtual ~render_device_framework() = default;

        virtual void run()      = 0;
        virtual void close()    = 0;
        virtual void shutdown() = 0;

        virtual std::shared_ptr<void> load_texture(uint64_t texture_path) = 0;
        virtual std::shared_ptr<void> load_image(uint64_t image_path)     = 0;
        virtual std::shared_ptr<void> load_model(uint64_t model_path)     = 0;
        virtual std::shared_ptr<void> load_shader(uint64_t shader_path)   = 0;
        virtual void clean_texture(uint64_t image_path)                   = 0;
        virtual void clean_model(uint64_t model_path)                     = 0;
        virtual void clean_shader(uint64_t shader_path)                   = 0;
        virtual void clean_assets() const                                 = 0;

        void refresh_menu() const;
    };
} // namespace vex::device
