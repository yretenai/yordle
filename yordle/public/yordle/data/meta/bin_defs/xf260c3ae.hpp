/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf260c3ae
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/TftDropRates.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TftDropRates
    struct TftDropRates;
#endif
    struct YORDLE_EXPORT xf260c3ae : public bin_class {
        explicit xf260c3ae(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4066427822u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::TftDropRates>> mDropRatesByLevel {};
    };
}
#define YORDLE_META_DEF_xf260c3ae
#endif
