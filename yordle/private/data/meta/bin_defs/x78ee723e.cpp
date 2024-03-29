/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x78ee723e.hpp>

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

yordle::data::meta::x78ee723e::x78ee723e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x39e35e95 = prop->cast_prop<yordle::data::prop::bool_prop>(971202197u);
    if(ptr_x39e35e95 != nullptr) {
        x39e35e95 = ptr_x39e35e95->value;
    }

    auto ptr_Duration = prop->cast_prop<yordle::data::prop::float32_prop>(799079693u);
    if(ptr_Duration != nullptr) {
        Duration = ptr_Duration->value;
    }

    auto ptr_x40e5a495 = prop->cast_prop<yordle::data::prop::bool_prop>(1088791701u);
    if(ptr_x40e5a495 != nullptr) {
        x40e5a495 = ptr_x40e5a495->value;
    }

    auto ptr_type = prop->cast_prop<yordle::data::prop::uint32_prop>(1361572173u);
    if(ptr_type != nullptr) {
        type = ptr_type->value;
    }
}
