/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MicroTicksPerTickData.hpp>

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

yordle::data::meta::MicroTicksPerTickData::MicroTicksPerTickData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_minHealth = prop->cast_prop<yordle::data::prop::float32_prop>(410704417u);
    if(ptr_minHealth != nullptr) {
        minHealth = ptr_minHealth->value;
    }

    auto ptr_microTicksBetween = prop->cast_prop<yordle::data::prop::uint32_prop>(3855547341u);
    if(ptr_microTicksBetween != nullptr) {
        microTicksBetween = ptr_microTicksBetween->value;
    }
}
