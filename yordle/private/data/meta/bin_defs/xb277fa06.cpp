/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb277fa06.hpp>

#include <yordle/data/meta/bin_defs/xa51270e5.hpp>
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

yordle::data::meta::xb277fa06::xb277fa06(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xa51270e5(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xb49ed6f0 = prop->cast_prop<yordle::data::prop::uint8_prop>(3030308592u);
    if(ptr_xb49ed6f0 != nullptr) {
        xb49ed6f0 = ptr_xb49ed6f0->value;
    }
}
