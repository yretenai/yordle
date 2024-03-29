/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SurrenderData
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/SurrenderTypeData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SurrenderTypeData
    struct SurrenderTypeData;
#endif
    struct YORDLE_EXPORT SurrenderData : public bin_class {
        explicit SurrenderData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2687760845u;
        }

        float x43f7599b = 5.0f;
        float xe98993c = 180.0f;
        float xcc805103 = 180.0f;
        float x3afeacf3 = 0.5f;
        std::map<uint8_t, std::shared_ptr<yordle::data::meta::SurrenderTypeData>> mTypeData {};
    };
}
#define YORDLE_META_DEF_SurrenderData
#endif
