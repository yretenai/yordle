/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DefaultSplashedPerkStyle.hpp>

#include <yordle/data/meta/bin_defs/PerkStyle.hpp>
#include <yordle/data/meta/bin_defs/Perk.hpp>
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

yordle::data::meta::DefaultSplashedPerkStyle::DefaultSplashedPerkStyle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStyle = prop->cast_prop<yordle::data::prop::reference_prop>(4070665549u);
    if(ptr_mStyle != nullptr) {
        mStyle = yordle::data::meta::bin_ref<yordle::data::meta::PerkStyle>(240569694u, ptr_mStyle->value);
    }

    auto ptr_mPerk1 = prop->cast_prop<yordle::data::prop::reference_prop>(2210297031u);
    if(ptr_mPerk1 != nullptr) {
        mPerk1 = yordle::data::meta::bin_ref<yordle::data::meta::Perk>(3069197533u, ptr_mPerk1->value);
    }

    auto ptr_mPerk2 = prop->cast_prop<yordle::data::prop::reference_prop>(2227074650u);
    if(ptr_mPerk2 != nullptr) {
        mPerk2 = yordle::data::meta::bin_ref<yordle::data::meta::Perk>(3069197533u, ptr_mPerk2->value);
    }
}
