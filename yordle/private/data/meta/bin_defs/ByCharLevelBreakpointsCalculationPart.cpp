/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ByCharLevelBreakpointsCalculationPart.hpp>

#include <yordle/data/meta/bin_defs/Breakpoint.hpp>
#include <yordle/data/meta/bin_defs/IGameCalculationPartByCharLevel.hpp>
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

yordle::data::meta::ByCharLevelBreakpointsCalculationPart::ByCharLevelBreakpointsCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPartByCharLevel(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mLevel1Value = prop->cast_prop<yordle::data::prop::float32_prop>(2908943986u);
    if(ptr_mLevel1Value != nullptr) {
        mLevel1Value = ptr_mLevel1Value->value;
    }

    auto ptr_x2deb550 = prop->cast_prop<yordle::data::prop::float32_prop>(48149840u);
    if(ptr_x2deb550 != nullptr) {
        x2deb550 = ptr_x2deb550->value;
    }

    auto ptr_mBreakpoints = prop->cast_prop<yordle::data::prop::set_prop>(2069698868u);
    if(ptr_mBreakpoints != nullptr) {
        for(const auto &set_mBreakpoints_entry : ptr_mBreakpoints->value) {
            auto ptr_mBreakpoints_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mBreakpoints_entry);
            if(ptr_mBreakpoints_entry != nullptr) {
                mBreakpoints.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::Breakpoint>(ptr_mBreakpoints_entry, 2392053998u));
            }
        }
    }
}