/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SetVarInTableBlock.hpp>

#include <yordle/data/meta/bin_defs/ScriptTableSet.hpp>
#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
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

yordle::data::meta::SetVarInTableBlock::SetVarInTableBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IScriptBlock(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Dest = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2583897173u);
    if(ptr_Dest != nullptr) {
        Dest = yordle::data::meta::deserialize<yordle::data::meta::ScriptTableSet>(ptr_Dest, 4139131590u);
    }

    auto ptr_value = prop->cast_prop<yordle::data::prop::structure_prop>(1113510858u);
    if(ptr_value != nullptr) {
        value = yordle::data::meta::deserialize<yordle::data::meta::IScriptValueGet>(ptr_value, 4142338480u);
    }
}
