/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x560e6c39.hpp>

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

yordle::data::meta::x560e6c39::x560e6c39(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xd8073196 = prop->cast_prop<yordle::data::prop::string_prop>(3624350102u);
    if(ptr_xd8073196 != nullptr) {
        xd8073196 = ptr_xd8073196->value;
    }

    auto ptr_x8f1a336d = prop->cast_prop<yordle::data::prop::string_prop>(2400858989u);
    if(ptr_x8f1a336d != nullptr) {
        x8f1a336d = ptr_x8f1a336d->value;
    }

    auto ptr_x73dbef7a = prop->cast_prop<yordle::data::prop::string_prop>(1943793530u);
    if(ptr_x73dbef7a != nullptr) {
        x73dbef7a = ptr_x73dbef7a->value;
    }
}
