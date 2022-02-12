/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GDSMapObjectLightingInfo.hpp>

#include <yordle/data/meta/bin_defs/GDSMapObjectExtraInfo.hpp>
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

yordle::data::meta::GDSMapObjectLightingInfo::GDSMapObjectLightingInfo(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GDSMapObjectExtraInfo(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_colors = prop->cast_prop<yordle::data::prop::set_prop>(4176775601u);
    if(ptr_colors != nullptr) {
        auto index_colors = 0;
        for(const auto &set_colors_entry : ptr_colors->value) {
            auto ptr_colors_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::quaternion_prop>(set_colors_entry);
            if(ptr_colors_entry != nullptr) {
                colors[index_colors] = ptr_colors_entry->value;
            }
            index_colors++;
        }
    }
}