/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb1a585e5.hpp>

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

yordle::data::meta::xb1a585e5::xb1a585e5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_border = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(525480503u);
    if(ptr_border != nullptr) {
        border = ptr_border->value;
    }

    auto ptr_x1c9ff127 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(480244007u);
    if(ptr_x1c9ff127 != nullptr) {
        x1c9ff127 = ptr_x1c9ff127->value;
    }

    auto ptr_x39ed6fc = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(60741372u);
    if(ptr_x39ed6fc != nullptr) {
        x39ed6fc = ptr_x39ed6fc->value;
    }

    auto ptr_x28cd6f66 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(684552038u);
    if(ptr_x28cd6f66 != nullptr) {
        x28cd6f66 = ptr_x28cd6f66->value;
    }

    auto ptr_x1cd5f428 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(483783720u);
    if(ptr_x1cd5f428 != nullptr) {
        x1cd5f428 = ptr_x1cd5f428->value;
    }

    auto ptr_xc96c4266 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3379315302u);
    if(ptr_xc96c4266 != nullptr) {
        xc96c4266 = ptr_xc96c4266->value;
    }

    auto ptr_xe04c974f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3763115855u);
    if(ptr_xe04c974f != nullptr) {
        xe04c974f = ptr_xe04c974f->value;
    }
}
