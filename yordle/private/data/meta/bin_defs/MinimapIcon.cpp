/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MinimapIcon.hpp>

#include <yordle/data/meta/bin_defs/MinimapIconTextureData.hpp>
#include <yordle/data/meta/bin_defs/MinimapIconColorData.hpp>
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

yordle::data::meta::MinimapIcon::MinimapIcon(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mRelativeTeams = prop->cast_prop<yordle::data::prop::bool_prop>(487980894u);
    if(ptr_mRelativeTeams != nullptr) {
        mRelativeTeams = ptr_mRelativeTeams->value;
    }

    auto ptr_mSize = prop->cast_prop<yordle::data::prop::point_prop>(1663564297u);
    if(ptr_mSize != nullptr) {
        mSize = ptr_mSize->value;
    }

    auto ptr_mMinScale = prop->cast_prop<yordle::data::prop::float32_prop>(3647017262u);
    if(ptr_mMinScale != nullptr) {
        mMinScale = ptr_mMinScale->value;
    }

    auto ptr_mMaxScale = prop->cast_prop<yordle::data::prop::float32_prop>(4248423316u);
    if(ptr_mMaxScale != nullptr) {
        mMaxScale = ptr_mMaxScale->value;
    }

    auto ptr_mBaseTexture = prop->cast_prop<yordle::data::prop::inline_structure_prop>(301885260u);
    if(ptr_mBaseTexture != nullptr) {
        mBaseTexture = yordle::data::meta::deserialize<yordle::data::meta::MinimapIconTextureData>(ptr_mBaseTexture, 3732824828u);
    }

    auto ptr_mTeamTextures = prop->cast_prop<yordle::data::prop::map_prop>(1068735961u);
    if(ptr_mTeamTextures != nullptr) {
        for(const auto &set_mTeamTextures_pair : ptr_mTeamTextures->value) {
            auto ptr_mTeamTextures_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_mTeamTextures_pair.first);
            auto ptr_mTeamTextures_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mTeamTextures_pair.second);
            if(ptr_mTeamTextures_key != nullptr && ptr_mTeamTextures_value != nullptr) {
                mTeamTextures.emplace(ptr_mTeamTextures_key->value, yordle::data::meta::deserialize<yordle::data::meta::MinimapIconTextureData>(ptr_mTeamTextures_value, 3732824828u));
            }
        }
    }

    auto ptr_mBaseColor = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3070941424u);
    if(ptr_mBaseColor != nullptr) {
        mBaseColor = yordle::data::meta::deserialize<yordle::data::meta::MinimapIconColorData>(ptr_mBaseColor, 59888480u);
    }

    auto ptr_mTeamColors = prop->cast_prop<yordle::data::prop::map_prop>(2670666677u);
    if(ptr_mTeamColors != nullptr) {
        for(const auto &set_mTeamColors_pair : ptr_mTeamColors->value) {
            auto ptr_mTeamColors_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_mTeamColors_pair.first);
            auto ptr_mTeamColors_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mTeamColors_pair.second);
            if(ptr_mTeamColors_key != nullptr && ptr_mTeamColors_value != nullptr) {
                mTeamColors.emplace(ptr_mTeamColors_key->value, yordle::data::meta::deserialize<yordle::data::meta::MinimapIconColorData>(ptr_mTeamColors_value, 59888480u));
            }
        }
    }
}
