/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x4e9d7735.hpp>

#include <yordle/data/meta/bin_defs/x61c3629.hpp>
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

yordle::data::meta::x4e9d7735::x4e9d7735(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x61c3629(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf5b8026a = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4122477162u);
    if(ptr_xf5b8026a != nullptr) {
        xf5b8026a = ptr_xf5b8026a->value;
    }

    auto ptr_xf9b5ab3 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(261839539u);
    if(ptr_xf9b5ab3 != nullptr) {
        xf9b5ab3 = ptr_xf9b5ab3->value;
    }

    auto ptr_x214b4895 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(558581909u);
    if(ptr_x214b4895 != nullptr) {
        x214b4895 = ptr_x214b4895->value;
    }

    auto ptr_xa2beecc2 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2730421442u);
    if(ptr_xa2beecc2 != nullptr) {
        xa2beecc2 = ptr_xa2beecc2->value;
    }
}
