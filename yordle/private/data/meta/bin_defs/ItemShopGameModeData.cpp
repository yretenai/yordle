/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ItemShopGameModeData.hpp>

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

yordle::data::meta::ItemShopGameModeData::ItemShopGameModeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xc561f8e9 = prop->cast_prop<yordle::data::prop::set_prop>(3311532265u);
    if(ptr_xc561f8e9 != nullptr) {
        for(const auto &set_xc561f8e9_entry : ptr_xc561f8e9->value) {
            auto ptr_xc561f8e9_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xc561f8e9_entry);
            if(ptr_xc561f8e9_entry != nullptr) {
                xc561f8e9.emplace_back(ptr_xc561f8e9_entry->value);
            }
        }
    }

    auto ptr_x37792a41 = prop->cast_prop<yordle::data::prop::set_prop>(930687553u);
    if(ptr_x37792a41 != nullptr) {
        for(const auto &set_x37792a41_entry : ptr_x37792a41->value) {
            auto ptr_x37792a41_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x37792a41_entry);
            if(ptr_x37792a41_entry != nullptr) {
                x37792a41.emplace_back(ptr_x37792a41_entry->value);
            }
        }
    }

    auto ptr_xc3b3430a = prop->cast_prop<yordle::data::prop::uint32_prop>(3283305226u);
    if(ptr_xc3b3430a != nullptr) {
        xc3b3430a = ptr_xc3b3430a->value;
    }

    auto ptr_x51a18bc3 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1369541571u);
    if(ptr_x51a18bc3 != nullptr) {
        x51a18bc3 = ptr_x51a18bc3->value;
    }

    auto ptr_x897c69b7 = prop->cast_prop<yordle::data::prop::map_prop>(2306632119u);
    if(ptr_x897c69b7 != nullptr) {
        for(const auto &set_x897c69b7_pair : ptr_x897c69b7->value) {
            auto ptr_x897c69b7_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x897c69b7_pair.first);
            auto ptr_x897c69b7_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x897c69b7_pair.second);
            if(ptr_x897c69b7_key != nullptr && ptr_x897c69b7_value != nullptr) {
                x897c69b7.emplace(ptr_x897c69b7_key->value, ptr_x897c69b7_value->value);
            }
        }
    }

    auto ptr_RecItemsSwaps = prop->cast_prop<yordle::data::prop::map_prop>(3090661733u);
    if(ptr_RecItemsSwaps != nullptr) {
        for(const auto &set_RecItemsSwaps_pair : ptr_RecItemsSwaps->value) {
            auto ptr_RecItemsSwaps_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_RecItemsSwaps_pair.first);
            auto ptr_RecItemsSwaps_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_RecItemsSwaps_pair.second);
            if(ptr_RecItemsSwaps_key != nullptr && ptr_RecItemsSwaps_value != nullptr) {
                RecItemsSwaps.emplace(ptr_RecItemsSwaps_key->value, ptr_RecItemsSwaps_value->value);
            }
        }
    }
}
