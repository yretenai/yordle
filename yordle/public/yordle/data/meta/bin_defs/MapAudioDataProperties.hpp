/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapAudioDataProperties
#pragma once

#include <memory>
#include <vector>
#include <string>

#include <yordle/data/meta/bin_defs/MapAudioDataProperties.hpp>
#include <yordle/data/meta/bin_defs/BankUnit.hpp>
#include <yordle/data/meta/bin_defs/FeatureAudioDataProperties.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MapAudioDataProperties
    struct MapAudioDataProperties;
#endif

#ifndef YORDLE_META_DEF_BankUnit
    struct BankUnit;
#endif

#ifndef YORDLE_META_DEF_FeatureAudioDataProperties
    struct FeatureAudioDataProperties;
#endif
    struct YORDLE_EXPORT MapAudioDataProperties : public bin_class {
        explicit MapAudioDataProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3010308524u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::MapAudioDataProperties> BaseData { 3010308524 };
        std::vector<std::shared_ptr<yordle::data::meta::BankUnit>> bankUnits {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::FeatureAudioDataProperties>> features {};
        std::string x561de536 {};
        std::string x1cf84925 {};
    };
}
#define YORDLE_META_DEF_MapAudioDataProperties
#endif
