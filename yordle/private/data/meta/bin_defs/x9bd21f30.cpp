/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x9bd21f30.hpp>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
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

yordle::data::meta::x9bd21f30::x9bd21f30(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IDynamicMaterialBoolDriver(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mKeyName = prop->cast_prop<yordle::data::prop::string_prop>(808890788u);
    if(ptr_mKeyName != nullptr) {
        mKeyName = ptr_mKeyName->value;
    }
}
