/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapBehavior.hpp>

#include <yordle/data/meta/bin_defs/MapAction.hpp>
#include <yordle/data/meta/bin_defs/GenericMapPlaceable.hpp>
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

yordle::data::meta::MapBehavior::MapBehavior(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GenericMapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Cue = prop->cast_prop<yordle::data::prop::string_prop>(3847623424u);
    if(ptr_Cue != nullptr) {
        Cue = ptr_Cue->value;
    }

    auto ptr_Actions = prop->cast_prop<yordle::data::prop::set_prop>(3048556132u);
    if(ptr_Actions != nullptr) {
        for(const auto &set_Actions_entry : ptr_Actions->value) {
            auto ptr_Actions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_Actions_entry);
            if(ptr_Actions_entry != nullptr) {
                Actions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::MapAction>(ptr_Actions_entry, 3419333123u));
            }
        }
    }

    auto ptr_x77f9e08 = prop->cast_prop<yordle::data::prop::float32_prop>(125804040u);
    if(ptr_x77f9e08 != nullptr) {
        x77f9e08 = ptr_x77f9e08->value;
    }
}
