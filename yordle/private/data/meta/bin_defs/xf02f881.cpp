/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xf02f881.hpp>

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

yordle::data::meta::xf02f881::xf02f881(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x7f9566b7 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2140497591u);
    if(ptr_x7f9566b7 != nullptr) {
        x7f9566b7 = ptr_x7f9566b7->value;
    }

    auto ptr_x81999f36 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2174328630u);
    if(ptr_x81999f36 != nullptr) {
        x81999f36 = ptr_x81999f36->value;
    }

    auto ptr_xee313940 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3996203328u);
    if(ptr_xee313940 != nullptr) {
        xee313940 = ptr_xee313940->value;
    }

    auto ptr_xdffc8083 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3757867139u);
    if(ptr_xdffc8083 != nullptr) {
        xdffc8083 = ptr_xdffc8083->value;
    }
}
