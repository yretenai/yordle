/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x597c4a9d
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x5c086dbd.hpp>
#include <yordle/data/meta/bin_defs/xc6228969.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x5c086dbd
    struct x5c086dbd;
#endif

#ifndef YORDLE_META_DEF_xc6228969
    struct xc6228969;
#endif
    struct YORDLE_EXPORT x597c4a9d : public IFxAction {
        explicit x597c4a9d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1501317789u || IFxAction::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x5c086dbd> Target {};
        yordle::data::meta::bin_ref<yordle::data::meta::xc6228969> xfdcc4eca { 3324152169 };
        bool xe68ccb2e = true;
    };
}
#define YORDLE_META_DEF_x597c4a9d
#endif
