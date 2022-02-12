/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BuffStackingTemplate.hpp>

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

yordle::data::meta::BuffStackingTemplate::BuffStackingTemplate(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_MaxStacks = prop->cast_prop<yordle::data::prop::int32_prop>(1745940288u);
    if(ptr_MaxStacks != nullptr) {
        MaxStacks = ptr_MaxStacks->value;
    }

    auto ptr_xb36eae8c = prop->cast_prop<yordle::data::prop::int32_prop>(3010375308u);
    if(ptr_xb36eae8c != nullptr) {
        xb36eae8c = ptr_xb36eae8c->value;
    }

    auto ptr_StacksExclusive = prop->cast_prop<yordle::data::prop::bool_prop>(3995831980u);
    if(ptr_StacksExclusive != nullptr) {
        StacksExclusive = ptr_StacksExclusive->value;
    }

    auto ptr_BuffAddType = prop->cast_prop<yordle::data::prop::uint32_prop>(1057836047u);
    if(ptr_BuffAddType != nullptr) {
        BuffAddType = ptr_BuffAddType->value;
    }
}