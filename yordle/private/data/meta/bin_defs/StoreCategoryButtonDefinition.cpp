/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/StoreCategoryButtonDefinition.hpp>

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

yordle::data::meta::StoreCategoryButtonDefinition::StoreCategoryButtonDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_category = prop->cast_prop<yordle::data::prop::uint32_prop>(3475980913u);
    if(ptr_category != nullptr) {
        category = ptr_category->value;
    }

    auto ptr_x43b27471 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1135768689u);
    if(ptr_x43b27471 != nullptr) {
        x43b27471 = ptr_x43b27471->value;
    }
}
