/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MaterialInstanceDynamicSwitch.hpp>

#include <yordle/data/meta/bin_defs/x7a851cd8.hpp>
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

yordle::data::meta::MaterialInstanceDynamicSwitch::MaterialInstanceDynamicSwitch(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_enabled = prop->cast_prop<yordle::data::prop::bool_prop>(49525662u);
    if(ptr_enabled != nullptr) {
        enabled = ptr_enabled->value;
    }

    auto ptr_driver = prop->cast_prop<yordle::data::prop::structure_prop>(3847494111u);
    if(ptr_driver != nullptr) {
        driver = yordle::data::meta::deserialize<yordle::data::meta::x7a851cd8>(ptr_driver, 2055544024u);
    }
}
