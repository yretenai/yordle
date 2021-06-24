//
// Created by Lilith on 2021-06-24.
//

#include "skinned_mesh_container.hpp"

#include <yordle/cdtb/xxhashlist.hpp>

using namespace std;

namespace vex::mage {
    skinned_mesh_container::skinned_mesh_container(vex::device::render_device_framework *fx,
                                                   shared_ptr<yordle::data::meta::SkinMeshDataProperties> &mesh_properties, shared_ptr<yordle::r3d::skinned_mesh> &mesh,
                                                   shared_ptr<void> &vbo, shared_ptr<void> &ibo) {
        if (!mesh_properties->submeshRenderOrder.empty()) {
            auto sstream = stringstream(mesh_properties->submeshRenderOrder);
            while (sstream) {
                std::string submesh_name;
                submesh_name.reserve(mesh_properties->submeshRenderOrder.length());

                char c;
                while ((c = static_cast<char>(sstream.get())) && (c != ' ' && c != ',' && c != EOF)) {
                    submesh_name.push_back(c);
                }

                if (!submesh_name.empty()) {
                    submeshes_to_hide.insert(submesh_name);
                }
            }
        }

        for (const auto &submesh : mesh->submeshes) {
            submeshes_to_hide.insert(submesh.first);
        }

        fx->load_texture(yordle::cdtb::xxhashlist::hash(mesh_properties->texture));

        for(const auto& override : mesh_properties->materialOverride) {
            override->material
            fx->load_texture(yordle::cdtb::xxhashlist::hash(override->texture));
        }
    }
} // namespace vex::mage
