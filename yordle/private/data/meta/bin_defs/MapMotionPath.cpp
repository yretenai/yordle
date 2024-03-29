/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapMotionPath.hpp>

#include <yordle/data/meta/bin_defs/MapPathSegment.hpp>
#include <yordle/data/meta/bin_defs/MapPlaceable.hpp>
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

yordle::data::meta::MapMotionPath::MapMotionPath(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Segments = prop->cast_prop<yordle::data::prop::set_prop>(1365364879u);
    if(ptr_Segments != nullptr) {
        for(const auto &set_Segments_entry : ptr_Segments->value) {
            auto ptr_Segments_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_Segments_entry);
            if(ptr_Segments_entry != nullptr) {
                Segments.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::MapPathSegment>(ptr_Segments_entry, 2603925163u));
            }
        }
    }
}
