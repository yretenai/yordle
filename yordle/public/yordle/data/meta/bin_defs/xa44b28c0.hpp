/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa44b28c0
#pragma once

#include <memory>
#include <map>
#include <array>

#include <yordle/data/meta/bin_defs/x2aa61eb4.hpp>
#include <yordle/data/meta/bin_defs/x94e53457.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x2aa61eb4
    struct x2aa61eb4;
#endif

#ifndef YORDLE_META_DEF_x94e53457
    struct x94e53457;
#endif
    struct YORDLE_EXPORT xa44b28c0 : public bin_class {
        explicit xa44b28c0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2756389056u;
        }

        yordle::data::meta::bin_fnv_hash xd563e1e9 = 0u;
        yordle::data::meta::bin_fnv_hash xfd894807 = 0u;
        yordle::data::meta::bin_fnv_hash x7ff19d0c = 0u;
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::x2aa61eb4>> Dragons {};
        std::array<std::shared_ptr<yordle::data::meta::x94e53457>, 2> x42331f2a { nullptr, nullptr };
    };
}
#define YORDLE_META_DEF_xa44b28c0
#endif
