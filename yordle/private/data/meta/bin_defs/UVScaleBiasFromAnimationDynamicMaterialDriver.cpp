/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/UVScaleBiasFromAnimationDynamicMaterialDriver.hpp>

#include <yordle/data/meta/bin_defs/x995ca734.hpp>
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

yordle::data::meta::UVScaleBiasFromAnimationDynamicMaterialDriver::UVScaleBiasFromAnimationDynamicMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x995ca734(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSubMeshName = prop->cast_prop<yordle::data::prop::string_prop>(2717239288u);
    if(ptr_mSubMeshName != nullptr) {
        mSubMeshName = ptr_mSubMeshName->value;
    }

    auto ptr_xdbad132e = prop->cast_prop<yordle::data::prop::uint32_prop>(3685552942u);
    if(ptr_xdbad132e != nullptr) {
        xdbad132e = ptr_xdbad132e->value;
    }
}
