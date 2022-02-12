/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/EsportsBannerOptions.hpp>

#include <yordle/data/meta/bin_defs/IMaterialDef.hpp>
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

yordle::data::meta::EsportsBannerOptions::EsportsBannerOptions(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_subMeshName = prop->cast_prop<yordle::data::prop::string_prop>(820886375u);
    if(ptr_subMeshName != nullptr) {
        subMeshName = ptr_subMeshName->value;
    }

    auto ptr_defaultTexturePath = prop->cast_prop<yordle::data::prop::xx_hash_prop>(850621690u);
    if(ptr_defaultTexturePath != nullptr) {
        defaultTexturePath = ptr_defaultTexturePath->value;
    }

    auto ptr_IsSpectatorOnly = prop->cast_prop<yordle::data::prop::bool_prop>(878849852u);
    if(ptr_IsSpectatorOnly != nullptr) {
        IsSpectatorOnly = ptr_IsSpectatorOnly->value;
    }

    auto ptr_DefaultBlankMaterial = prop->cast_prop<yordle::data::prop::reference_prop>(3590584789u);
    if(ptr_DefaultBlankMaterial != nullptr) {
        DefaultBlankMaterial = yordle::data::meta::bin_ref<yordle::data::meta::IMaterialDef>(3975636772u, ptr_DefaultBlankMaterial->value);
    }
}
