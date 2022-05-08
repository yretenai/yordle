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

#include "../mage/skinned_mesh_container.hpp"
#include "../ui/imgui_element.hpp"

namespace vex::device {
    class render_device_framework {
    protected:
        const ImVec4 clear_color = ImVec4(0.05f, 0.06f, 0.09f, 1.00f);

        virtual void startup();
        void render_imgui();

        void setup_imgui();
        void update_dpi();
        void shutdown_imgui() const;

    public:
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_element>>> elements;
        std::shared_ptr<std::vector<std::shared_ptr<vex::ui::imgui_menu_item>>> menu_items;

        std::shared_ptr<std::map<uint64_t, std::shared_ptr<void>>> textures;
        std::shared_ptr<std::map<uint64_t, float>> texture_dimensions;
        std::shared_ptr<std::map<uint64_t, std::shared_ptr<vex::mage::skinned_mesh_container>>> models;
        std::shared_ptr<std::map<uint64_t, std::shared_ptr<void>>> shaders;

        double frame_time = 0.0;
        bool started = false;
        float dpi_scale = 1.0f;
        std::atomic<bool> perform_screenshot;
        std::atomic<bool> is_busy;

        virtual ~render_device_framework() = default;

        virtual void run()      = 0;
        virtual void close()    = 0;
        virtual void shutdown() = 0;

        std::shared_ptr<vex::mage::skinned_mesh_container> load_model_base(uint64_t model_path, uint64_t resource_key);

        virtual std::shared_ptr<void> load_texture(uint64_t texture_path)                                                 = 0;
        virtual std::shared_ptr<void> load_image(uint64_t image_path)                                                     = 0;
        virtual std::shared_ptr<vex::mage::skinned_mesh_container> load_model(uint64_t model_path, uint64_t resource_key) = 0;
        virtual std::shared_ptr<void> load_shader(uint64_t shader_path)                                                   = 0;
        virtual void clear_texture(uint64_t image_path)                                                                   = 0;
        virtual void clear_model(uint64_t model_path)                                                                     = 0;
        virtual void clear_shader(uint64_t shader_path)                                                                   = 0;
        virtual void clear_assets() const                                                                                 = 0;

        void refresh_menu() const;
    };
} // namespace vex::device
