/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ItemRecommendationOverride
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/ItemRecommendationOverrideContext.hpp>
#include <yordle/data/meta/bin_defs/ItemRecommendationOverrideStartingItemSet.hpp>
#include <yordle/data/meta/bin_defs/xf82b21de.hpp>
#include <yordle/data/meta/bin_defs/x5a3bc52d.hpp>
#include <yordle/data/meta/bin_defs/ItemRecommendationCondition.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ItemRecommendationOverrideContext
    struct ItemRecommendationOverrideContext;
#endif

#ifndef YORDLE_META_DEF_ItemRecommendationOverrideStartingItemSet
    struct ItemRecommendationOverrideStartingItemSet;
#endif

#ifndef YORDLE_META_DEF_xf82b21de
    struct xf82b21de;
#endif

#ifndef YORDLE_META_DEF_x5a3bc52d
    struct x5a3bc52d;
#endif

#ifndef YORDLE_META_DEF_ItemRecommendationCondition
    struct ItemRecommendationCondition;
#endif
    struct YORDLE_EXPORT ItemRecommendationOverride : public bin_class {
        explicit ItemRecommendationOverride(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1661050393u;
        }

        bool mForceOverride = false;
        std::vector<std::shared_ptr<yordle::data::meta::ItemRecommendationOverrideContext>> mOverrideContexts {};
        std::vector<std::shared_ptr<yordle::data::meta::ItemRecommendationOverrideStartingItemSet>> mStartingItemSets {};
        std::vector<std::shared_ptr<yordle::data::meta::xf82b21de>> xfda3759b {};
        std::vector<std::shared_ptr<yordle::data::meta::x5a3bc52d>> mRecItemRanges {};
        std::vector<yordle::data::meta::bin_fnv_hash> mCoreItems {};
        std::vector<std::shared_ptr<yordle::data::meta::ItemRecommendationCondition>> mRecommendedItems {};
    };
}
#define YORDLE_META_DEF_ItemRecommendationOverride
#endif
