/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionTemplateHotkeysKey.hpp>

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

yordle::data::meta::OptionTemplateHotkeysKey::OptionTemplateHotkeysKey(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_EventName = prop->cast_prop<yordle::data::prop::string_prop>(705137820u);
    if(ptr_EventName != nullptr) {
        EventName = ptr_EventName->value;
    }

    auto ptr_EventNameTraKey = prop->cast_prop<yordle::data::prop::string_prop>(1245960580u);
    if(ptr_EventNameTraKey != nullptr) {
        EventNameTraKey = ptr_EventNameTraKey->value;
    }

    auto ptr_position = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2471448074u);
    if(ptr_position != nullptr) {
        position = ptr_position->value;
    }
}