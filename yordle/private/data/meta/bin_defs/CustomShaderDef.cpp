/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CustomShaderDef.hpp>

#include <yordle/data/meta/bin_defs/IShaderDef.hpp>
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

yordle::data::meta::CustomShaderDef::CustomShaderDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IShaderDef(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_objectPath = prop->cast_prop<yordle::data::prop::string_prop>(490118185u);
    if(ptr_objectPath != nullptr) {
        objectPath = ptr_objectPath->value;
    }
}
