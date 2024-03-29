/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftMapCharacterData.hpp>

#include <yordle/data/meta/bin_defs/TftMapCharacterSkinData.hpp>
#include <yordle/data/meta/bin_defs/TftMapCharacterRecordData.hpp>
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

yordle::data::meta::TftMapCharacterData::TftMapCharacterData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_SkinData = prop->cast_prop<yordle::data::prop::set_prop>(1648598176u);
    if(ptr_SkinData != nullptr) {
        for(const auto &set_SkinData_entry : ptr_SkinData->value) {
            auto ptr_SkinData_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_SkinData_entry);
            if(ptr_SkinData_entry != nullptr) {
                SkinData.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftMapCharacterSkinData>(ptr_SkinData_entry, 2653184481u));
            }
        }
    }

    auto ptr_charData = prop->cast_prop<yordle::data::prop::set_prop>(2641908381u);
    if(ptr_charData != nullptr) {
        for(const auto &set_charData_entry : ptr_charData->value) {
            auto ptr_charData_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_charData_entry);
            if(ptr_charData_entry != nullptr) {
                charData.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftMapCharacterRecordData>(ptr_charData_entry, 229654189u));
            }
        }
    }
}
