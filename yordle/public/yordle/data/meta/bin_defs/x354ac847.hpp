/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x354ac847
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xfd91cc12.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x354ac847 : public xfd91cc12 {
        explicit x354ac847(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 894093383u || xfd91cc12::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x354ac847
#endif
