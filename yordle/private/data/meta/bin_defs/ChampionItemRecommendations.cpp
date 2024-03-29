/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ChampionItemRecommendations.hpp>

#include <yordle/data/meta/bin_defs/ItemCareyOverrideStartingItemSet.hpp>
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

yordle::data::meta::ChampionItemRecommendations::ChampionItemRecommendations(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xcc35ff18 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3426090776u);
    if(ptr_xcc35ff18 != nullptr) {
        xcc35ff18 = ptr_xcc35ff18->value;
    }

    auto ptr_mContextListLink = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2477901527u);
    if(ptr_mContextListLink != nullptr) {
        mContextListLink = ptr_mContextListLink->value;
    }

    auto ptr_xad6d25a8 = prop->cast_prop<yordle::data::prop::set_prop>(2909611432u);
    if(ptr_xad6d25a8 != nullptr) {
        for(const auto &set_xad6d25a8_entry : ptr_xad6d25a8->value) {
            auto ptr_xad6d25a8_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xad6d25a8_entry);
            if(ptr_xad6d25a8_entry != nullptr) {
                xad6d25a8.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ItemCareyOverrideStartingItemSet>(ptr_xad6d25a8_entry, 2822771443u));
            }
        }
    }

    auto ptr_x2d7fd821 = prop->cast_prop<yordle::data::prop::set_prop>(763353121u);
    if(ptr_x2d7fd821 != nullptr) {
        for(const auto &set_x2d7fd821_entry : ptr_x2d7fd821->value) {
            auto ptr_x2d7fd821_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x2d7fd821_entry);
            if(ptr_x2d7fd821_entry != nullptr) {
                x2d7fd821.emplace_back(ptr_x2d7fd821_entry->value);
            }
        }
    }
}
