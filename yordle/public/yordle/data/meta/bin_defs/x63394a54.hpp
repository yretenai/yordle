/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x63394a54
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x63394a54 : public bin_class {
        explicit x63394a54(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1664698964u;
        }

        std::vector<yordle::data::meta::bin_fnv_hash> defaultStateElements {};
        std::vector<yordle::data::meta::bin_fnv_hash> InactiveStateElements {};
        std::vector<yordle::data::meta::bin_fnv_hash> hoverStateElements {};
        std::vector<yordle::data::meta::bin_fnv_hash> xad0f8882 {};
        std::vector<yordle::data::meta::bin_fnv_hash> selectedStateElements {};
        std::vector<yordle::data::meta::bin_fnv_hash> SelectedHoverStateElements {};
        std::vector<yordle::data::meta::bin_fnv_hash> SelectedClickedStateElements {};
    };
}
#define YORDLE_META_DEF_x63394a54
#endif
