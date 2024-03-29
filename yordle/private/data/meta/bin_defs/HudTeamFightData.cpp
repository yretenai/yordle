/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HudTeamFightData.hpp>

#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
#include <yordle/data/meta/bin_defs/HudTeamFightOffScreenDifferentiationData.hpp>
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

yordle::data::meta::HudTeamFightData::HudTeamFightData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSceneTransition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1728738979u);
    if(ptr_mSceneTransition != nullptr) {
        mSceneTransition = yordle::data::meta::deserialize<yordle::data::meta::HudMenuTransitionData>(ptr_mSceneTransition, 3273533950u);
    }

    auto ptr_mStyleFlags = prop->cast_prop<yordle::data::prop::uint32_prop>(529870772u);
    if(ptr_mStyleFlags != nullptr) {
        mStyleFlags = ptr_mStyleFlags->value;
    }

    auto ptr_xa7620c86 = prop->cast_prop<yordle::data::prop::structure_prop>(2808220806u);
    if(ptr_xa7620c86 != nullptr) {
        xa7620c86 = yordle::data::meta::deserialize<yordle::data::meta::HudTeamFightOffScreenDifferentiationData>(ptr_xa7620c86, 4224366477u);
    }
}
