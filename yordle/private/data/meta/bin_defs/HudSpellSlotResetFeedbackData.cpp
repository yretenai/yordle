/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HudSpellSlotResetFeedbackData.hpp>

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

yordle::data::meta::HudSpellSlotResetFeedbackData::HudSpellSlotResetFeedbackData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_spellResetFlashFadeDuration = prop->cast_prop<yordle::data::prop::float32_prop>(505827072u);
    if(ptr_spellResetFlashFadeDuration != nullptr) {
        spellResetFlashFadeDuration = ptr_spellResetFlashFadeDuration->value;
    }

    auto ptr_spellResetFlashScaleDownDuration = prop->cast_prop<yordle::data::prop::float32_prop>(2088148704u);
    if(ptr_spellResetFlashScaleDownDuration != nullptr) {
        spellResetFlashScaleDownDuration = ptr_spellResetFlashScaleDownDuration->value;
    }

    auto ptr_spellResetScaleMultiplier = prop->cast_prop<yordle::data::prop::float32_prop>(2435287521u);
    if(ptr_spellResetScaleMultiplier != nullptr) {
        spellResetScaleMultiplier = ptr_spellResetScaleMultiplier->value;
    }
}
