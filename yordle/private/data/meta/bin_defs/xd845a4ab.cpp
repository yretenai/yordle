/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xd845a4ab.hpp>

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

yordle::data::meta::xd845a4ab::xd845a4ab(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xc4ecb642 = prop->cast_prop<yordle::data::prop::map_prop>(3303847490u);
    if(ptr_xc4ecb642 != nullptr) {
        for(const auto &set_xc4ecb642_pair : ptr_xc4ecb642->value) {
            auto ptr_xc4ecb642_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_xc4ecb642_pair.first);
            auto ptr_xc4ecb642_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_xc4ecb642_pair.second);
            if(ptr_xc4ecb642_key != nullptr && ptr_xc4ecb642_value != nullptr) {
                xc4ecb642.emplace(ptr_xc4ecb642_key->value, ptr_xc4ecb642_value->value);
            }
        }
    }

    auto ptr_xbb14a627 = prop->cast_prop<yordle::data::prop::map_prop>(3138692647u);
    if(ptr_xbb14a627 != nullptr) {
        for(const auto &set_xbb14a627_pair : ptr_xbb14a627->value) {
            auto ptr_xbb14a627_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_xbb14a627_pair.first);
            auto ptr_xbb14a627_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xbb14a627_pair.second);
            if(ptr_xbb14a627_key != nullptr && ptr_xbb14a627_value != nullptr) {
                xbb14a627.emplace(ptr_xbb14a627_key->value, ptr_xbb14a627_value->value);
            }
        }
    }
}