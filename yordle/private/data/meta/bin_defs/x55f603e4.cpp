/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x55f603e4.hpp>

#include <yordle/data/meta/bin_defs/x48eb8d47.hpp>
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

yordle::data::meta::x55f603e4::x55f603e4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x48eb8d47(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x81bc04be = prop->cast_prop<yordle::data::prop::int32_prop>(2176582846u);
    if(ptr_x81bc04be != nullptr) {
        x81bc04be = ptr_x81bc04be->value;
    }

    auto ptr_x3f954075 = prop->cast_prop<yordle::data::prop::bool_prop>(1066745973u);
    if(ptr_x3f954075 != nullptr) {
        x3f954075 = ptr_x3f954075->value;
    }
}