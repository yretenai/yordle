/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualActionPlayAudio.hpp>

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

yordle::data::meta::ContextualActionPlayAudio::ContextualActionPlayAudio(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSelfEventName = prop->cast_prop<yordle::data::prop::string_prop>(3232093917u);
    if(ptr_mSelfEventName != nullptr) {
        mSelfEventName = ptr_mSelfEventName->value;
    }

    auto ptr_mAllyEventName = prop->cast_prop<yordle::data::prop::string_prop>(1748689337u);
    if(ptr_mAllyEventName != nullptr) {
        mAllyEventName = ptr_mAllyEventName->value;
    }

    auto ptr_mEnemyEventName = prop->cast_prop<yordle::data::prop::string_prop>(1096377831u);
    if(ptr_mEnemyEventName != nullptr) {
        mEnemyEventName = ptr_mEnemyEventName->value;
    }

    auto ptr_mSpectatorEventName = prop->cast_prop<yordle::data::prop::string_prop>(3893363788u);
    if(ptr_mSpectatorEventName != nullptr) {
        mSpectatorEventName = ptr_mSpectatorEventName->value;
    }

    auto ptr_mWaitForAnnouncerQueue = prop->cast_prop<yordle::data::prop::bool_prop>(461378158u);
    if(ptr_mWaitForAnnouncerQueue != nullptr) {
        mWaitForAnnouncerQueue = ptr_mWaitForAnnouncerQueue->value;
    }

    auto ptr_x54cd5fca = prop->cast_prop<yordle::data::prop::bool_prop>(1422745546u);
    if(ptr_x54cd5fca != nullptr) {
        x54cd5fca = ptr_x54cd5fca->value;
    }

    auto ptr_xbeb655b5 = prop->cast_prop<yordle::data::prop::bool_prop>(3199620533u);
    if(ptr_xbeb655b5 != nullptr) {
        xbeb655b5 = ptr_xbeb655b5->value;
    }

    auto ptr_x66a1c28b = prop->cast_prop<yordle::data::prop::string_prop>(1721877131u);
    if(ptr_x66a1c28b != nullptr) {
        x66a1c28b = ptr_x66a1c28b->value;
    }

    auto ptr_mWaitTimeout = prop->cast_prop<yordle::data::prop::float32_prop>(828647620u);
    if(ptr_mWaitTimeout != nullptr) {
        mWaitTimeout = ptr_mWaitTimeout->value;
    }
}
