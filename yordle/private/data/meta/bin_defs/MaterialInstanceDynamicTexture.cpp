/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MaterialInstanceDynamicTexture.hpp>

#include <yordle/data/meta/bin_defs/DynamicMaterialTextureSwapOption.hpp>
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

yordle::data::meta::MaterialInstanceDynamicTexture::MaterialInstanceDynamicTexture(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_enabled = prop->cast_prop<yordle::data::prop::bool_prop>(49525662u);
    if(ptr_enabled != nullptr) {
        enabled = ptr_enabled->value;
    }

    auto ptr_options = prop->cast_prop<yordle::data::prop::set_prop>(4012403877u);
    if(ptr_options != nullptr) {
        for(const auto &set_options_entry : ptr_options->value) {
            auto ptr_options_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_options_entry);
            if(ptr_options_entry != nullptr) {
                options.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::DynamicMaterialTextureSwapOption>(ptr_options_entry, 567330916u));
            }
        }
    }
}
