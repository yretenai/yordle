/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftMapCharacterRecordData
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/xa4281f51.hpp>
#include <yordle/data/meta/bin_defs/x1ad8a401.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xa4281f51
    struct xa4281f51;
#endif

#ifndef YORDLE_META_DEF_x1ad8a401
    struct x1ad8a401;
#endif
    struct YORDLE_EXPORT TftMapCharacterRecordData : public bin_class {
        explicit TftMapCharacterRecordData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 229654189u;
        }

        uint8_t tier = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::xa4281f51>> xed01b2a5 {};
        std::vector<std::shared_ptr<yordle::data::meta::x1ad8a401>> x687f379 {};
    };
}
#define YORDLE_META_DEF_TftMapCharacterRecordData
#endif
