/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xc0037ef9.hpp>

#include <yordle/data/meta/bin_defs/x4695505a.hpp>
#include <yordle/data/meta/bin_defs/x580644e.hpp>
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

yordle::data::meta::xc0037ef9::xc0037ef9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x580644e(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe095d841 = prop->cast_prop<yordle::data::prop::string_prop>(3767916609u);
    if(ptr_xe095d841 != nullptr) {
        xe095d841 = ptr_xe095d841->value;
    }

    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x21f50e4b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(569708107u);
    if(ptr_x21f50e4b != nullptr) {
        x21f50e4b = ptr_x21f50e4b->value;
    }

    auto ptr_xf7584cc4 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4149759172u);
    if(ptr_xf7584cc4 != nullptr) {
        xf7584cc4 = ptr_xf7584cc4->value;
    }

    auto ptr_x200be3be = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(537650110u);
    if(ptr_x200be3be != nullptr) {
        x200be3be = ptr_x200be3be->value;
    }

    auto ptr_x6c1dc1b4 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1813889460u);
    if(ptr_x6c1dc1b4 != nullptr) {
        x6c1dc1b4 = yordle::data::meta::deserialize<yordle::data::meta::x4695505a>(ptr_x6c1dc1b4, 1184190554u);
    }
}
