/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AtlasDataBase.hpp>

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

yordle::data::meta::AtlasDataBase::AtlasDataBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTextureName = prop->cast_prop<yordle::data::prop::string_prop>(4185004664u);
    if(ptr_mTextureName != nullptr) {
        mTextureName = ptr_mTextureName->value;
    }

    auto ptr_mTextureSourceResolutionWidth = prop->cast_prop<yordle::data::prop::uint32_prop>(2880937936u);
    if(ptr_mTextureSourceResolutionWidth != nullptr) {
        mTextureSourceResolutionWidth = ptr_mTextureSourceResolutionWidth->value;
    }

    auto ptr_mTextureSourceResolutionHeight = prop->cast_prop<yordle::data::prop::uint32_prop>(2677474759u);
    if(ptr_mTextureSourceResolutionHeight != nullptr) {
        mTextureSourceResolutionHeight = ptr_mTextureSourceResolutionHeight->value;
    }
}
