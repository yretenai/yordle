/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xccb4aa8a
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/xa0ce6603.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xa0ce6603
    struct xa0ce6603;
#endif
    struct YORDLE_EXPORT xccb4aa8a : public bin_class {
        explicit xccb4aa8a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3434392202u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::xa0ce6603>> x2d527e72 {};
        std::shared_ptr<yordle::data::meta::xa0ce6603> x74903466 {};
    };
}
#define YORDLE_META_DEF_xccb4aa8a
#endif
