/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x85ba9e1c.hpp>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/xdd53d1ce.hpp>
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

yordle::data::meta::x85ba9e1c::x85ba9e1c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xdd53d1ce(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Target = prop->cast_prop<yordle::data::prop::structure_prop>(845187144u);
    if(ptr_Target != nullptr) {
        Target = yordle::data::meta::deserialize<yordle::data::meta::x1c494c09>(ptr_Target, 474565641u);
    }
}