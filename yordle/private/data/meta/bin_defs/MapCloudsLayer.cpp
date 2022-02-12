/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapCloudsLayer.hpp>

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

yordle::data::meta::MapCloudsLayer::MapCloudsLayer(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Direction = prop->cast_prop<yordle::data::prop::point_prop>(3748513642u);
    if(ptr_Direction != nullptr) {
        Direction = ptr_Direction->value;
    }

    auto ptr_Scale = prop->cast_prop<yordle::data::prop::float32_prop>(2190941297u);
    if(ptr_Scale != nullptr) {
        Scale = ptr_Scale->value;
    }

    auto ptr_speed = prop->cast_prop<yordle::data::prop::float32_prop>(2072037248u);
    if(ptr_speed != nullptr) {
        speed = ptr_speed->value;
    }
}