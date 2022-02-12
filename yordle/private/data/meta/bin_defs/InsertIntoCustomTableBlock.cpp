/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/InsertIntoCustomTableBlock.hpp>

#include <yordle/data/meta/bin_defs/CustomTableGet.hpp>
#include <yordle/data/meta/bin_defs/IIntGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
#include <yordle/data/meta/bin_defs/IntTableSet.hpp>
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

yordle::data::meta::InsertIntoCustomTableBlock::InsertIntoCustomTableBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IScriptBlock(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_CustomTable = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4220587202u);
    if(ptr_CustomTable != nullptr) {
        CustomTable = yordle::data::meta::deserialize<yordle::data::meta::CustomTableGet>(ptr_CustomTable, 2681684398u);
    }

    auto ptr_Index = prop->cast_prop<yordle::data::prop::structure_prop>(151693739u);
    if(ptr_Index != nullptr) {
        Index = yordle::data::meta::deserialize<yordle::data::meta::IIntGet>(ptr_Index, 3256124575u);
    }

    auto ptr_value = prop->cast_prop<yordle::data::prop::structure_prop>(1113510858u);
    if(ptr_value != nullptr) {
        value = yordle::data::meta::deserialize<yordle::data::meta::IScriptValueGet>(ptr_value, 4142338480u);
    }

    auto ptr_OutIndex = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1322316709u);
    if(ptr_OutIndex != nullptr) {
        OutIndex = yordle::data::meta::deserialize<yordle::data::meta::IntTableSet>(ptr_OutIndex, 663538050u);
    }
}
