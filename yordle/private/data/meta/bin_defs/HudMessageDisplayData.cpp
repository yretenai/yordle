/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HudMessageDisplayData.hpp>

#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
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

yordle::data::meta::HudMessageDisplayData::HudMessageDisplayData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TransitionIn = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2407574701u);
    if(ptr_TransitionIn != nullptr) {
        TransitionIn = yordle::data::meta::deserialize<yordle::data::meta::HudMenuTransitionData>(ptr_TransitionIn, 3273533950u);
    }

    auto ptr_MessageDuration = prop->cast_prop<yordle::data::prop::float32_prop>(3756733196u);
    if(ptr_MessageDuration != nullptr) {
        MessageDuration = ptr_MessageDuration->value;
    }

    auto ptr_messageCount = prop->cast_prop<yordle::data::prop::uint32_prop>(415023739u);
    if(ptr_messageCount != nullptr) {
        messageCount = ptr_messageCount->value;
    }
}
