/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VoiceChatViewSelfSlot.hpp>

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

yordle::data::meta::VoiceChatViewSelfSlot::VoiceChatViewSelfSlot(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Portrait = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(806924506u);
    if(ptr_Portrait != nullptr) {
        Portrait = ptr_Portrait->value;
    }

    auto ptr_Halo = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3485384095u);
    if(ptr_Halo != nullptr) {
        Halo = ptr_Halo->value;
    }

    auto ptr_NameText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3587103093u);
    if(ptr_NameText != nullptr) {
        NameText = ptr_NameText->value;
    }

    auto ptr_MicVolumeText = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(714535865u);
    if(ptr_MicVolumeText != nullptr) {
        MicVolumeText = ptr_MicVolumeText->value;
    }

    auto ptr_MicVolumeSliderBar = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(385740432u);
    if(ptr_MicVolumeSliderBar != nullptr) {
        MicVolumeSliderBar = ptr_MicVolumeSliderBar->value;
    }

    auto ptr_MuteButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3726201232u);
    if(ptr_MuteButton != nullptr) {
        MuteButton = ptr_MuteButton->value;
    }

    auto ptr_ConnectionButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(354237261u);
    if(ptr_ConnectionButton != nullptr) {
        ConnectionButton = ptr_ConnectionButton->value;
    }
}