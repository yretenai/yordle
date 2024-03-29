/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CollectiblesEsportsTeamData.hpp>

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

yordle::data::meta::CollectiblesEsportsTeamData::CollectiblesEsportsTeamData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_teamId = prop->cast_prop<yordle::data::prop::uint32_prop>(1015280385u);
    if(ptr_teamId != nullptr) {
        teamId = ptr_teamId->value;
    }

    auto ptr_shortName = prop->cast_prop<yordle::data::prop::string_prop>(2106911478u);
    if(ptr_shortName != nullptr) {
        shortName = ptr_shortName->value;
    }

    auto ptr_fullName = prop->cast_prop<yordle::data::prop::string_prop>(141582903u);
    if(ptr_fullName != nullptr) {
        fullName = ptr_fullName->value;
    }

    auto ptr_leagueName = prop->cast_prop<yordle::data::prop::string_prop>(390952403u);
    if(ptr_leagueName != nullptr) {
        leagueName = ptr_leagueName->value;
    }
}
