/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xf68acc64.hpp>

#include <yordle/data/meta/bin_defs/x29f3a370.hpp>
#include <yordle/data/meta/bin_defs/x32c5fd80.hpp>
#include <yordle/data/meta/bin_defs/xff5d83bd.hpp>
#include <yordle/data/meta/bin_defs/x20664115.hpp>
#include <yordle/data/meta/bin_defs/xf2906c54.hpp>
#include <yordle/data/meta/bin_defs/xf535ab5.hpp>
#include <yordle/data/meta/bin_defs/xda27cf24.hpp>
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

yordle::data::meta::xf68acc64::xf68acc64(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xda27cf24(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xa46aab48 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2758454088u);
    if(ptr_xa46aab48 != nullptr) {
        xa46aab48 = ptr_xa46aab48->value;
    }

    auto ptr_x942f8261 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2486141537u);
    if(ptr_x942f8261 != nullptr) {
        x942f8261 = ptr_x942f8261->value;
    }

    auto ptr_xdb9ab509 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3684349193u);
    if(ptr_xdb9ab509 != nullptr) {
        xdb9ab509 = yordle::data::meta::deserialize<yordle::data::meta::x29f3a370>(ptr_xdb9ab509, 703832944u);
    }

    auto ptr_xe6e3afce = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3873681358u);
    if(ptr_xe6e3afce != nullptr) {
        xe6e3afce = yordle::data::meta::deserialize<yordle::data::meta::x32c5fd80>(ptr_xe6e3afce, 851836288u);
    }

    auto ptr_x118cca57 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(294439511u);
    if(ptr_x118cca57 != nullptr) {
        x118cca57 = yordle::data::meta::deserialize<yordle::data::meta::xff5d83bd>(ptr_x118cca57, 4284318653u);
    }

    auto ptr_xe9663f18 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3915792152u);
    if(ptr_xe9663f18 != nullptr) {
        xe9663f18 = yordle::data::meta::deserialize<yordle::data::meta::x20664115>(ptr_xe9663f18, 543572245u);
    }

    auto ptr_x841704fa = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2216101114u);
    if(ptr_x841704fa != nullptr) {
        x841704fa = yordle::data::meta::deserialize<yordle::data::meta::xf2906c54>(ptr_x841704fa, 4069551188u);
    }

    auto ptr_x1f6a28a3 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(527050915u);
    if(ptr_x1f6a28a3 != nullptr) {
        x1f6a28a3 = yordle::data::meta::deserialize<yordle::data::meta::xf535ab5>(ptr_x1f6a28a3, 257120949u);
    }

    auto ptr_x3c759c9a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1014340762u);
    if(ptr_x3c759c9a != nullptr) {
        x3c759c9a = ptr_x3c759c9a->value;
    }

    auto ptr_xf96fee7c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4184862332u);
    if(ptr_xf96fee7c != nullptr) {
        xf96fee7c = ptr_xf96fee7c->value;
    }

    auto ptr_xcef7a722 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3472336674u);
    if(ptr_xcef7a722 != nullptr) {
        xcef7a722 = ptr_xcef7a722->value;
    }
}
