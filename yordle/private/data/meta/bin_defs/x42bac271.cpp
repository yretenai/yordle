/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x42bac271.hpp>

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

yordle::data::meta::x42bac271::x42bac271(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_UiSound = prop->cast_prop<yordle::data::prop::string_prop>(2938438826u);
    if(ptr_UiSound != nullptr) {
        UiSound = ptr_UiSound->value;
    }

    auto ptr_xec63d209 = prop->cast_prop<yordle::data::prop::uint8_prop>(3965964809u);
    if(ptr_xec63d209 != nullptr) {
        xec63d209 = ptr_xec63d209->value;
    }

    auto ptr_xa766d8e5 = prop->cast_prop<yordle::data::prop::float32_prop>(2808535269u);
    if(ptr_xa766d8e5 != nullptr) {
        xa766d8e5 = ptr_xa766d8e5->value;
    }

    auto ptr_xd316d9e6 = prop->cast_prop<yordle::data::prop::float32_prop>(3541490150u);
    if(ptr_xd316d9e6 != nullptr) {
        xd316d9e6 = ptr_xd316d9e6->value;
    }

    auto ptr_x95b7cd25 = prop->cast_prop<yordle::data::prop::float32_prop>(2511850789u);
    if(ptr_x95b7cd25 != nullptr) {
        x95b7cd25 = ptr_x95b7cd25->value;
    }

    auto ptr_x93553543 = prop->cast_prop<yordle::data::prop::float32_prop>(2471834947u);
    if(ptr_x93553543 != nullptr) {
        x93553543 = ptr_x93553543->value;
    }

    auto ptr_x9897aa6c = prop->cast_prop<yordle::data::prop::float32_prop>(2560076396u);
    if(ptr_x9897aa6c != nullptr) {
        x9897aa6c = ptr_x9897aa6c->value;
    }

    auto ptr_xf48c0195 = prop->cast_prop<yordle::data::prop::float32_prop>(4102816149u);
    if(ptr_xf48c0195 != nullptr) {
        xf48c0195 = ptr_xf48c0195->value;
    }
}
