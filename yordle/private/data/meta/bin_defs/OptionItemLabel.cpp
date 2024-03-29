/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionItemLabel.hpp>

#include <yordle/data/meta/bin_defs/IOptionItem.hpp>
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

yordle::data::meta::OptionItemLabel::OptionItemLabel(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IOptionItem(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x694aaa0b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1766500875u);
    if(ptr_x694aaa0b != nullptr) {
        x694aaa0b = ptr_x694aaa0b->value;
    }

    auto ptr_Label1TraKey = prop->cast_prop<yordle::data::prop::string_prop>(3748421612u);
    if(ptr_Label1TraKey != nullptr) {
        Label1TraKey = ptr_Label1TraKey->value;
    }

    auto ptr_Label2TraKey = prop->cast_prop<yordle::data::prop::string_prop>(1578692245u);
    if(ptr_Label2TraKey != nullptr) {
        Label2TraKey = ptr_Label2TraKey->value;
    }
}
