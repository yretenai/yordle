/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa5ed08ef
#pragma once

#include <memory>
#include <map>

#include <yordle/data/meta/bin_defs/xd946a9af.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xd946a9af
    struct xd946a9af;
#endif
    struct YORDLE_EXPORT xa5ed08ef : public bin_class {
        explicit xa5ed08ef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2783774959u;
        }

        std::shared_ptr<yordle::data::meta::xd946a9af> x99c048ce {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::xd946a9af>> x73a7e91 {};
    };
}
#define YORDLE_META_DEF_xa5ed08ef
#endif