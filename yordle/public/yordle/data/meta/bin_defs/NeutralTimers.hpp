/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_NeutralTimers
#pragma once

#include <memory>
#include <string>
#include <map>

#include <yordle/data/meta/bin_defs/NeutralTimerData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_NeutralTimerData
    struct NeutralTimerData;
#endif
    struct YORDLE_EXPORT NeutralTimers : public bin_class {
        explicit NeutralTimers(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1283176254u;
        }

        std::string mSceneName {};
        std::string xee974cae {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::NeutralTimerData>> mTimers {};
    };
}
#define YORDLE_META_DEF_NeutralTimers
#endif