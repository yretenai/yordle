/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x8e14e9d9
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/xe04f7948.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xe04f7948
    struct xe04f7948;
#endif
    struct YORDLE_EXPORT x8e14e9d9 : public ClipBaseData {
        explicit x8e14e9d9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2383735257u || ClipBaseData::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x8e5e6618 = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::xe04f7948>> x21328a43 {};
    };
}
#define YORDLE_META_DEF_x8e14e9d9
#endif