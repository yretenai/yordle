/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x345c1c77
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IconElementData.hpp>
#include <yordle/data/meta/bin_defs/x89fa8d1c.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IconElementData
    struct IconElementData;
#endif
    struct YORDLE_EXPORT x345c1c77 : public x89fa8d1c {
        explicit x345c1c77(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 878451831u || x89fa8d1c::is_type(type);
        }

        yordle::data::meta::bin_ref<yordle::data::meta::IconElementData> x76ef64de { 1005588128 };
    };
}
#define YORDLE_META_DEF_x345c1c77
#endif
