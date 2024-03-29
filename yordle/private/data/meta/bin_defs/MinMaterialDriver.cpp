/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MinMaterialDriver.hpp>

#include <yordle/data/meta/bin_defs/x995ca734.hpp>
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

yordle::data::meta::MinMaterialDriver::MinMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x995ca734(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDrivers = prop->cast_prop<yordle::data::prop::set_prop>(2060372495u);
    if(ptr_mDrivers != nullptr) {
        for(const auto &set_mDrivers_entry : ptr_mDrivers->value) {
            auto ptr_mDrivers_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mDrivers_entry);
            if(ptr_mDrivers_entry != nullptr) {
                mDrivers.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x995ca734>(ptr_mDrivers_entry, 2572986164u));
            }
        }
    }
}
