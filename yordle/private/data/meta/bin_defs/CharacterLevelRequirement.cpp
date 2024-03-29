/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CharacterLevelRequirement.hpp>

#include <yordle/data/meta/bin_defs/ISpellRankUpRequirement.hpp>
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

yordle::data::meta::CharacterLevelRequirement::CharacterLevelRequirement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ISpellRankUpRequirement(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mLevel = prop->cast_prop<yordle::data::prop::uint32_prop>(2809549998u);
    if(ptr_mLevel != nullptr) {
        mLevel = ptr_mLevel->value;
    }
}
