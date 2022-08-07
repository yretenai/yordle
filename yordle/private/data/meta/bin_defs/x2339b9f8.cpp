/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2339b9f8.hpp>

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

yordle::data::meta::x2339b9f8::x2339b9f8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_Group = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1605967500u);
    if(ptr_Group != nullptr) {
        Group = ptr_Group->value;
    }

    auto ptr_x669347a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(107558010u);
    if(ptr_x669347a != nullptr) {
        x669347a = ptr_x669347a->value;
    }

    auto ptr_xc180a7f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(202902143u);
    if(ptr_xc180a7f != nullptr) {
        xc180a7f = ptr_xc180a7f->value;
    }

    auto ptr_xbe72a198 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3195183512u);
    if(ptr_xbe72a198 != nullptr) {
        xbe72a198 = ptr_xbe72a198->value;
    }
}