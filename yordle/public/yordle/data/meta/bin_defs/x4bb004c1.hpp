/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4bb004c1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculation
    struct IGameCalculation;
#endif
    struct YORDLE_EXPORT x4bb004c1 : public bin_class {
        explicit x4bb004c1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1269826753u;
        }

        bool x16c4336b = false;
        bool x503a1944 = false;
        std::shared_ptr<yordle::data::meta::IGameCalculation> xab325b24 {};
    };
}
#define YORDLE_META_DEF_x4bb004c1
#endif
