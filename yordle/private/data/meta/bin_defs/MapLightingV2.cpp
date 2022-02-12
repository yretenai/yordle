/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapLightingV2.hpp>

#include <yordle/data/meta/bin_defs/MapGraphicsFeature.hpp>
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

yordle::data::meta::MapLightingV2::MapLightingV2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapGraphicsFeature(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xee91017d = prop->cast_prop<yordle::data::prop::float32_prop>(4002480509u);
    if(ptr_xee91017d != nullptr) {
        xee91017d = ptr_xee91017d->value;
    }

    auto ptr_xc916a9fc = prop->cast_prop<yordle::data::prop::float32_prop>(3373705724u);
    if(ptr_xc916a9fc != nullptr) {
        xc916a9fc = ptr_xc916a9fc->value;
    }
}
