/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTStageData
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/TFTRoundData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TFTRoundData
    struct TFTRoundData;
#endif
    struct YORDLE_EXPORT TFTStageData : public bin_class {
        explicit TFTStageData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4147633913u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TFTRoundData>> mRounds {};
    };
}
#define YORDLE_META_DEF_TFTStageData
#endif
