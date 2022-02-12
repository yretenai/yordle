/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/EsportsBannerConfiguration.hpp>

#include <yordle/data/meta/bin_defs/SponsoredBanner.hpp>
#include <yordle/data/meta/bin_defs/GameMutatorExpansions.hpp>
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

yordle::data::meta::EsportsBannerConfiguration::EsportsBannerConfiguration(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_IndividualBannerOverrides = prop->cast_prop<yordle::data::prop::set_prop>(631651853u);
    if(ptr_IndividualBannerOverrides != nullptr) {
        for(const auto &set_IndividualBannerOverrides_entry : ptr_IndividualBannerOverrides->value) {
            auto ptr_IndividualBannerOverrides_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_IndividualBannerOverrides_entry);
            if(ptr_IndividualBannerOverrides_entry != nullptr) {
                IndividualBannerOverrides.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::SponsoredBanner>(ptr_IndividualBannerOverrides_entry, 6610142u));
            }
        }
    }

    auto ptr_esportsTeam = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3114625026u);
    if(ptr_esportsTeam != nullptr) {
        esportsTeam = ptr_esportsTeam->value;
    }

    auto ptr_eventMutator = prop->cast_prop<yordle::data::prop::reference_prop>(4043971103u);
    if(ptr_eventMutator != nullptr) {
        eventMutator = yordle::data::meta::bin_ref<yordle::data::meta::GameMutatorExpansions>(4119089369u, ptr_eventMutator->value);
    }

    auto ptr_leagueName = prop->cast_prop<yordle::data::prop::string_prop>(390952403u);
    if(ptr_leagueName != nullptr) {
        leagueName = ptr_leagueName->value;
    }

    auto ptr_texturePath = prop->cast_prop<yordle::data::prop::xx_hash_prop>(4037239779u);
    if(ptr_texturePath != nullptr) {
        texturePath = ptr_texturePath->value;
    }
}