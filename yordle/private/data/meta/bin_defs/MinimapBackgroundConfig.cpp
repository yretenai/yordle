/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MinimapBackgroundConfig.hpp>

#include <yordle/data/meta/bin_defs/MinimapBackground.hpp>
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

yordle::data::meta::MinimapBackgroundConfig::MinimapBackgroundConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDefaultTextureName = prop->cast_prop<yordle::data::prop::string_prop>(4268156415u);
    if(ptr_mDefaultTextureName != nullptr) {
        mDefaultTextureName = ptr_mDefaultTextureName->value;
    }

    auto ptr_mCustomMinimapBackgrounds = prop->cast_prop<yordle::data::prop::map_prop>(1864435707u);
    if(ptr_mCustomMinimapBackgrounds != nullptr) {
        for(const auto &set_mCustomMinimapBackgrounds_pair : ptr_mCustomMinimapBackgrounds->value) {
            auto ptr_mCustomMinimapBackgrounds_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mCustomMinimapBackgrounds_pair.first);
            auto ptr_mCustomMinimapBackgrounds_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mCustomMinimapBackgrounds_pair.second);
            if(ptr_mCustomMinimapBackgrounds_key != nullptr && ptr_mCustomMinimapBackgrounds_value != nullptr) {
                mCustomMinimapBackgrounds.emplace(ptr_mCustomMinimapBackgrounds_key->value, yordle::data::meta::deserialize<yordle::data::meta::MinimapBackground>(ptr_mCustomMinimapBackgrounds_value, 2712490432u));
            }
        }
    }

    auto ptr_x7b213e8e = prop->cast_prop<yordle::data::prop::bool_prop>(2065776270u);
    if(ptr_x7b213e8e != nullptr) {
        x7b213e8e = ptr_x7b213e8e->value;
    }
}
