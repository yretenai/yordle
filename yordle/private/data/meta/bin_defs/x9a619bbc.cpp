/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x9a619bbc.hpp>

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

yordle::data::meta::x9a619bbc::x9a619bbc(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xbfda5017 = prop->cast_prop<yordle::data::prop::set_prop>(3218755607u);
    if(ptr_xbfda5017 != nullptr) {
        auto index_xbfda5017 = 0;
        for(const auto &set_xbfda5017_entry : ptr_xbfda5017->value) {
            auto ptr_xbfda5017_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xbfda5017_entry);
            if(ptr_xbfda5017_entry != nullptr) {
                xbfda5017[index_xbfda5017] = ptr_xbfda5017_entry->value;
            }
            index_xbfda5017++;
        }
    }

    auto ptr_x75a1a58c = prop->cast_prop<yordle::data::prop::set_prop>(1973527948u);
    if(ptr_x75a1a58c != nullptr) {
        auto index_x75a1a58c = 0;
        for(const auto &set_x75a1a58c_entry : ptr_x75a1a58c->value) {
            auto ptr_x75a1a58c_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x75a1a58c_entry);
            if(ptr_x75a1a58c_entry != nullptr) {
                x75a1a58c[index_x75a1a58c] = ptr_x75a1a58c_entry->value;
            }
            index_x75a1a58c++;
        }
    }

    auto ptr_xe5032427 = prop->cast_prop<yordle::data::prop::set_prop>(3842188327u);
    if(ptr_xe5032427 != nullptr) {
        auto index_xe5032427 = 0;
        for(const auto &set_xe5032427_entry : ptr_xe5032427->value) {
            auto ptr_xe5032427_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xe5032427_entry);
            if(ptr_xe5032427_entry != nullptr) {
                xe5032427[index_xe5032427] = ptr_xe5032427_entry->value;
            }
            index_xe5032427++;
        }
    }
}
