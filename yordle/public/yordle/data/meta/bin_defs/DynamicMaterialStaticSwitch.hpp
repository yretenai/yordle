/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DynamicMaterialStaticSwitch
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/x7a851cd8.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7a851cd8
    struct x7a851cd8;
#endif
    struct YORDLE_EXPORT DynamicMaterialStaticSwitch : public bin_class {
        explicit DynamicMaterialStaticSwitch(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4013554309u;
        }

        std::string name {};
        std::shared_ptr<yordle::data::meta::x7a851cd8> driver {};
        bool enabled = true;
    };
}
#define YORDLE_META_DEF_DynamicMaterialStaticSwitch
#endif
