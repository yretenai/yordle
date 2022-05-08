/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x8195235f
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/xfdad6e32.hpp>
#include <yordle/data/meta/bin_defs/x3228d244.hpp>
#include <yordle/data/meta/bin_defs/xb2be4d05.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ViewPaneDefinition
    struct ViewPaneDefinition;
#endif

#ifndef YORDLE_META_DEF_xfdad6e32
    struct xfdad6e32;
#endif

#ifndef YORDLE_META_DEF_x3228d244
    struct x3228d244;
#endif

#ifndef YORDLE_META_DEF_xb2be4d05
    struct xb2be4d05;
#endif
    struct YORDLE_EXPORT x8195235f : public bin_class {
        explicit x8195235f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2174034783u;
        }

        yordle::data::meta::bin_fnv_hash x8e32bc1e = 0u;
        yordle::data::meta::bin_fnv_hash xafdda85a = 0u;
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> MainViewPaneDefinition {};
        yordle::data::meta::bin_fnv_hash xd485aee6 = 0u;
        std::shared_ptr<yordle::data::meta::xfdad6e32> xfdad6e32 {};
        std::shared_ptr<yordle::data::meta::x3228d244> x3228d244 {};
        std::shared_ptr<yordle::data::meta::xb2be4d05> xb2be4d05 {};
        yordle::data::meta::bin_fnv_hash x4cca91ee = 0u;
        yordle::data::meta::bin_fnv_hash xa43dbb68 = 0u;
    };
}
#define YORDLE_META_DEF_x8195235f
#endif
