/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FxActionMoveTo.hpp>

#include <yordle/data/meta/bin_defs/FxTransform.hpp>
#include <yordle/data/meta/bin_defs/FxActionMoveBase.hpp>
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

yordle::data::meta::FxActionMoveTo::FxActionMoveTo(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::FxActionMoveBase(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Destination = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3000919231u);
    if(ptr_Destination != nullptr) {
        Destination = yordle::data::meta::deserialize<yordle::data::meta::FxTransform>(ptr_Destination, 754442341u);
    }
}
