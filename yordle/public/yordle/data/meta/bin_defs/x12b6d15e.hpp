/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x12b6d15e
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x7041ed03.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7041ed03
    struct x7041ed03;
#endif
    struct YORDLE_EXPORT x12b6d15e : public bin_class {
        explicit x12b6d15e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 313971038u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::x7041ed03> x82b131b9 { 1883368707 };
    };
}
#define YORDLE_META_DEF_x12b6d15e
#endif
