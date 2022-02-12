/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_QueueDisplayData
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT QueueDisplayData : public bin_class {
        explicit QueueDisplayData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1532902214u;
        }

        int64_t queueId = 0;
        yordle::data::meta::bin_fnv_hash xce96bffc = 0u;
        yordle::data::meta::bin_fnv_hash xf221c7d2 = 0u;
        yordle::data::meta::bin_fnv_hash x21eaf8b = 0u;
        yordle::data::meta::bin_fnv_hash IllustrationIconElement = 0u;
        std::string DisplayNameTraKey {};
    };
}
#define YORDLE_META_DEF_QueueDisplayData
#endif
