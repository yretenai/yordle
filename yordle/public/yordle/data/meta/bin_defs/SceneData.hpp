/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SceneData
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_defs/SceneData.hpp>
#include <yordle/data/meta/bin_defs/xd1951f45.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SceneData
    struct SceneData;
#endif

#ifndef YORDLE_META_DEF_xd1951f45
    struct xd1951f45;
#endif
    struct YORDLE_EXPORT SceneData : public bin_class {
        explicit SceneData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2867346523u;
        }

        std::string mName {};
        yordle::data::meta::bin_ref<yordle::data::meta::SceneData> mParentScene { 2867346523 };
        uint32_t mLayer = 0u;
        std::shared_ptr<yordle::data::meta::xd1951f45> SceneTransitionIn {};
        std::shared_ptr<yordle::data::meta::xd1951f45> SceneTransitionOut {};
        bool mEnabled = false;
        bool mHealthBar = false;
        bool x22413173 = false;
        bool xf80397ee = true;
    };
}
#define YORDLE_META_DEF_SceneData
#endif
