/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/NeutralTimerSourceIconData.hpp>

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

yordle::data::meta::NeutralTimerSourceIconData::NeutralTimerSourceIconData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf135454f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4046800207u);
    if(ptr_xf135454f != nullptr) {
        xf135454f = ptr_xf135454f->value;
    }

    auto ptr_xfed22233 = prop->cast_prop<yordle::data::prop::string_prop>(4275184179u);
    if(ptr_xfed22233 != nullptr) {
        xfed22233 = ptr_xfed22233->value;
    }

    auto ptr_Icon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3862959600u);
    if(ptr_Icon != nullptr) {
        Icon = ptr_Icon->value;
    }
}
