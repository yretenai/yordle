/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VfxFieldDragDefinitionData.hpp>

#include <yordle/data/meta/bin_defs/ValueVector3.hpp>
#include <yordle/data/meta/bin_defs/ValueFloat.hpp>
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

yordle::data::meta::VfxFieldDragDefinitionData::VfxFieldDragDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_position = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2471448074u);
    if(ptr_position != nullptr) {
        position = yordle::data::meta::deserialize<yordle::data::meta::ValueVector3>(ptr_position, 1759261366u);
    }

    auto ptr_radius = prop->cast_prop<yordle::data::prop::inline_structure_prop>(230313139u);
    if(ptr_radius != nullptr) {
        radius = yordle::data::meta::deserialize<yordle::data::meta::ValueFloat>(ptr_radius, 70254680u);
    }

    auto ptr_strength = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3766098096u);
    if(ptr_strength != nullptr) {
        strength = yordle::data::meta::deserialize<yordle::data::meta::ValueFloat>(ptr_strength, 70254680u);
    }
}
