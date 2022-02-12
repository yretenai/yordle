/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VfxChildIdentifier.hpp>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
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

yordle::data::meta::VfxChildIdentifier::VfxChildIdentifier(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_effect = prop->cast_prop<yordle::data::prop::reference_prop>(1852738900u);
    if(ptr_effect != nullptr) {
        effect = yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>(1171098015u, ptr_effect->value);
    }

    auto ptr_effectKey = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2600665331u);
    if(ptr_effectKey != nullptr) {
        effectKey = ptr_effectKey->value;
    }

    auto ptr_effectName = prop->cast_prop<yordle::data::prop::string_prop>(1209207887u);
    if(ptr_effectName != nullptr) {
        effectName = ptr_effectName->value;
    }
}
