/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x32be2466
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xead1b379.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xead1b379
    struct xead1b379;
#endif
    struct YORDLE_EXPORT x32be2466 : public bin_class {
        explicit x32be2466(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 851321958u;
        }

        std::map<uint32_t, yordle::data::meta::bin_ref<yordle::data::meta::xead1b379>> x1a28d722 {};
    };
}
#define YORDLE_META_DEF_x32be2466
#endif
