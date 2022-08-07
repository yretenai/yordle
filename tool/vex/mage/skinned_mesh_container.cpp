#include <yordle/data/meta/bin_defs/MaterialInstanceDef.hpp>
#include <yordle/data/meta/bin_defs/StaticMaterialDef.hpp>

#include "skinned_mesh_container.hpp"
#include "../device/render_device_framework.hpp"
#include "../vex.hpp"

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
    skinned_mesh_container::skinned_mesh_container(vex::device::render_device_framework *fx, std::string &mesh_name,
                                                   shared_ptr<yordle::data::meta::SkinMeshDataProperties> &prop, shared_ptr<yordle::r3d::skinned_mesh> &skn,
                                                   yordle::data::property_bin &prop_bin) {
        name            = mesh_name;
        mesh_properties = prop;
        mesh            = skn;

        auto wad = vex::g_wad.load();

        // TODO: probably shouldn't load this every time.
        auto hybrid_shaders_bin  = wad->read_file("DATA/Shaders/HybridShaders.bin");
        auto hybrid_shaders_prop = yordle::data::property_bin(*hybrid_shaders_bin);
        for (const auto &hybrid_prop : hybrid_shaders_prop.objects) {
            auto hybrid_shader = yordle::data::meta::deserialize<yordle::data::meta::HybridMaterialDef>(hybrid_prop.second);
            if (hybrid_shader != nullptr) {
                hybrid_materials[hybrid_prop.first] = hybrid_shader;
            }
        }
        auto static_shaders_bin  = wad->read_file("DATA/Shaders/Shaders.bin");
        auto static_shaders_prop = yordle::data::property_bin(*static_shaders_bin);
        for (const auto &static_prop : static_shaders_prop.objects) {
            auto static_shader = yordle::data::meta::deserialize<yordle::data::meta::CustomShaderDef>(static_prop.second);
            if (static_shader != nullptr) {
                static_materials[static_prop.first] = static_shader;
            }
        }

        if (!mesh_properties->submeshRenderOrder.empty()) {
            render_order = split_submeshes(mesh_properties->submeshRenderOrder);
        }

        if (!mesh_properties->initialSubmeshToHide.empty()) {
            auto hide         = split_submeshes(mesh_properties->initialSubmeshToHide);
            submeshes_to_hide = std::set(hide.begin(), hide.end());
        }

        for (const auto &submesh : mesh->submeshes) {
            if (find(render_order.begin(), render_order.end(), submesh.first) == render_order.end()) {
                render_order.emplace_back(submesh.first);
            }
        }

        if (!mesh_properties->texture.empty()) {
            vex::post_message(std::string("loading ") + mesh_properties->texture);
            fx->load_texture(yordle::cdtb::xxhashlist::hash(mesh_properties->texture));
        }

        for (const auto &override : mesh_properties->materialOverride) {
            if (!override->texture.empty()) {
                vex::post_message(std::string("loading ") + override->texture);
                fx->load_texture(yordle::cdtb::xxhashlist::hash(override->texture));
            }

            if (override->material.key != 0) {
                auto override_material = override->material.get(prop_bin);
                if (override_material != nullptr) {
                    materials[override->Submesh] = override_material;
                    is_hybrid[override->Submesh] = override_material->is_type(3883795674);
                }
            }
        }

        if (mesh_properties->material.key != 0) {
            auto material = mesh_properties->material.get(prop_bin);
            if (material != nullptr) {
                for (const auto &submesh : mesh->submeshes) {
                    if (materials.contains(submesh.first)) {
                        continue;
                    }

                    materials[submesh.first] = material;
                    is_hybrid[submesh.first] = material->is_type(3883795674);
                }
            }
        }

        for (const auto &material : materials) {
            if (is_hybrid[material.first]) {
                auto material_instance_def = std::reinterpret_pointer_cast<yordle::data::meta::MaterialInstanceDef>(material.second);
                for (const auto &texture : material_instance_def->textures) {
                    if (!texture.second->texturePath.empty()) {
                        vex::post_message(std::string("loading ") + texture.second->texturePath);
                        fx->load_texture(yordle::cdtb::xxhashlist::hash(texture.second->texturePath));
                    }
                }

                if (hybrid_materials.contains(material_instance_def->BaseMaterial.key)) {
                    auto hybrid = hybrid_materials[material_instance_def->BaseMaterial.key];
                    for (const auto &texture : hybrid->textures) {
                        if (!texture->defaultTexturePath.empty()) {
                            vex::post_message(std::string("loading ") + texture->defaultTexturePath);
                            fx->load_texture(yordle::cdtb::xxhashlist::hash(texture->defaultTexturePath));
                        }
                    }
                }
            } else {
                auto static_def = std::reinterpret_pointer_cast<yordle::data::meta::StaticMaterialDef>(material.second);
                for (const auto &sampler : static_def->samplerValues) {
                    if (!sampler->textureName.empty()) {
                        vex::post_message(std::string("loading ") + sampler->textureName);
                        fx->load_texture(yordle::cdtb::xxhashlist::hash(sampler->textureName));
                    }
                }

                for (const auto &technique : static_def->techniques) {
                    for (const auto &pass : technique->passes) {
                        if (static_materials.contains(pass->shader.key)) {
                            auto static_material = static_materials[pass->shader.key];
                            for (const auto &texture : static_material->textures) {
                                vex::post_message(std::string("loading ") + texture->defaultTexturePath);
                                fx->load_texture(yordle::cdtb::xxhashlist::hash(texture->defaultTexturePath));
                            }
                        }
                    }
                }
            }
        }
    }
} // namespace vex::mage
