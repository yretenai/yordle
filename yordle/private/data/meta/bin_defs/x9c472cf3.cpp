/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x9c472cf3.hpp>

#include <yordle/data/meta/bin_defs/xffd0bda4.hpp>
#include <yordle/data/meta/bin_defs/xd20a9a6c.hpp>
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

yordle::data::meta::x9c472cf3::x9c472cf3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xa1d364f = prop->cast_prop<yordle::data::prop::inline_structure_prop>(169686607u);
    if(ptr_xa1d364f != nullptr) {
        xa1d364f = yordle::data::meta::deserialize<yordle::data::meta::xffd0bda4>(ptr_xa1d364f, 4291870116u);
    }

    auto ptr_xedeec556 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3991848278u);
    if(ptr_xedeec556 != nullptr) {
        xedeec556 = yordle::data::meta::deserialize<yordle::data::meta::xd20a9a6c>(ptr_xedeec556, 3523910252u);
    }

    auto ptr_Backdrop = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2478896375u);
    if(ptr_Backdrop != nullptr) {
        Backdrop = ptr_Backdrop->value;
    }
}
