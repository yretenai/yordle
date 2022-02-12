/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DragonUITunables.hpp>

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

yordle::data::meta::DragonUITunables::DragonUITunables(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSlots = prop->cast_prop<yordle::data::prop::uint8_prop>(2443691253u);
    if(ptr_mSlots != nullptr) {
        mSlots = ptr_mSlots->value;
    }

    auto ptr_mDragonBaseNames = prop->cast_prop<yordle::data::prop::set_prop>(314664954u);
    if(ptr_mDragonBaseNames != nullptr) {
        for(const auto &set_mDragonBaseNames_entry : ptr_mDragonBaseNames->value) {
            auto ptr_mDragonBaseNames_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_mDragonBaseNames_entry);
            if(ptr_mDragonBaseNames_entry != nullptr) {
                mDragonBaseNames.emplace_back(ptr_mDragonBaseNames_entry->value);
            }
        }
    }
}
