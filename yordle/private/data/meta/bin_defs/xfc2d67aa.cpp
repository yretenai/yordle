/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xfc2d67aa.hpp>

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

yordle::data::meta::xfc2d67aa::xfc2d67aa(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_RolloverEvent = prop->cast_prop<yordle::data::prop::string_prop>(2774166396u);
    if(ptr_RolloverEvent != nullptr) {
        RolloverEvent = ptr_RolloverEvent->value;
    }

    auto ptr_x210ea29e = prop->cast_prop<yordle::data::prop::string_prop>(554607262u);
    if(ptr_x210ea29e != nullptr) {
        x210ea29e = ptr_x210ea29e->value;
    }

    auto ptr_MouseDownEvent = prop->cast_prop<yordle::data::prop::string_prop>(3629002872u);
    if(ptr_MouseDownEvent != nullptr) {
        MouseDownEvent = ptr_MouseDownEvent->value;
    }

    auto ptr_x452034c = prop->cast_prop<yordle::data::prop::string_prop>(72483660u);
    if(ptr_x452034c != nullptr) {
        x452034c = ptr_x452034c->value;
    }

    auto ptr_MouseUpEvent = prop->cast_prop<yordle::data::prop::string_prop>(2226573059u);
    if(ptr_MouseUpEvent != nullptr) {
        MouseUpEvent = ptr_MouseUpEvent->value;
    }

    auto ptr_xb49ca145 = prop->cast_prop<yordle::data::prop::string_prop>(3030163781u);
    if(ptr_xb49ca145 != nullptr) {
        xb49ca145 = ptr_xb49ca145->value;
    }
}
