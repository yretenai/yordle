//
// Created by Lilith on 2021-06-21.
//

#pragma once

#include <yordle/lcu/v1/champion_perk_style_map.hpp>
#include <yordle/lcu/v1/champion_summary.hpp>
#include <yordle/lcu/v1/companions.hpp>
#include <yordle/lcu/v1/hover_tip.hpp>
#include <yordle/lcu/v1/items.hpp>
#include <yordle/lcu/v1/loot.hpp>
#include <yordle/lcu/v1/maps.hpp>
#include <yordle/lcu/v1/mission_assets.hpp>
#include <yordle/lcu/v1/number_formatting.hpp>
#include <yordle/lcu/v1/perk_styles.hpp>
#include <yordle/lcu/v1/perks.hpp>
#include <yordle/lcu/v1/profile_icons.hpp>
#include <yordle/lcu/v1/queues.hpp>
#include <yordle/lcu/v1/settings_to_persist.hpp>
#include <yordle/lcu/v1/skinlines.hpp>
#include <yordle/lcu/v1/skins.hpp>
#include <yordle/lcu/v1/statstones.hpp>
#include <yordle/lcu/v1/summoner_banners.hpp>
#include <yordle/lcu/v1/summoner_emotes.hpp>
#include <yordle/lcu/v1/summoner_icon_sets.hpp>
#include <yordle/lcu/v1/summoner_icons.hpp>
#include <yordle/lcu/v1/summoner_spells.hpp>
#include <yordle/lcu/v1/summoner_trophies.hpp>
#include <yordle/lcu/v1/tft_champions.hpp>
#include <yordle/lcu/v1/tft_damage_skins.hpp>
#include <yordle/lcu/v1/tft_game_variations.hpp>
#include <yordle/lcu/v1/tft_items.hpp>
#include <yordle/lcu/v1/tft_map_skins.hpp>
#include <yordle/lcu/v1/tft_promos.hpp>
#include <yordle/lcu/v1/tft_traits.hpp>
#include <yordle/lcu/v1/universes.hpp>
#include <yordle/lcu/v1/ward_skin_sets.hpp>
#include <yordle/lcu/v1/ward_skins.hpp>

namespace yordle::lcu::v1 {
    using clash_vo [[maybe_unused]]        = std::map<std::string, std::string>;
    using discord_strings [[maybe_unused]] = std::map<std::string, std::string>;
    using generic_assets [[maybe_unused]]  = std::map<std::string, std::map<std::string, std::string>>;
} // namespace yordle::lcu::v1
