/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xbb59fd4.hpp>

#include <yordle/data/meta/bin_defs/x5016b4b.hpp>
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

yordle::data::meta::xbb59fd4::xbb59fd4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x38be1d74 = prop->cast_prop<yordle::data::prop::map_prop>(951983476u);
    if(ptr_x38be1d74 != nullptr) {
        for(const auto &set_x38be1d74_pair : ptr_x38be1d74->value) {
            auto ptr_x38be1d74_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_x38be1d74_pair.first);
            auto ptr_x38be1d74_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x38be1d74_pair.second);
            if(ptr_x38be1d74_key != nullptr && ptr_x38be1d74_value != nullptr) {
                x38be1d74.emplace(ptr_x38be1d74_key->value, yordle::data::meta::deserialize<yordle::data::meta::x5016b4b>(ptr_x38be1d74_value, 83979083u));
            }
        }
    }

    auto ptr_xe71adfe6 = prop->cast_prop<yordle::data::prop::map_prop>(3877298150u);
    if(ptr_xe71adfe6 != nullptr) {
        for(const auto &set_xe71adfe6_pair : ptr_xe71adfe6->value) {
            auto ptr_xe71adfe6_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_xe71adfe6_pair.first);
            auto ptr_xe71adfe6_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe71adfe6_pair.second);
            if(ptr_xe71adfe6_key != nullptr && ptr_xe71adfe6_value != nullptr) {
                xe71adfe6.emplace(ptr_xe71adfe6_key->value, yordle::data::meta::deserialize<yordle::data::meta::x5016b4b>(ptr_xe71adfe6_value, 83979083u));
            }
        }
    }
}
