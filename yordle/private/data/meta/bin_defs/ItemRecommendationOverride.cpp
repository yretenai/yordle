/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ItemRecommendationOverride.hpp>

#include <yordle/data/meta/bin_defs/ItemRecommendationOverrideContext.hpp>
#include <yordle/data/meta/bin_defs/ItemRecommendationOverrideStartingItemSet.hpp>
#include <yordle/data/meta/bin_defs/x5a3bc52d.hpp>
#include <yordle/data/meta/bin_defs/ItemRecommendationCondition.hpp>
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

yordle::data::meta::ItemRecommendationOverride::ItemRecommendationOverride(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mForceOverride = prop->cast_prop<yordle::data::prop::bool_prop>(2231942803u);
    if(ptr_mForceOverride != nullptr) {
        mForceOverride = ptr_mForceOverride->value;
    }

    auto ptr_mOverrideContexts = prop->cast_prop<yordle::data::prop::set_prop>(2318063320u);
    if(ptr_mOverrideContexts != nullptr) {
        for(const auto &set_mOverrideContexts_entry : ptr_mOverrideContexts->value) {
            auto ptr_mOverrideContexts_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mOverrideContexts_entry);
            if(ptr_mOverrideContexts_entry != nullptr) {
                mOverrideContexts.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ItemRecommendationOverrideContext>(ptr_mOverrideContexts_entry, 3898055584u));
            }
        }
    }

    auto ptr_mStartingItemSets = prop->cast_prop<yordle::data::prop::set_prop>(971331326u);
    if(ptr_mStartingItemSets != nullptr) {
        for(const auto &set_mStartingItemSets_entry : ptr_mStartingItemSets->value) {
            auto ptr_mStartingItemSets_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mStartingItemSets_entry);
            if(ptr_mStartingItemSets_entry != nullptr) {
                mStartingItemSets.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ItemRecommendationOverrideStartingItemSet>(ptr_mStartingItemSets_entry, 2556481222u));
            }
        }
    }

    auto ptr_mRecItemRanges = prop->cast_prop<yordle::data::prop::set_prop>(2106947283u);
    if(ptr_mRecItemRanges != nullptr) {
        for(const auto &set_mRecItemRanges_entry : ptr_mRecItemRanges->value) {
            auto ptr_mRecItemRanges_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mRecItemRanges_entry);
            if(ptr_mRecItemRanges_entry != nullptr) {
                mRecItemRanges.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x5a3bc52d>(ptr_mRecItemRanges_entry, 1513866541u));
            }
        }
    }

    auto ptr_mCoreItems = prop->cast_prop<yordle::data::prop::set_prop>(1219672089u);
    if(ptr_mCoreItems != nullptr) {
        for(const auto &set_mCoreItems_entry : ptr_mCoreItems->value) {
            auto ptr_mCoreItems_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mCoreItems_entry);
            if(ptr_mCoreItems_entry != nullptr) {
                mCoreItems.emplace_back(ptr_mCoreItems_entry->value);
            }
        }
    }

    auto ptr_mRecommendedItems = prop->cast_prop<yordle::data::prop::set_prop>(2190279189u);
    if(ptr_mRecommendedItems != nullptr) {
        for(const auto &set_mRecommendedItems_entry : ptr_mRecommendedItems->value) {
            auto ptr_mRecommendedItems_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mRecommendedItems_entry);
            if(ptr_mRecommendedItems_entry != nullptr) {
                mRecommendedItems.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ItemRecommendationCondition>(ptr_mRecommendedItems_entry, 396544810u));
            }
        }
    }
}
