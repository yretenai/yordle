/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8e85b8c7.hpp>

#include <yordle/data/meta/bin_defs/xf795f405.hpp>
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

yordle::data::meta::x8e85b8c7::x8e85b8c7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xf795f405(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x1bcf29d8 = prop->cast_prop<yordle::data::prop::structure_prop>(466561496u);
    if(ptr_x1bcf29d8 != nullptr) {
        x1bcf29d8 = yordle::data::meta::deserialize<yordle::data::meta::xf795f405>(ptr_x1bcf29d8, 4153799685u);
    }
}
