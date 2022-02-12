/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FloatingTextGlobalConfig.hpp>

#include <yordle/data/meta/bin_defs/FloatingTextTunables.hpp>
#include <yordle/data/meta/bin_defs/FloatingTextDamageDisplayTypeList.hpp>
#include <yordle/data/meta/bin_defs/FloatingTextTypeList.hpp>
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

yordle::data::meta::FloatingTextGlobalConfig::FloatingTextGlobalConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTunables = prop->cast_prop<yordle::data::prop::inline_structure_prop>(924866144u);
    if(ptr_mTunables != nullptr) {
        mTunables = yordle::data::meta::deserialize<yordle::data::meta::FloatingTextTunables>(ptr_mTunables, 395898060u);
    }

    auto ptr_mDamageDisplayTypes = prop->cast_prop<yordle::data::prop::inline_structure_prop>(832004862u);
    if(ptr_mDamageDisplayTypes != nullptr) {
        mDamageDisplayTypes = yordle::data::meta::deserialize<yordle::data::meta::FloatingTextDamageDisplayTypeList>(ptr_mDamageDisplayTypes, 3119478897u);
    }

    auto ptr_mFloatingTextTypes = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3127990322u);
    if(ptr_mFloatingTextTypes != nullptr) {
        mFloatingTextTypes = yordle::data::meta::deserialize<yordle::data::meta::FloatingTextTypeList>(ptr_mFloatingTextTypes, 46628140u);
    }
}
