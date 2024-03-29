/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8164bac7.hpp>

#include <yordle/data/meta/bin_defs/x2925d554.hpp>
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

yordle::data::meta::x8164bac7::x8164bac7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xcac17cff = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3401678079u);
    if(ptr_xcac17cff != nullptr) {
        xcac17cff = ptr_xcac17cff->value;
    }

    auto ptr_x1f681491 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(526914705u);
    if(ptr_x1f681491 != nullptr) {
        x1f681491 = yordle::data::meta::deserialize<yordle::data::meta::x2925d554>(ptr_x1f681491, 690345300u);
    }
}
