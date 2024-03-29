/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>

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

yordle::data::meta::ViewPaneDefinition::ViewPaneDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x6eac67fc = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1856792572u);
    if(ptr_x6eac67fc != nullptr) {
        x6eac67fc = ptr_x6eac67fc->value;
    }

    auto ptr_dragRegionElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1179841693u);
    if(ptr_dragRegionElement != nullptr) {
        dragRegionElement = ptr_dragRegionElement->value;
    }

    auto ptr_scrollRegionElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3707048936u);
    if(ptr_scrollRegionElement != nullptr) {
        scrollRegionElement = ptr_scrollRegionElement->value;
    }

    auto ptr_scissorRegionElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1719874907u);
    if(ptr_scissorRegionElement != nullptr) {
        scissorRegionElement = ptr_scissorRegionElement->value;
    }

    auto ptr_scrollingScene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2427304548u);
    if(ptr_scrollingScene != nullptr) {
        scrollingScene = ptr_scrollingScene->value;
    }

    auto ptr_scrollDirection = prop->cast_prop<yordle::data::prop::uint8_prop>(3394259485u);
    if(ptr_scrollDirection != nullptr) {
        scrollDirection = ptr_scrollDirection->value;
    }

    auto ptr_objectPath = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(490118185u);
    if(ptr_objectPath != nullptr) {
        objectPath = ptr_objectPath->value;
    }
}
