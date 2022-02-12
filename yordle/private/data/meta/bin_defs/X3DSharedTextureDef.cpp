/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/X3DSharedTextureDef.hpp>

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

yordle::data::meta::X3DSharedTextureDef::X3DSharedTextureDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_type = prop->cast_prop<yordle::data::prop::uint32_prop>(1361572173u);
    if(ptr_type != nullptr) {
        type = ptr_type->value;
    }

    auto ptr_x2d6871c0 = prop->cast_prop<yordle::data::prop::int32_prop>(761819584u);
    if(ptr_x2d6871c0 != nullptr) {
        x2d6871c0 = ptr_x2d6871c0->value;
    }

    auto ptr_PlatformMask = prop->cast_prop<yordle::data::prop::uint32_prop>(3548357530u);
    if(ptr_PlatformMask != nullptr) {
        PlatformMask = ptr_PlatformMask->value;
    }
}