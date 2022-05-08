/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SubmeshVisibilityEventData.hpp>

#include <yordle/data/meta/bin_defs/BaseEventData.hpp>
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

yordle::data::meta::SubmeshVisibilityEventData::SubmeshVisibilityEventData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseEventData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mShowSubmeshList = prop->cast_prop<yordle::data::prop::set_prop>(1833779920u);
    if(ptr_mShowSubmeshList != nullptr) {
        for(const auto &set_mShowSubmeshList_entry : ptr_mShowSubmeshList->value) {
            auto ptr_mShowSubmeshList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mShowSubmeshList_entry);
            if(ptr_mShowSubmeshList_entry != nullptr) {
                mShowSubmeshList.emplace_back(ptr_mShowSubmeshList_entry->value);
            }
        }
    }

    auto ptr_mHideSubmeshList = prop->cast_prop<yordle::data::prop::set_prop>(3141641307u);
    if(ptr_mHideSubmeshList != nullptr) {
        for(const auto &set_mHideSubmeshList_entry : ptr_mHideSubmeshList->value) {
            auto ptr_mHideSubmeshList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mHideSubmeshList_entry);
            if(ptr_mHideSubmeshList_entry != nullptr) {
                mHideSubmeshList.emplace_back(ptr_mHideSubmeshList_entry->value);
            }
        }
    }

    auto ptr_x42ad0910 = prop->cast_prop<yordle::data::prop::bool_prop>(1118636304u);
    if(ptr_x42ad0910 != nullptr) {
        x42ad0910 = ptr_x42ad0910->value;
    }
}
