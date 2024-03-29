/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LolSpellScript
#pragma once

#include <memory>
#include <map>
#include <string>

#include <yordle/data/meta/bin_defs/ScriptGlobalProperties.hpp>
#include <yordle/data/meta/bin_defs/ScriptSequence.hpp>
#include <yordle/data/meta/bin_defs/LoLSpellPreloadData.hpp>
#include <yordle/data/meta/bin_defs/RScript.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptGlobalProperties
    struct ScriptGlobalProperties;
#endif

#ifndef YORDLE_META_DEF_ScriptSequence
    struct ScriptSequence;
#endif

#ifndef YORDLE_META_DEF_LoLSpellPreloadData
    struct LoLSpellPreloadData;
#endif
    struct YORDLE_EXPORT LolSpellScript : public RScript {
        explicit LolSpellScript(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1775952673u || RScript::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::ScriptGlobalProperties> globalProperties {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::ScriptSequence>> sequences {};
        std::map<std::string, std::shared_ptr<yordle::data::meta::ScriptSequence>> CustomSequences {};
        std::shared_ptr<yordle::data::meta::LoLSpellPreloadData> PreloadData {};
    };
}
#define YORDLE_META_DEF_LolSpellScript
#endif
