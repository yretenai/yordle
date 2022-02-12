/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TargetHasUnitTagFilter.hpp>

#include <yordle/data/meta/bin_defs/ObjectTags.hpp>
#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
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

yordle::data::meta::TargetHasUnitTagFilter::TargetHasUnitTagFilter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IStatStoneLogicDriver(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_UnitTags = prop->cast_prop<yordle::data::prop::inline_structure_prop>(340455258u);
    if(ptr_UnitTags != nullptr) {
        UnitTags = yordle::data::meta::deserialize<yordle::data::meta::ObjectTags>(ptr_UnitTags, 622921539u);
    }
}
