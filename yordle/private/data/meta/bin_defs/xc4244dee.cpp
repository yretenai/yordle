/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xc4244dee.hpp>

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

yordle::data::meta::xc4244dee::xc4244dee(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xc98f4557 = prop->cast_prop<yordle::data::prop::vector_prop>(3381609815u);
    if(ptr_xc98f4557 != nullptr) {
        xc98f4557 = ptr_xc98f4557->value;
    }

    auto ptr_xd7a2e319 = prop->cast_prop<yordle::data::prop::vector_prop>(3617776409u);
    if(ptr_xd7a2e319 != nullptr) {
        xd7a2e319 = ptr_xd7a2e319->value;
    }
}
