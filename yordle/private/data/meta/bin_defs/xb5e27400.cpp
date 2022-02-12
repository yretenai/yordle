/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb5e27400.hpp>

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

yordle::data::meta::xb5e27400::xb5e27400(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Group = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1605967500u);
    if(ptr_Group != nullptr) {
        Group = ptr_Group->value;
    }

    auto ptr_x5dd34f6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(98383094u);
    if(ptr_x5dd34f6 != nullptr) {
        x5dd34f6 = ptr_x5dd34f6->value;
    }

    auto ptr_x2f0c1d34 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(789323060u);
    if(ptr_x2f0c1d34 != nullptr) {
        x2f0c1d34 = ptr_x2f0c1d34->value;
    }

    auto ptr_x868e69a1 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2257480097u);
    if(ptr_x868e69a1 != nullptr) {
        x868e69a1 = ptr_x868e69a1->value;
    }

    auto ptr_xecb8bd25 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3971530021u);
    if(ptr_xecb8bd25 != nullptr) {
        xecb8bd25 = ptr_xecb8bd25->value;
    }
}