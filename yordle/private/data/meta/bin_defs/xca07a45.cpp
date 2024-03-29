/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xca07a45.hpp>

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

yordle::data::meta::xca07a45::xca07a45(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Icon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3862959600u);
    if(ptr_Icon != nullptr) {
        Icon = ptr_Icon->value;
    }

    auto ptr_xbde64e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3185987134u);
    if(ptr_xbde64e3e != nullptr) {
        xbde64e3e = ptr_xbde64e3e->value;
    }

    auto ptr_x1c9ff127 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(480244007u);
    if(ptr_x1c9ff127 != nullptr) {
        x1c9ff127 = ptr_x1c9ff127->value;
    }
}
