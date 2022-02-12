/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TargeterDefinition.hpp>

#include <yordle/data/meta/bin_defs/ITargeterFadeBehavior.hpp>
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

yordle::data::meta::TargeterDefinition::TargeterDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mFadeBehavior = prop->cast_prop<yordle::data::prop::structure_prop>(3384398744u);
    if(ptr_mFadeBehavior != nullptr) {
        mFadeBehavior = yordle::data::meta::deserialize<yordle::data::meta::ITargeterFadeBehavior>(ptr_mFadeBehavior, 1348413282u);
    }
}
