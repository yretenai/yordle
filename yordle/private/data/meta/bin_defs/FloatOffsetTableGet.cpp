/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FloatOffsetTableGet.hpp>

#include <yordle/data/meta/bin_defs/ScriptTable.hpp>
#include <yordle/data/meta/bin_defs/IFloatGet.hpp>
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

yordle::data::meta::FloatOffsetTableGet::FloatOffsetTableGet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IFloatGet(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Table = prop->cast_prop<yordle::data::prop::structure_prop>(1251777503u);
    if(ptr_Table != nullptr) {
        Table = yordle::data::meta::deserialize<yordle::data::meta::ScriptTable>(ptr_Table, 619916734u);
    }

    auto ptr_Var = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2317739966u);
    if(ptr_Var != nullptr) {
        Var = ptr_Var->value;
    }

    auto ptr_offset = prop->cast_prop<yordle::data::prop::float32_prop>(348705738u);
    if(ptr_offset != nullptr) {
        offset = ptr_offset->value;
    }
}
