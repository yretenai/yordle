/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_RegaliaRankedCrestEntry
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/RegaliaData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_RegaliaData
    struct RegaliaData;
#endif
    struct YORDLE_EXPORT RegaliaRankedCrestEntry : public bin_class {
        explicit RegaliaRankedCrestEntry(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3828118224u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> Base { 2286074286 };
        std::map<int32_t, yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData>> xfbb20410 {};
        std::map<int32_t, yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData>> xaf2e170a {};
    };
}
#define YORDLE_META_DEF_RegaliaRankedCrestEntry
#endif
