/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/UpdaterResourceData.hpp>

#include <yordle/data/meta/bin_defs/UpdaterData.hpp>
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

yordle::data::meta::UpdaterResourceData::UpdaterResourceData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mUpdaterDataList = prop->cast_prop<yordle::data::prop::set_prop>(3198934893u);
    if(ptr_mUpdaterDataList != nullptr) {
        for(const auto &set_mUpdaterDataList_entry : ptr_mUpdaterDataList->value) {
            auto ptr_mUpdaterDataList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mUpdaterDataList_entry);
            if(ptr_mUpdaterDataList_entry != nullptr) {
                mUpdaterDataList.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::UpdaterData>(ptr_mUpdaterDataList_entry, 3953106978u));
            }
        }
    }
}
