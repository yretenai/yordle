/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TableValueExistsScriptCondition.hpp>

#include <yordle/data/meta/bin_defs/ScriptTableGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptCondition.hpp>
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

yordle::data::meta::TableValueExistsScriptCondition::TableValueExistsScriptCondition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IScriptCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TableValue = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2274995220u);
    if(ptr_TableValue != nullptr) {
        TableValue = yordle::data::meta::deserialize<yordle::data::meta::ScriptTableGet>(ptr_TableValue, 574110442u);
    }
}
