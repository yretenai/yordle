/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe87aa7bf
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x75259ad3
    struct x75259ad3;
#endif
    struct YORDLE_EXPORT xe87aa7bf : public bin_class {
        explicit xe87aa7bf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3900352447u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::x75259ad3> x671c34c8 { 1965398739 };
    };
}
#define YORDLE_META_DEF_xe87aa7bf
#endif
