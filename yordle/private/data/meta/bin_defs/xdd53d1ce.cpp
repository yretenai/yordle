/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdd53d1ce.hpp>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
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

yordle::data::meta::xdd53d1ce::xdd53d1ce(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IFxAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Location = prop->cast_prop<yordle::data::prop::structure_prop>(200649126u);
    if(ptr_Location != nullptr) {
        Location = yordle::data::meta::deserialize<yordle::data::meta::x1c494c09>(ptr_Location, 474565641u);
    }

    auto ptr_Particle = prop->cast_prop<yordle::data::prop::reference_prop>(2324120511u);
    if(ptr_Particle != nullptr) {
        Particle = yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_Particle->value);
    }

    auto ptr_x39d6e480 = prop->cast_prop<yordle::data::prop::float32_prop>(970384512u);
    if(ptr_x39d6e480 != nullptr) {
        x39d6e480 = ptr_x39d6e480->value;
    }

    auto ptr_x7436e01 = prop->cast_prop<yordle::data::prop::bool_prop>(121859585u);
    if(ptr_x7436e01 != nullptr) {
        x7436e01 = ptr_x7436e01->value;
    }

    auto ptr_Scale = prop->cast_prop<yordle::data::prop::float32_prop>(2190941297u);
    if(ptr_Scale != nullptr) {
        Scale = ptr_Scale->value;
    }
}
