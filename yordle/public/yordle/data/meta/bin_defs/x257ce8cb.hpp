/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x257ce8cb
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/x7a2da7e3.hpp>
#include <yordle/data/meta/bin_defs/xf0f3a045.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7a2da7e3
    struct x7a2da7e3;
#endif

#ifndef YORDLE_META_DEF_xf0f3a045
    struct xf0f3a045;
#endif
    struct YORDLE_EXPORT x257ce8cb : public bin_class {
        explicit x257ce8cb(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 628943051u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::x7a2da7e3>> xe7cc2c05 {};
        std::vector<std::shared_ptr<yordle::data::meta::xf0f3a045>> x56a33fe1 {};
    };
}
#define YORDLE_META_DEF_x257ce8cb
#endif
