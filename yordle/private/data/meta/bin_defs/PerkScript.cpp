/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/PerkScript.hpp>

#include <yordle/data/meta/bin_defs/LolSpellScript.hpp>
#include <yordle/data/meta/bin_defs/PerkScriptData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::PerkScript::PerkScript(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSpellScriptName = prop->cast_prop<yordle::data::prop::string_prop>(739491186u);
    if(ptr_mSpellScriptName != nullptr) {
        mSpellScriptName = ptr_mSpellScriptName->value;
    }

    auto ptr_mSpellScript = prop->cast_prop<yordle::data::prop::structure_prop>(2184003033u);
    if(ptr_mSpellScript != nullptr) {
        mSpellScript = yordle::data::meta::deserialize<yordle::data::meta::LolSpellScript>(ptr_mSpellScript, 1775952673u);
    }

    auto ptr_mSpellScriptData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2770069641u);
    if(ptr_mSpellScriptData != nullptr) {
        mSpellScriptData = yordle::data::meta::deserialize<yordle::data::meta::PerkScriptData>(ptr_mSpellScriptData, 2766644386u);
    }
}
