/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa37f48cd.hpp>

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

yordle::data::meta::xa37f48cd::xa37f48cd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x75538f6e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1968410478u);
    if(ptr_x75538f6e != nullptr) {
        x75538f6e = ptr_x75538f6e->value;
    }

    auto ptr_x605b77ad = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1616607149u);
    if(ptr_x605b77ad != nullptr) {
        x605b77ad = ptr_x605b77ad->value;
    }
}
