/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2a598565.hpp>

#include <yordle/data/meta/bin_defs/x24fc182b.hpp>
#include <yordle/data/meta/bin_defs/x64e7b9e1.hpp>
#include <yordle/data/meta/bin_defs/x2373fc78.hpp>
#include <yordle/data/meta/bin_defs/x8f85e859.hpp>
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

yordle::data::meta::x2a598565::x2a598565(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x8f85e859(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe9e6d319 = prop->cast_prop<yordle::data::prop::float32_prop>(3924218649u);
    if(ptr_xe9e6d319 != nullptr) {
        xe9e6d319 = ptr_xe9e6d319->value;
    }

    auto ptr_x18babeb3 = prop->cast_prop<yordle::data::prop::string_prop>(414891699u);
    if(ptr_x18babeb3 != nullptr) {
        x18babeb3 = ptr_x18babeb3->value;
    }

    auto ptr_x31be8604 = prop->cast_prop<yordle::data::prop::string_prop>(834569732u);
    if(ptr_x31be8604 != nullptr) {
        x31be8604 = ptr_x31be8604->value;
    }

    auto ptr_xc7b9055a = prop->cast_prop<yordle::data::prop::float32_prop>(3350791514u);
    if(ptr_xc7b9055a != nullptr) {
        xc7b9055a = ptr_xc7b9055a->value;
    }

    auto ptr_xfc596ba6 = prop->cast_prop<yordle::data::prop::string_prop>(4233718694u);
    if(ptr_xfc596ba6 != nullptr) {
        xfc596ba6 = ptr_xfc596ba6->value;
    }

    auto ptr_x7ea3e8d8 = prop->cast_prop<yordle::data::prop::string_prop>(2124671192u);
    if(ptr_x7ea3e8d8 != nullptr) {
        x7ea3e8d8 = ptr_x7ea3e8d8->value;
    }

    auto ptr_x40ee28f8 = prop->cast_prop<yordle::data::prop::string_prop>(1089349880u);
    if(ptr_x40ee28f8 != nullptr) {
        x40ee28f8 = ptr_x40ee28f8->value;
    }

    auto ptr_x7c67d7e9 = prop->cast_prop<yordle::data::prop::string_prop>(2087180265u);
    if(ptr_x7c67d7e9 != nullptr) {
        x7c67d7e9 = ptr_x7c67d7e9->value;
    }

    auto ptr_x721f9044 = prop->cast_prop<yordle::data::prop::string_prop>(1914671172u);
    if(ptr_x721f9044 != nullptr) {
        x721f9044 = ptr_x721f9044->value;
    }

    auto ptr_animationName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2555738718u);
    if(ptr_animationName != nullptr) {
        animationName = ptr_animationName->value;
    }

    auto ptr_x25888758 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(629704536u);
    if(ptr_x25888758 != nullptr) {
        x25888758 = ptr_x25888758->value;
    }

    auto ptr_x79f64609 = prop->cast_prop<yordle::data::prop::float32_prop>(2046182921u);
    if(ptr_x79f64609 != nullptr) {
        x79f64609 = ptr_x79f64609->value;
    }

    auto ptr_xdb1cc90a = prop->cast_prop<yordle::data::prop::float32_prop>(3676096778u);
    if(ptr_xdb1cc90a != nullptr) {
        xdb1cc90a = ptr_xdb1cc90a->value;
    }

    auto ptr_x567421af = prop->cast_prop<yordle::data::prop::unordered_set_prop>(1450451375u);
    if(ptr_x567421af != nullptr) {
        for(const auto &set_x567421af_entry : ptr_x567421af->value) {
            auto ptr_x567421af_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x567421af_entry);
            if(ptr_x567421af_entry != nullptr) {
                x567421af.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x24fc182b>(ptr_x567421af_entry, 620501035u));
            }
        }
    }

    auto ptr_x20cd725d = prop->cast_prop<yordle::data::prop::unordered_set_prop>(550335069u);
    if(ptr_x20cd725d != nullptr) {
        for(const auto &set_x20cd725d_entry : ptr_x20cd725d->value) {
            auto ptr_x20cd725d_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x20cd725d_entry);
            if(ptr_x20cd725d_entry != nullptr) {
                x20cd725d.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x64e7b9e1>(ptr_x20cd725d_entry, 1692908001u));
            }
        }
    }

    auto ptr_x9fa5a56c = prop->cast_prop<yordle::data::prop::unordered_set_prop>(2678433132u);
    if(ptr_x9fa5a56c != nullptr) {
        for(const auto &set_x9fa5a56c_entry : ptr_x9fa5a56c->value) {
            auto ptr_x9fa5a56c_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x9fa5a56c_entry);
            if(ptr_x9fa5a56c_entry != nullptr) {
                x9fa5a56c.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x2373fc78>(ptr_x9fa5a56c_entry, 594803832u));
            }
        }
    }
}