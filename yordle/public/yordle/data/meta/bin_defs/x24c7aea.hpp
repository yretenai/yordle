/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x24c7aea
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/x6a6e3b03.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x6a6e3b03
    struct x6a6e3b03;
#endif
    struct YORDLE_EXPORT x24c7aea : public bin_class {
        explicit x24c7aea(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 38566634u;
        }

        std::string Mutator {};
        std::vector<std::shared_ptr<yordle::data::meta::x6a6e3b03>> x23ff66c7 {};
    };
}
#define YORDLE_META_DEF_x24c7aea
#endif
