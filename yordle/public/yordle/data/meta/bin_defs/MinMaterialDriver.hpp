/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MinMaterialDriver
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/x995ca734.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x995ca734
    struct x995ca734;
#endif
    struct YORDLE_EXPORT MinMaterialDriver : public x995ca734 {
        explicit MinMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 906481424u || x995ca734::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::x995ca734>> mDrivers {};
    };
}
#define YORDLE_META_DEF_MinMaterialDriver
#endif
