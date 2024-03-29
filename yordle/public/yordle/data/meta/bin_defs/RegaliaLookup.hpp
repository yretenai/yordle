/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_RegaliaLookup
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/RegaliaData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_RegaliaData
    struct RegaliaData;
#endif
    struct YORDLE_EXPORT RegaliaLookup : public bin_class {
        explicit RegaliaLookup(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1780014848u;
        }

        std::string tier {};
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaCrest { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaCrown1 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaCrown2 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaCrown3 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaCrown4 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> RegaliaTrim { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaSplit1 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaSplit2 { 2286074286 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData> regaliaSplit3 { 2286074286 };
    };
}
#define YORDLE_META_DEF_RegaliaLookup
#endif
