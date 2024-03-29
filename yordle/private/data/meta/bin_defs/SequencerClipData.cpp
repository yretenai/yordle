/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SequencerClipData.hpp>

#include <yordle/data/meta/bin_defs/BaseEventData.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
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

yordle::data::meta::SequencerClipData::SequencerClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ClipBaseData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mClipNameList = prop->cast_prop<yordle::data::prop::set_prop>(126660569u);
    if(ptr_mClipNameList != nullptr) {
        for(const auto &set_mClipNameList_entry : ptr_mClipNameList->value) {
            auto ptr_mClipNameList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mClipNameList_entry);
            if(ptr_mClipNameList_entry != nullptr) {
                mClipNameList.emplace_back(ptr_mClipNameList_entry->value);
            }
        }
    }

    auto ptr_mEventDataMap = prop->cast_prop<yordle::data::prop::map_prop>(4120397374u);
    if(ptr_mEventDataMap != nullptr) {
        for(const auto &set_mEventDataMap_pair : ptr_mEventDataMap->value) {
            auto ptr_mEventDataMap_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mEventDataMap_pair.first);
            auto ptr_mEventDataMap_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mEventDataMap_pair.second);
            if(ptr_mEventDataMap_key != nullptr && ptr_mEventDataMap_value != nullptr) {
                mEventDataMap.emplace(ptr_mEventDataMap_key->value, yordle::data::meta::deserialize<yordle::data::meta::BaseEventData>(ptr_mEventDataMap_value, 2039250216u));
            }
        }
    }
}
