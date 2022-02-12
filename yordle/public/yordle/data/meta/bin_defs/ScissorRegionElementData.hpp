/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ScissorRegionElementData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/SceneData.hpp>
#include <yordle/data/meta/bin_defs/BaseElementData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SceneData
    struct SceneData;
#endif
    struct YORDLE_EXPORT ScissorRegionElementData : public BaseElementData {
        explicit ScissorRegionElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3070309571u || BaseElementData::is_type(type);
        }

        yordle::data::meta::bin_ref<yordle::data::meta::SceneData> xaccc80b5 { 2867346523 };
    };
}
#define YORDLE_META_DEF_ScissorRegionElementData
#endif
