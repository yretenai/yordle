/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdf899961.hpp>

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

yordle::data::meta::xdf899961::xdf899961(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x128df22 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(19455778u);
    if(ptr_x128df22 != nullptr) {
        x128df22 = ptr_x128df22->value;
    }

    auto ptr_xbf9a001a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3214540826u);
    if(ptr_xbf9a001a != nullptr) {
        xbf9a001a = ptr_xbf9a001a->value;
    }

    auto ptr_x4e81b89b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1317124251u);
    if(ptr_x4e81b89b != nullptr) {
        x4e81b89b = ptr_x4e81b89b->value;
    }

    auto ptr_x6c638a80 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1818462848u);
    if(ptr_x6c638a80 != nullptr) {
        x6c638a80 = ptr_x6c638a80->value;
    }
}
