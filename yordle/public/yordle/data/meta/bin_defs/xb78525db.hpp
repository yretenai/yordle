/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb78525db
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/x222410ce.hpp>
#include <yordle/data/meta/bin_defs/x1b1243af.hpp>
#include <yordle/data/meta/bin_defs/x86f7132e.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x222410ce
    struct x222410ce;
#endif

#ifndef YORDLE_META_DEF_x1b1243af
    struct x1b1243af;
#endif

#ifndef YORDLE_META_DEF_x86f7132e
    struct x86f7132e;
#endif
    struct YORDLE_EXPORT xb78525db : public bin_class {
        explicit xb78525db(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3078956507u;
        }

        std::array<std::shared_ptr<yordle::data::meta::x222410ce>, 4> xa48e3ad9 { nullptr, nullptr, nullptr, nullptr };
        std::shared_ptr<yordle::data::meta::x1b1243af> x6a4675e9 {};
        std::shared_ptr<yordle::data::meta::x86f7132e> x6c2c1d94 {};
        std::array<std::shared_ptr<yordle::data::meta::x222410ce>, 2> xe8dcc7f6 { nullptr, nullptr };
        std::shared_ptr<yordle::data::meta::x222410ce> Passive {};
        yordle::data::meta::bin_fnv_hash x1cf64a20 = 0u;
    };
}
#define YORDLE_META_DEF_xb78525db
#endif