/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xc68f2b.hpp>

#include <yordle/data/meta/bin_defs/IFxAction.hpp>
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

yordle::data::meta::xc68f2b::xc68f2b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IFxAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_ZoomEase = prop->cast_prop<yordle::data::prop::uint8_prop>(1810952680u);
    if(ptr_ZoomEase != nullptr) {
        ZoomEase = ptr_ZoomEase->value;
    }
}
