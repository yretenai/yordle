/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6780c1c5
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/x231dd1a2.hpp>
#include <yordle/data/meta/bin_defs/TextElementData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x231dd1a2
    struct x231dd1a2;
#endif

#ifndef YORDLE_META_DEF_TextElementData
    struct TextElementData;
#endif
    struct YORDLE_EXPORT x6780c1c5 : public bin_class {
        explicit x6780c1c5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1736491461u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::x231dd1a2>> displayElements {};
        yordle::data::meta::bin_ref<yordle::data::meta::TextElementData> TextElement { 2622984950 };
    };
}
#define YORDLE_META_DEF_x6780c1c5
#endif
