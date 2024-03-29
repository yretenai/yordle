/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VfxPrimitiveMeshBase.hpp>

#include <yordle/data/meta/bin_defs/VfxMeshDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
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

yordle::data::meta::VfxPrimitiveMeshBase::VfxPrimitiveMeshBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::VfxPrimitiveBase(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mMesh = prop->cast_prop<yordle::data::prop::inline_structure_prop>(227111725u);
    if(ptr_mMesh != nullptr) {
        mMesh = yordle::data::meta::deserialize<yordle::data::meta::VfxMeshDefinitionData>(ptr_mMesh, 1787328523u);
    }

    auto ptr_xfbf6793f = prop->cast_prop<yordle::data::prop::bool_prop>(4227234111u);
    if(ptr_xfbf6793f != nullptr) {
        xfbf6793f = ptr_xfbf6793f->value;
    }

    auto ptr_xea861daa = prop->cast_prop<yordle::data::prop::bool_prop>(3934657962u);
    if(ptr_xea861daa != nullptr) {
        xea861daa = ptr_xea861daa->value;
    }
}
