/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LoadScreenTipConfiguration.hpp>

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

yordle::data::meta::LoadScreenTipConfiguration::LoadScreenTipConfiguration(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mShowInCustomGames = prop->cast_prop<yordle::data::prop::bool_prop>(870385408u);
    if(ptr_mShowInCustomGames != nullptr) {
        mShowInCustomGames = ptr_mShowInCustomGames->value;
    }

    auto ptr_mShowPBITipsOnLoadingScreen = prop->cast_prop<yordle::data::prop::bool_prop>(1073556611u);
    if(ptr_mShowPBITipsOnLoadingScreen != nullptr) {
        mShowPBITipsOnLoadingScreen = ptr_mShowPBITipsOnLoadingScreen->value;
    }

    auto ptr_mPBITipDurationOnLoadingScreen = prop->cast_prop<yordle::data::prop::float32_prop>(3541289925u);
    if(ptr_mPBITipDurationOnLoadingScreen != nullptr) {
        mPBITipDurationOnLoadingScreen = ptr_mPBITipDurationOnLoadingScreen->value;
    }

    auto ptr_mDurationInGame = prop->cast_prop<yordle::data::prop::float32_prop>(2181567501u);
    if(ptr_mDurationInGame != nullptr) {
        mDurationInGame = ptr_mDurationInGame->value;
    }
}
