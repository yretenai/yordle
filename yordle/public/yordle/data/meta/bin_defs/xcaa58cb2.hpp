/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcaa58cb2
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x75e442a0.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcaa58cb2 : public x75e442a0 {
        explicit xcaa58cb2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3399847090u || x75e442a0::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xcaa58cb2
#endif
