/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x275342a3.hpp>

#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
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

yordle::data::meta::x275342a3::x275342a3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_rarity = prop->cast_prop<yordle::data::prop::uint32_prop>(1266615690u);
    if(ptr_rarity != nullptr) {
        rarity = ptr_rarity->value;
    }

    auto ptr_VfxResourceResolver = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2679170533u);
    if(ptr_VfxResourceResolver != nullptr) {
        VfxResourceResolver = ptr_VfxResourceResolver->value;
    }
}
