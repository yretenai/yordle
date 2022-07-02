/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x50508565
#pragma once

#include <memory>
#include <map>

#include <yordle/data/meta/bin_defs/ScriptSequence.hpp>
#include <yordle/data/meta/bin_defs/RScript.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptSequence
    struct ScriptSequence;
#endif
    struct YORDLE_EXPORT x50508565 : public RScript {
        explicit x50508565(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1347454309u || RScript::is_type(type);
        }

        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::ScriptSequence>> sequences {};
    };
}
#define YORDLE_META_DEF_x50508565
#endif
