/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe3af402a.hpp>

#include <yordle/data/meta/bin_defs/x6450d6a.hpp>
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

yordle::data::meta::xe3af402a::xe3af402a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xcc5d06d5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3428648661u);
    if(ptr_xcc5d06d5 != nullptr) {
        xcc5d06d5 = ptr_xcc5d06d5->value;
    }

    auto ptr_xb002f5f5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2952984053u);
    if(ptr_xb002f5f5 != nullptr) {
        xb002f5f5 = ptr_xb002f5f5->value;
    }

    auto ptr_xcc2a34f0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3425318128u);
    if(ptr_xcc2a34f0 != nullptr) {
        xcc2a34f0 = ptr_xcc2a34f0->value;
    }

    auto ptr_x84a4a4f5 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2225382645u);
    if(ptr_x84a4a4f5 != nullptr) {
        x84a4a4f5 = ptr_x84a4a4f5->value;
    }

    auto ptr_x9d6cbf5d = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2641149789u);
    if(ptr_x9d6cbf5d != nullptr) {
        x9d6cbf5d = yordle::data::meta::deserialize<yordle::data::meta::x6450d6a>(ptr_x9d6cbf5d, 105188714u);
    }
}
