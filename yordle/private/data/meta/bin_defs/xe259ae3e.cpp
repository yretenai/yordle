/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe259ae3e.hpp>

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

yordle::data::meta::xe259ae3e::xe259ae3e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x4939f3f8 = prop->cast_prop<yordle::data::prop::uint32_prop>(1228534776u);
    if(ptr_x4939f3f8 != nullptr) {
        x4939f3f8 = ptr_x4939f3f8->value;
    }

    auto ptr_textColor = prop->cast_prop<yordle::data::prop::color_prop>(1244254369u);
    if(ptr_textColor != nullptr) {
        textColor = ptr_textColor->value;
    }

    auto ptr_image = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3008443898u);
    if(ptr_image != nullptr) {
        image = ptr_image->value;
    }
}
