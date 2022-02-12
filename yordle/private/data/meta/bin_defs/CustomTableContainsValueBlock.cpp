/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CustomTableContainsValueBlock.hpp>

#include <yordle/data/meta/bin_defs/CustomTableGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
#include <yordle/data/meta/bin_defs/ScriptTableSet.hpp>
#include <yordle/data/meta/bin_defs/BoolTableSet.hpp>
#include <yordle/data/meta/bin_defs/IScriptBlock.hpp>
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

yordle::data::meta::CustomTableContainsValueBlock::CustomTableContainsValueBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IScriptBlock(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_CustomTable = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4220587202u);
    if(ptr_CustomTable != nullptr) {
        CustomTable = yordle::data::meta::deserialize<yordle::data::meta::CustomTableGet>(ptr_CustomTable, 2681684398u);
    }

    auto ptr_value = prop->cast_prop<yordle::data::prop::structure_prop>(1113510858u);
    if(ptr_value != nullptr) {
        value = yordle::data::meta::deserialize<yordle::data::meta::IScriptValueGet>(ptr_value, 4142338480u);
    }

    auto ptr_OutKey = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2482342886u);
    if(ptr_OutKey != nullptr) {
        OutKey = yordle::data::meta::deserialize<yordle::data::meta::ScriptTableSet>(ptr_OutKey, 4139131590u);
    }

    auto ptr_OutWasFound = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1766855372u);
    if(ptr_OutWasFound != nullptr) {
        OutWasFound = yordle::data::meta::deserialize<yordle::data::meta::BoolTableSet>(ptr_OutWasFound, 2728914349u);
    }
}
