//
// Created by Lilith on 2021-06-24.
//


#pragma once

#include <memory>

#include <yordle/data/meta/bin_class_def.hpp>
#include <yordle/r3d/skinned_mesh.hpp>

#include "../device/render_device_framework.hpp"

namespace vex::mage {
    class skinned_mesh_container {
    public:
        explicit skinned_mesh_container(vex::device::render_device_framework *fx, std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> &mesh_properties, std::shared_ptr<yordle::r3d::skinned_mesh> &mesh, std::shared_ptr<void> &vbo, std::shared_ptr<void> &ibo);
        ~skinned_mesh_container() = default;

        std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> mesh_properties;
        std::shared_ptr<yordle::r3d::skinned_mesh> mesh;
        std::shared_ptr<void> vbo;
        std::shared_ptr<void> ibo;
        std::set<std::string> submeshes_to_hide;
    };
} // namespace vex::mage
