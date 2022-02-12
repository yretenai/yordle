/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxProbabilityTableDataGrande
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VfxProbabilityTableDataGrande : public ViewController {
        explicit VfxProbabilityTableDataGrande(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2261862267u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash Backdrop = 0u;
        float authoredWidth = 480.0;
        float SourceResolutionWidth = 1920.0;
    };
}
#define YORDLE_META_DEF_VfxProbabilityTableDataGrande
#endif