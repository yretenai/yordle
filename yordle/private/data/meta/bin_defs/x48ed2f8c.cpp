/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x48ed2f8c.hpp>

#include <yordle/data/meta/bin_defs/x83d6eef9.hpp>
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

yordle::data::meta::x48ed2f8c::x48ed2f8c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x83d6eef9(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf8ac8a0f = prop->cast_prop<yordle::data::prop::string_prop>(4172057103u);
    if(ptr_xf8ac8a0f != nullptr) {
        xf8ac8a0f = ptr_xf8ac8a0f->value;
    }

    auto ptr_x1650c13b = prop->cast_prop<yordle::data::prop::uint8_prop>(374391099u);
    if(ptr_x1650c13b != nullptr) {
        x1650c13b = ptr_x1650c13b->value;
    }
}
