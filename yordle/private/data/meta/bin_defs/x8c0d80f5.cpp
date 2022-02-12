/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8c0d80f5.hpp>

#include <yordle/data/meta/bin_defs/MapAction.hpp>
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

yordle::data::meta::x8c0d80f5::x8c0d80f5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_MapParticleName = prop->cast_prop<yordle::data::prop::set_prop>(518005000u);
    if(ptr_MapParticleName != nullptr) {
        for(const auto &set_MapParticleName_entry : ptr_MapParticleName->value) {
            auto ptr_MapParticleName_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_MapParticleName_entry);
            if(ptr_MapParticleName_entry != nullptr) {
                MapParticleName.emplace_back(ptr_MapParticleName_entry->value);
            }
        }
    }

    auto ptr_Shuffle = prop->cast_prop<yordle::data::prop::bool_prop>(2030840142u);
    if(ptr_Shuffle != nullptr) {
        Shuffle = ptr_Shuffle->value;
    }
}