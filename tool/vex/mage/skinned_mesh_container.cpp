//
// Created by Lilith on 2021-06-24.
//

#include "skinned_mesh_container.hpp"
#include "../device/render_device_framework.hpp"

using namespace std;

deque<string> split_submeshes(const string &order) {
    auto sstream = stringstream(order);
    auto len     = order.length();
    deque<string> vec;
    while (sstream) {
        std::string submesh_name;
        submesh_name.reserve(len);

        char c;
        while ((c = static_cast<char>(sstream.get())) && (c != ' ' && c != ',' && c != EOF)) {
            submesh_name.push_back(c);
        }

        if (!submesh_name.empty()) {
            vec.emplace_back(submesh_name);
        }
    }
    return vec;
}

namespace vex::mage {
    skinned_mesh_container::skinned_mesh_container(vex::device::render_device_framework *fx,
                                                   shared_ptr<yordle::data::meta::SkinMeshDataProperties> &prop, shared_ptr<yordle::r3d::skinned_mesh> &skn) {
        mesh_properties = prop;
        mesh            = skn;

        if (!mesh_properties->submeshRenderOrder.empty()) {
            render_order = split_submeshes(mesh_properties->submeshRenderOrder);
        }

        if (!mesh_properties->initialSubmeshToHide.empty()) {
            submeshes_to_hide = split_submeshes(mesh_properties->initialSubmeshToHide);
        }

        for (const auto &submesh : mesh->submeshes) {
            if (find(render_order.begin(), render_order.end(), submesh.first) == render_order.end()) {
                render_order.emplace_back(submesh.first);
            }
        }

        if (!mesh_properties->texture.empty()) {
            fx->load_texture(yordle::cdtb::xxhashlist::hash(mesh_properties->texture));
        }

        for (const auto &override : mesh_properties->materialOverride) {
            if (!override->texture.empty()) {
                fx->load_texture(yordle::cdtb::xxhashlist::hash(override->texture));
            }
        }
    }
} // namespace vex::mage
