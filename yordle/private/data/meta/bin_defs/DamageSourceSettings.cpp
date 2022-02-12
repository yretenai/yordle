/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DamageSourceSettings.hpp>

#include <yordle/data/meta/bin_defs/DamageSourceTemplate.hpp>
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

yordle::data::meta::DamageSourceSettings::DamageSourceSettings(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_damageTagDefinition = prop->cast_prop<yordle::data::prop::set_prop>(964539841u);
    if(ptr_damageTagDefinition != nullptr) {
        for(const auto &set_damageTagDefinition_entry : ptr_damageTagDefinition->value) {
            auto ptr_damageTagDefinition_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_damageTagDefinition_entry);
            if(ptr_damageTagDefinition_entry != nullptr) {
                damageTagDefinition.emplace_back(ptr_damageTagDefinition_entry->value);
            }
        }
    }

    auto ptr_templateDefinition = prop->cast_prop<yordle::data::prop::set_prop>(758688710u);
    if(ptr_templateDefinition != nullptr) {
        for(const auto &set_templateDefinition_entry : ptr_templateDefinition->value) {
            auto ptr_templateDefinition_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_templateDefinition_entry);
            if(ptr_templateDefinition_entry != nullptr) {
                templateDefinition.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::DamageSourceTemplate>(ptr_templateDefinition_entry, 3888872651u));
            }
        }
    }
}
