/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GearSkinUpgrade.hpp>

#include <yordle/data/meta/bin_defs/GearData.hpp>
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

yordle::data::meta::GearSkinUpgrade::GearSkinUpgrade(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mGearData = prop->cast_prop<yordle::data::prop::structure_prop>(1671102483u);
    if(ptr_mGearData != nullptr) {
        mGearData = yordle::data::meta::deserialize<yordle::data::meta::GearData>(ptr_mGearData, 3023323566u);
    }

    auto ptr_x358d080b = prop->cast_prop<yordle::data::prop::string_prop>(898435083u);
    if(ptr_x358d080b != nullptr) {
        x358d080b = ptr_x358d080b->value;
    }
}