/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SkinSummonerEmoteLoadout.hpp>

#include <yordle/data/meta/bin_defs/SummonerEmote.hpp>
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

yordle::data::meta::SkinSummonerEmoteLoadout::SkinSummonerEmoteLoadout(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mEmotes = prop->cast_prop<yordle::data::prop::set_prop>(2399705241u);
    if(ptr_mEmotes != nullptr) {
        auto index_mEmotes = 0;
        for(const auto &set_mEmotes_entry : ptr_mEmotes->value) {
            auto ptr_mEmotes_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mEmotes_entry);
            if(ptr_mEmotes_entry != nullptr) {
                mEmotes[index_mEmotes] = yordle::data::meta::bin_ref<yordle::data::meta::SummonerEmote>(1950165531u, ptr_mEmotes_entry->value);
            }
            index_mEmotes++;
        }
    }
}
