/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xad6892df.hpp>

#include <yordle/data/meta/bin_defs/x811882fd.hpp>
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

yordle::data::meta::xad6892df::xad6892df(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x811882fd(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf5021546 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4110554438u);
    if(ptr_xf5021546 != nullptr) {
        xf5021546 = ptr_xf5021546->value;
    }

    auto ptr_x18ee28a6 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(418261158u);
    if(ptr_x18ee28a6 != nullptr) {
        x18ee28a6 = ptr_x18ee28a6->value;
    }

    auto ptr_x7d7ba600 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2105255424u);
    if(ptr_x7d7ba600 != nullptr) {
        x7d7ba600 = ptr_x7d7ba600->value;
    }

    auto ptr_xb35faadf = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3009391327u);
    if(ptr_xb35faadf != nullptr) {
        xb35faadf = ptr_xb35faadf->value;
    }

    auto ptr_x476d21ab = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1198334379u);
    if(ptr_x476d21ab != nullptr) {
        x476d21ab = ptr_x476d21ab->value;
    }

    auto ptr_x2ce97d34 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(753499444u);
    if(ptr_x2ce97d34 != nullptr) {
        x2ce97d34 = ptr_x2ce97d34->value;
    }
}
