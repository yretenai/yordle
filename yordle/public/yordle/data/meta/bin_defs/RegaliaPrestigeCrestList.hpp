/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_RegaliaPrestigeCrestList
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/RegaliaData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_RegaliaData
    struct RegaliaData;
#endif
    struct YORDLE_EXPORT RegaliaPrestigeCrestList : public bin_class {
        explicit RegaliaPrestigeCrestList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3350243090u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::RegaliaData>> PrestigeCrests {};
    };
}
#define YORDLE_META_DEF_RegaliaPrestigeCrestList
#endif
