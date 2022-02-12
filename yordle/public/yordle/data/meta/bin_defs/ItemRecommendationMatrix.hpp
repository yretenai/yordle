/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ItemRecommendationMatrix
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/ItemRecommendationMatrixRow.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ItemRecommendationMatrixRow
    struct ItemRecommendationMatrixRow;
#endif
    struct YORDLE_EXPORT ItemRecommendationMatrix : public bin_class {
        explicit ItemRecommendationMatrix(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 779837744u;
        }

        std::array<std::shared_ptr<yordle::data::meta::ItemRecommendationMatrixRow>, 6> mrows { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };
    };
}
#define YORDLE_META_DEF_ItemRecommendationMatrix
#endif