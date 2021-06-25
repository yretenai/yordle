//
// Created by Lilith on 2021-06-24.
//


#pragma once

#include <memory>

#include <yordle/data/meta/bin_class_def.hpp>
#include <yordle/r3d/skinned_mesh.hpp>

namespace vex::device {
    class render_device_framework;
}

namespace vex::mage {
    class skinned_mesh_container {
    public:
        explicit skinned_mesh_container(vex::device::render_device_framework *fx, std::string &mesh_name, std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> &mesh_properties, std::shared_ptr<yordle::r3d::skinned_mesh> &mesh, yordle::data::property_bin &prop_bin);
        ~skinned_mesh_container() = default;

        std::string name;
        std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> mesh_properties;
        std::shared_ptr<yordle::r3d::skinned_mesh> mesh;
        std::shared_ptr<void> vbo;
        std::shared_ptr<void> ibo;
        std::map<std::string, std::shared_ptr<yordle::data::meta::IMaterialDef>> materials;
        std::map<std::string, bool> is_hybrid;
        std::set<std::string> submeshes_to_hide;
        std::deque<std::string> render_order;

        std::map<uint32_t, std::shared_ptr<yordle::data::meta::HybridMaterialDef>> hybrid_materials;
        std::map<uint32_t, std::shared_ptr<yordle::data::meta::CustomShaderDef>> static_materials;
    };
} // namespace vex::mage
