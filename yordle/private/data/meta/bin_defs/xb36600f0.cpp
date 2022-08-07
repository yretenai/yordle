/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb36600f0.hpp>

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

yordle::data::meta::xb36600f0::xb36600f0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_id = prop->cast_prop<yordle::data::prop::uint64_prop>(926444256u);
    if(ptr_id != nullptr) {
        id = ptr_id->value;
    }

    auto ptr_x81f82f1 = prop->cast_prop<yordle::data::prop::string_prop>(136282865u);
    if(ptr_x81f82f1 != nullptr) {
        x81f82f1 = ptr_x81f82f1->value;
    }

    auto ptr_xfbc94a2c = prop->cast_prop<yordle::data::prop::string_prop>(4224272940u);
    if(ptr_xfbc94a2c != nullptr) {
        xfbc94a2c = ptr_xfbc94a2c->value;
    }

    auto ptr_x8d7a04b6 = prop->cast_prop<yordle::data::prop::string_prop>(2373584054u);
    if(ptr_x8d7a04b6 != nullptr) {
        x8d7a04b6 = ptr_x8d7a04b6->value;
    }

    auto ptr_IconPath = prop->cast_prop<yordle::data::prop::string_prop>(1999062871u);
    if(ptr_IconPath != nullptr) {
        IconPath = ptr_IconPath->value;
    }

    auto ptr_xbbd2ae7e = prop->cast_prop<yordle::data::prop::map_prop>(3151146622u);
    if(ptr_xbbd2ae7e != nullptr) {
        for(const auto &set_xbbd2ae7e_pair : ptr_xbbd2ae7e->value) {
            auto ptr_xbbd2ae7e_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_xbbd2ae7e_pair.first);
            auto ptr_xbbd2ae7e_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_xbbd2ae7e_pair.second);
            if(ptr_xbbd2ae7e_key != nullptr && ptr_xbbd2ae7e_value != nullptr) {
                xbbd2ae7e.emplace(ptr_xbbd2ae7e_key->value, ptr_xbbd2ae7e_value->value);
            }
        }
    }

    auto ptr_tags = prop->cast_prop<yordle::data::prop::map_prop>(4095142816u);
    if(ptr_tags != nullptr) {
        for(const auto &set_tags_pair : ptr_tags->value) {
            auto ptr_tags_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_tags_pair.first);
            auto ptr_tags_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_tags_pair.second);
            if(ptr_tags_key != nullptr && ptr_tags_value != nullptr) {
                tags.emplace(ptr_tags_key->value, ptr_tags_value->value);
            }
        }
    }
}