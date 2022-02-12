/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x18ee4f3b.hpp>

#include <yordle/data/meta/bin_defs/xe132f2d0.hpp>
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

yordle::data::meta::x18ee4f3b::x18ee4f3b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xe132f2d0(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_minUnits = prop->cast_prop<yordle::data::prop::uint32_prop>(2299718482u);
    if(ptr_minUnits != nullptr) {
        minUnits = ptr_minUnits->value;
    }

    auto ptr_maxUnits = prop->cast_prop<yordle::data::prop::optional_prop>(64121664u);
    if(ptr_maxUnits != nullptr) {
        auto ptr_maxUnits_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_maxUnits->value);
        if (ptr_maxUnits_opt != nullptr) {
            maxUnits = ptr_maxUnits_opt->value;
        }
    }

    auto ptr_Style = prop->cast_prop<yordle::data::prop::uint8_prop>(2888859350u);
    if(ptr_Style != nullptr) {
        Style = ptr_Style->value;
    }
}
