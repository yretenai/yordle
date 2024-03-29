/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DynamicMaterialDef.hpp>

#include <yordle/data/meta/bin_defs/DynamicMaterialParameterDef.hpp>
#include <yordle/data/meta/bin_defs/DynamicMaterialTextureSwapDef.hpp>
#include <yordle/data/meta/bin_defs/DynamicMaterialStaticSwitch.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::DynamicMaterialDef::DynamicMaterialDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x5ed2db8d = prop->cast_prop<yordle::data::prop::bool_prop>(1590877069u);
    if(ptr_x5ed2db8d != nullptr) {
        x5ed2db8d = ptr_x5ed2db8d->value;
    }

    auto ptr_parameters = prop->cast_prop<yordle::data::prop::set_prop>(1218784985u);
    if(ptr_parameters != nullptr) {
        for(const auto &set_parameters_entry : ptr_parameters->value) {
            auto ptr_parameters_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_parameters_entry);
            if(ptr_parameters_entry != nullptr) {
                parameters.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::DynamicMaterialParameterDef>(ptr_parameters_entry, 121596497u));
            }
        }
    }

    auto ptr_textures = prop->cast_prop<yordle::data::prop::set_prop>(2567998597u);
    if(ptr_textures != nullptr) {
        for(const auto &set_textures_entry : ptr_textures->value) {
            auto ptr_textures_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_textures_entry);
            if(ptr_textures_entry != nullptr) {
                textures.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::DynamicMaterialTextureSwapDef>(ptr_textures_entry, 1303930364u));
            }
        }
    }

    auto ptr_staticSwitch = prop->cast_prop<yordle::data::prop::structure_prop>(61107051u);
    if(ptr_staticSwitch != nullptr) {
        staticSwitch = yordle::data::meta::deserialize<yordle::data::meta::DynamicMaterialStaticSwitch>(ptr_staticSwitch, 4013554309u);
    }
}
