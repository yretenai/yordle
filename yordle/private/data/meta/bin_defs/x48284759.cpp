/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x48284759.hpp>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
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

yordle::data::meta::x48284759::x48284759(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICastRequirement(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Distance = prop->cast_prop<yordle::data::prop::float32_prop>(783488098u);
    if(ptr_Distance != nullptr) {
        Distance = ptr_Distance->value;
    }
}
