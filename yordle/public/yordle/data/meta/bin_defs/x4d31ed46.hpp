/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4d31ed46
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IdentityInstance.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IdentityInstance
    struct IdentityInstance;
#endif
    struct YORDLE_EXPORT x4d31ed46 : public bin_class {
        explicit x4d31ed46(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1295117638u;
        }

        std::shared_ptr<yordle::data::meta::IdentityInstance> mIdentityInstance {};
    };
}
#define YORDLE_META_DEF_x4d31ed46
#endif
