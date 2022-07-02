/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ColorGraphMaterialDriver.hpp>

#include <yordle/data/meta/bin_defs/xb33b2406.hpp>
#include <yordle/data/meta/bin_defs/VfxAnimatedColorVariableData.hpp>
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

yordle::data::meta::ColorGraphMaterialDriver::ColorGraphMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x995ca734(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_driver = prop->cast_prop<yordle::data::prop::structure_prop>(3847494111u);
    if(ptr_driver != nullptr) {
        driver = yordle::data::meta::deserialize<yordle::data::meta::xb33b2406>(ptr_driver, 3006997510u);
    }

    auto ptr_colors = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4176775601u);
    if(ptr_colors != nullptr) {
        colors = yordle::data::meta::deserialize<yordle::data::meta::VfxAnimatedColorVariableData>(ptr_colors, 1128908277u);
    }
}
