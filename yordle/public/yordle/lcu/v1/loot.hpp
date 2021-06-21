//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

#include <yordle/lcu/v1/_common.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct loot_bundle_element {
        std::string id;
        std::string description;
        std::string description_long;
        std::string image;
    };

    enum class loot_type {
        chest,
        companion,
        currency,
        material,
        skin,
        skinRental,
        statstone,
        statstone_shard,
        summonerIcon,
        wardSkin
    };

    struct loot_item {
        std::string id;
        std::string name;
        std::string description;
        std::string image;
        std::string start_date;
        std::string end_date;
        int64_t mapped_store_id;
        int64_t lifetime_max;
        bool auto_redeem;
        rarity rarity;
        loot_type type;
        std::shared_ptr<std::string> recipe_menu_active;
        std::shared_ptr<std::string> recipe_menu_title;
        std::shared_ptr<std::string> recipe_menu_subtitle;
    };

    struct loot_recipe {
        std::string id;
        std::string description;
        std::string context_menu_text;
        std::string requirement_text;
        std::string image_path;
        std::string intro_video_path;
        std::string loop_video_path;
        std::string outro_video_path;
    };

    struct loot_token_bank_card {
        std::string loot_item_name;
        std::string backsplash_image_path;
        std::string button_text;
        std::string non_premium_cap_currency_id;
        std::string premium_cap_currency_id;
        std::string title_text;
        std::string token_icon_path;
        std::string tooltip_description_text;
        std::string tooltip_splash_path;
        std::string tooltip_title_text;
        std::string unlock_item_id;
        std::string unlock_item_type;
        std::string activation_date;
        std::string deactivation_date;
        std::string store_link_item;
        std::string store_link_type;
    };

    struct loot {
        std::vector<loot_item> loot_items;
        std::vector<loot_recipe> loot_recipes;
        std::vector<loot_bundle_element> loot_tables;
        std::vector<loot_bundle_element> loot_bundles;
        std::vector<loot_token_bank_card> loot_token_bank_cards;
    };

    void from_json(const json &j, yordle::lcu::v1::loot_bundle_element &x);
    void to_json(json &j, const yordle::lcu::v1::loot_bundle_element &x);

    void from_json(const json &j, yordle::lcu::v1::loot_item &x);
    void to_json(json &j, const yordle::lcu::v1::loot_item &x);

    void from_json(const json &j, yordle::lcu::v1::loot_recipe &x);
    void to_json(json &j, const yordle::lcu::v1::loot_recipe &x);

    void from_json(const json &j, yordle::lcu::v1::loot_token_bank_card &x);
    void to_json(json &j, const yordle::lcu::v1::loot_token_bank_card &x);

    void from_json(const json &j, yordle::lcu::v1::loot &x);
    void to_json(json &j, const yordle::lcu::v1::loot &x);

    void from_json(const json &j, yordle::lcu::v1::loot_type &x);
    void to_json(json &j, const yordle::lcu::v1::loot_type &x);

    inline void from_json(const json &j, yordle::lcu::v1::loot_bundle_element &x) {
        x.id               = j.at("id").get<std::string>();
        x.description      = j.at("description").get<std::string>();
        x.description_long = j.at("descriptionLong").get<std::string>();
        x.image            = j.at("image").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot_bundle_element &x) {
        j                    = json::object();
        j["id"]              = x.id;
        j["description"]     = x.description;
        j["descriptionLong"] = x.description_long;
        j["image"]           = x.image;
    }

    inline void from_json(const json &j, yordle::lcu::v1::loot_item &x) {
        x.id                   = j.at("id").get<std::string>();
        x.name                 = j.at("name").get<std::string>();
        x.description          = j.at("description").get<std::string>();
        x.image                = j.at("image").get<std::string>();
        x.start_date           = j.at("startDate").get<std::string>();
        x.end_date             = j.at("endDate").get<std::string>();
        x.mapped_store_id      = j.at("mappedStoreId").get<int64_t>();
        x.lifetime_max         = j.at("lifetimeMax").get<int64_t>();
        x.auto_redeem          = j.at("autoRedeem").get<bool>();
        x.rarity               = j.at("rarity").get<yordle::lcu::v1::rarity>();
        x.type                 = j.at("type").get<yordle::lcu::v1::loot_type>();
        x.recipe_menu_active   = yordle::lcu::v1::get_optional<std::string>(j, "recipeMenuActive");
        x.recipe_menu_title    = yordle::lcu::v1::get_optional<std::string>(j, "recipeMenuTitle");
        x.recipe_menu_subtitle = yordle::lcu::v1::get_optional<std::string>(j, "recipeMenuSubtitle");
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot_item &x) {
        j                       = json::object();
        j["id"]                 = x.id;
        j["name"]               = x.name;
        j["description"]        = x.description;
        j["image"]              = x.image;
        j["startDate"]          = x.start_date;
        j["endDate"]            = x.end_date;
        j["mappedStoreId"]      = x.mapped_store_id;
        j["lifetimeMax"]        = x.lifetime_max;
        j["autoRedeem"]         = x.auto_redeem;
        j["rarity"]             = x.rarity;
        j["type"]               = x.type;
        j["recipeMenuActive"]   = x.recipe_menu_active;
        j["recipeMenuTitle"]    = x.recipe_menu_title;
        j["recipeMenuSubtitle"] = x.recipe_menu_subtitle;
    }

    inline void from_json(const json &j, yordle::lcu::v1::loot_recipe &x) {
        x.id                = j.at("id").get<std::string>();
        x.description       = j.at("description").get<std::string>();
        x.context_menu_text = j.at("contextMenuText").get<std::string>();
        x.requirement_text  = j.at("requirementText").get<std::string>();
        x.image_path        = j.at("imagePath").get<std::string>();
        x.intro_video_path  = j.at("introVideoPath").get<std::string>();
        x.loop_video_path   = j.at("loopVideoPath").get<std::string>();
        x.outro_video_path  = j.at("outroVideoPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot_recipe &x) {
        j                    = json::object();
        j["id"]              = x.id;
        j["description"]     = x.description;
        j["contextMenuText"] = x.context_menu_text;
        j["requirementText"] = x.requirement_text;
        j["imagePath"]       = x.image_path;
        j["introVideoPath"]  = x.intro_video_path;
        j["loopVideoPath"]   = x.loop_video_path;
        j["outroVideoPath"]  = x.outro_video_path;
    }

    inline void from_json(const json &j, yordle::lcu::v1::loot_token_bank_card &x) {
        x.loot_item_name              = j.at("lootItemName").get<std::string>();
        x.backsplash_image_path       = j.at("backsplashImagePath").get<std::string>();
        x.button_text                 = j.at("buttonText").get<std::string>();
        x.non_premium_cap_currency_id = j.at("nonPremiumCapCurrencyId").get<std::string>();
        x.premium_cap_currency_id     = j.at("premiumCapCurrencyId").get<std::string>();
        x.title_text                  = j.at("titleText").get<std::string>();
        x.token_icon_path             = j.at("tokenIconPath").get<std::string>();
        x.tooltip_description_text    = j.at("tooltipDescriptionText").get<std::string>();
        x.tooltip_splash_path         = j.at("tooltipSplashPath").get<std::string>();
        x.tooltip_title_text          = j.at("tooltipTitleText").get<std::string>();
        x.unlock_item_id              = j.at("unlockItemId").get<std::string>();
        x.unlock_item_type            = j.at("unlockItemType").get<std::string>();
        x.activation_date             = j.at("activationDate").get<std::string>();
        x.deactivation_date           = j.at("deactivationDate").get<std::string>();
        x.store_link_item             = j.at("storeLinkItem").get<std::string>();
        x.store_link_type             = j.at("storeLinkType").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot_token_bank_card &x) {
        j                            = json::object();
        j["lootItemName"]            = x.loot_item_name;
        j["backsplashImagePath"]     = x.backsplash_image_path;
        j["buttonText"]              = x.button_text;
        j["nonPremiumCapCurrencyId"] = x.non_premium_cap_currency_id;
        j["premiumCapCurrencyId"]    = x.premium_cap_currency_id;
        j["titleText"]               = x.title_text;
        j["tokenIconPath"]           = x.token_icon_path;
        j["tooltipDescriptionText"]  = x.tooltip_description_text;
        j["tooltipSplashPath"]       = x.tooltip_splash_path;
        j["tooltipTitleText"]        = x.tooltip_title_text;
        j["unlockItemId"]            = x.unlock_item_id;
        j["unlockItemType"]          = x.unlock_item_type;
        j["activationDate"]          = x.activation_date;
        j["deactivationDate"]        = x.deactivation_date;
        j["storeLinkItem"]           = x.store_link_item;
        j["storeLinkType"]           = x.store_link_type;
    }

    inline void from_json(const json &j, yordle::lcu::v1::loot &x) {
        x.loot_items            = j.at("LootItems").get<std::vector<yordle::lcu::v1::loot_item>>();
        x.loot_recipes          = j.at("LootRecipes").get<std::vector<yordle::lcu::v1::loot_recipe>>();
        x.loot_tables           = j.at("LootTables").get<std::vector<yordle::lcu::v1::loot_bundle_element>>();
        x.loot_bundles          = j.at("LootBundles").get<std::vector<yordle::lcu::v1::loot_bundle_element>>();
        x.loot_token_bank_cards = j.at("LootTokenBankCards").get<std::vector<yordle::lcu::v1::loot_token_bank_card>>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot &x) {
        j                       = json::object();
        j["LootItems"]          = x.loot_items;
        j["LootRecipes"]        = x.loot_recipes;
        j["LootTables"]         = x.loot_tables;
        j["LootBundles"]        = x.loot_bundles;
        j["LootTokenBankCards"] = x.loot_token_bank_cards;
    }

    inline void from_json(const json &j, yordle::lcu::v1::loot_type &x) {
        if (j == "Chest") x = yordle::lcu::v1::loot_type::chest;
        else if (j == "Companion")
            x = yordle::lcu::v1::loot_type::companion;
        else if (j == "Currency")
            x = yordle::lcu::v1::loot_type::currency;
        else if (j == "Material")
            x = yordle::lcu::v1::loot_type::material;
        else if (j == "Skin")
            x = yordle::lcu::v1::loot_type::skin;
        else if (j == "Skin_Rental")
            x = yordle::lcu::v1::loot_type::skinRental;
        else if (j == "Statstone")
            x = yordle::lcu::v1::loot_type::statstone;
        else if (j == "Statstone_Shard")
            x = yordle::lcu::v1::loot_type::statstone_shard;
        else if (j == "SummonerIcon")
            x = yordle::lcu::v1::loot_type::summonerIcon;
        else if (j == "WardSkin")
            x = yordle::lcu::v1::loot_type::wardSkin;
    }

    inline void to_json(json &j, const yordle::lcu::v1::loot_type &x) {
        switch (x) {
            case yordle::lcu::v1::loot_type::chest:
                j = "Chest";
                break;
            case yordle::lcu::v1::loot_type::companion:
                j = "Companion";
                break;
            case yordle::lcu::v1::loot_type::currency:
                j = "Currency";
                break;
            case yordle::lcu::v1::loot_type::material:
                j = "Material";
                break;
            case yordle::lcu::v1::loot_type::skin:
                j = "Skin";
                break;
            case yordle::lcu::v1::loot_type::skinRental:
                j = "Skin_Rental";
                break;
            case yordle::lcu::v1::loot_type::statstone:
                j = "Statstone";
                break;
            case yordle::lcu::v1::loot_type::statstone_shard:
                j = "Statstone_Shard";
                break;
            case yordle::lcu::v1::loot_type::summonerIcon:
                j = "SummonerIcon";
                break;
            case yordle::lcu::v1::loot_type::wardSkin:
                j = "WardSkin";
                break;
        }
    }
} // namespace yordle::lcu::v1
