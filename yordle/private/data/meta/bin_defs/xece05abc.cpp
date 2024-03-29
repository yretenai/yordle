/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xece05abc.hpp>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
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

yordle::data::meta::xece05abc::xece05abc(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x3faea5ce = prop->cast_prop<yordle::data::prop::float32_prop>(1068410318u);
    if(ptr_x3faea5ce != nullptr) {
        x3faea5ce = ptr_x3faea5ce->value;
    }

    auto ptr_x728eb9a3 = prop->cast_prop<yordle::data::prop::uint8_prop>(1921956259u);
    if(ptr_x728eb9a3 != nullptr) {
        x728eb9a3 = ptr_x728eb9a3->value;
    }
}
