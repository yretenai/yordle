/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CursorDataTeamContext.hpp>

#include <yordle/data/meta/bin_defs/CursorData.hpp>
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

yordle::data::meta::CursorDataTeamContext::CursorDataTeamContext(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mData = prop->cast_prop<yordle::data::prop::set_prop>(2114832992u);
    if(ptr_mData != nullptr) {
        auto index_mData = 0;
        for(const auto &set_mData_entry : ptr_mData->value) {
            auto ptr_mData_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mData_entry);
            if(ptr_mData_entry != nullptr) {
                mData[index_mData] = yordle::data::meta::deserialize<yordle::data::meta::CursorData>(ptr_mData_entry, 187557783u);
            }
            index_mData++;
        }
    }
}