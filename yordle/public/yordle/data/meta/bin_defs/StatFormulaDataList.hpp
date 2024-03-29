/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_StatFormulaDataList
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/StatFormulaData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_StatFormulaData
    struct StatFormulaData;
#endif
    struct YORDLE_EXPORT StatFormulaDataList : public bin_class {
        explicit StatFormulaDataList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1250314967u;
        }

        std::map<uint8_t, std::shared_ptr<yordle::data::meta::StatFormulaData>> StatFormulas {};
    };
}
#define YORDLE_META_DEF_StatFormulaDataList
#endif
