/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SkinFilterData
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT SkinFilterData : public bin_class {
        explicit SkinFilterData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3022275834u;
        }

        uint32_t FilterType = 0u;
        bool xc176d167 = true;
        std::vector<uint32_t> skinIds {};
    };
}
#define YORDLE_META_DEF_SkinFilterData
#endif