/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTTraitContributionData.hpp>

#include <yordle/data/meta/bin_defs/TftTraitData.hpp>
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

yordle::data::meta::TFTTraitContributionData::TFTTraitContributionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TraitData = prop->cast_prop<yordle::data::prop::reference_prop>(87695155u);
    if(ptr_TraitData != nullptr) {
        TraitData = yordle::data::meta::bin_ref<yordle::data::meta::TftTraitData>(1871118919u, ptr_TraitData->value);
    }

    auto ptr_Amount = prop->cast_prop<yordle::data::prop::int32_prop>(4152741449u);
    if(ptr_Amount != nullptr) {
        Amount = ptr_Amount->value;
    }

    auto ptr_xa91037f5 = prop->cast_prop<yordle::data::prop::bool_prop>(2836412405u);
    if(ptr_xa91037f5 != nullptr) {
        xa91037f5 = ptr_xa91037f5->value;
    }

    auto ptr_xbaeca565 = prop->cast_prop<yordle::data::prop::bool_prop>(3136071013u);
    if(ptr_xbaeca565 != nullptr) {
        xbaeca565 = ptr_xbaeca565->value;
    }
}
