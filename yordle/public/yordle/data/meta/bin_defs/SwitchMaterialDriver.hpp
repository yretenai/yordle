/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SwitchMaterialDriver
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/SwitchMaterialDriverElement.hpp>
#include <yordle/data/meta/bin_defs/x995ca734.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SwitchMaterialDriverElement
    struct SwitchMaterialDriverElement;
#endif

#ifndef YORDLE_META_DEF_x995ca734
    struct x995ca734;
#endif
    struct YORDLE_EXPORT SwitchMaterialDriver : public x995ca734 {
        explicit SwitchMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2878204994u || x995ca734::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::SwitchMaterialDriverElement>> mElements {};
        std::shared_ptr<yordle::data::meta::x995ca734> mDefaultValue {};
    };
}
#define YORDLE_META_DEF_SwitchMaterialDriver
#endif
