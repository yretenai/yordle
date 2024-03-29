/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FxSequence
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_defs/xb7471737.hpp>
#include <yordle/data/meta/bin_defs/x78ee723e.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IFxAction
    struct IFxAction;
#endif

#ifndef YORDLE_META_DEF_xb7471737
    struct xb7471737;
#endif

#ifndef YORDLE_META_DEF_x78ee723e
    struct x78ee723e;
#endif
    struct YORDLE_EXPORT FxSequence : public bin_class {
        explicit FxSequence(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 729255394u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::IFxAction>> Actions {};
        yordle::data::meta::bin_ref<yordle::data::meta::xb7471737> category { 3074889527 };
        std::vector<std::shared_ptr<yordle::data::meta::x78ee723e>> xe838bf01 {};
    };
}
#define YORDLE_META_DEF_FxSequence
#endif
