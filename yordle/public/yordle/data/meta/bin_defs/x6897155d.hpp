/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6897155d
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xc9dd46d2.hpp>
#include <yordle/data/meta/bin_defs/x48eb8d47.hpp>
#include <yordle/data/meta/bin_defs/VFXSpawnConditionData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xc9dd46d2
    struct xc9dd46d2;
#endif

#ifndef YORDLE_META_DEF_x48eb8d47
    struct x48eb8d47;
#endif
    struct YORDLE_EXPORT x6897155d : public VFXSpawnConditionData {
        explicit x6897155d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1754731869u || VFXSpawnConditionData::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::xc9dd46d2> x889e41d1 {};
        std::shared_ptr<yordle::data::meta::x48eb8d47> xea02af5c {};
    };
}
#define YORDLE_META_DEF_x6897155d
#endif
