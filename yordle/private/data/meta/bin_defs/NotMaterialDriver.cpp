/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/NotMaterialDriver.hpp>

#include <yordle/data/meta/bin_defs/x7a851cd8.hpp>
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

yordle::data::meta::NotMaterialDriver::NotMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x7a851cd8(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDriver = prop->cast_prop<yordle::data::prop::structure_prop>(2231653222u);
    if(ptr_mDriver != nullptr) {
        mDriver = yordle::data::meta::deserialize<yordle::data::meta::x7a851cd8>(ptr_mDriver, 2055544024u);
    }
}
