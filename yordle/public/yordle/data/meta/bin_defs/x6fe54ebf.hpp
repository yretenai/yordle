/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6fe54ebf
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/x9a2769a4.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6fe54ebf : public x9a2769a4 {
        explicit x6fe54ebf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1877298879u || x9a2769a4::is_type(type);
        }

        std::vector<float> values {};
    };
}
#define YORDLE_META_DEF_x6fe54ebf
#endif
