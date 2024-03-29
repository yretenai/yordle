/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualActionPlayAnimation.hpp>

#include <yordle/data/meta/bin_defs/IContextualAction.hpp>
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

yordle::data::meta::ContextualActionPlayAnimation::ContextualActionPlayAnimation(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mHashedAnimationName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2956890426u);
    if(ptr_mHashedAnimationName != nullptr) {
        mHashedAnimationName = ptr_mHashedAnimationName->value;
    }

    auto ptr_mPlayAsEmote = prop->cast_prop<yordle::data::prop::bool_prop>(3031797526u);
    if(ptr_mPlayAsEmote != nullptr) {
        mPlayAsEmote = ptr_mPlayAsEmote->value;
    }
}
