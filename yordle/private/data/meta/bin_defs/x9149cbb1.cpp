/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x9149cbb1.hpp>

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

yordle::data::meta::x9149cbb1::x9149cbb1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf36dc80c = prop->cast_prop<yordle::data::prop::uint32_prop>(4084058124u);
    if(ptr_xf36dc80c != nullptr) {
        xf36dc80c = ptr_xf36dc80c->value;
    }

    auto ptr_SponsorTexturePath = prop->cast_prop<yordle::data::prop::xx_hash_prop>(3625922223u);
    if(ptr_SponsorTexturePath != nullptr) {
        SponsorTexturePath = ptr_SponsorTexturePath->value;
    }
}
