//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct item {
        int64_t id;
        std::string name;
        std::string description;
        bool active;
        bool in_store;
        std::vector<int64_t> from;
        std::vector<int64_t> to;
        std::vector<std::string> categories;
        int64_t max_stacks;
        std::string required_champion;
        std::string required_ally;
        std::string required_buff_currency_name;
        int64_t required_buff_currency_cost;
        int64_t special_recipe;
        bool is_enchantment;
        int64_t price;
        int64_t price_total;
        std::string icon_path;
    };

    using items [[maybe_unused]] = std::vector<item>;

    inline void from_json(const json &j, yordle::lcu::v1::item &x) {
        x.id                          = j.at("id").get<int64_t>();
        x.name                        = j.at("name").get<std::string>();
        x.description                 = j.at("description").get<std::string>();
        x.active                      = j.at("active").get<bool>();
        x.in_store                    = j.at("inStore").get<bool>();
        x.from                        = j.at("from").get<std::vector<int64_t>>();
        x.to                          = j.at("to").get<std::vector<int64_t>>();
        x.categories                  = j.at("categories").get<std::vector<std::string>>();
        x.max_stacks                  = j.at("maxStacks").get<int64_t>();
        x.required_champion           = j.at("requiredChampion").get<std::string>();
        x.required_ally               = j.at("requiredAlly").get<std::string>();
        x.required_buff_currency_name = j.at("requiredBuffCurrencyName").get<std::string>();
        x.required_buff_currency_cost = j.at("requiredBuffCurrencyCost").get<int64_t>();
        x.special_recipe              = j.at("specialRecipe").get<int64_t>();
        x.is_enchantment              = j.at("isEnchantment").get<bool>();
        x.price                       = j.at("price").get<int64_t>();
        x.price_total                 = j.at("priceTotal").get<int64_t>();
        x.icon_path                   = j.at("iconPath").get<std::string>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::item &x) {
        j                             = json::object();
        j["id"]                       = x.id;
        j["name"]                     = x.name;
        j["description"]              = x.description;
        j["active"]                   = x.active;
        j["inStore"]                  = x.in_store;
        j["from"]                     = x.from;
        j["to"]                       = x.to;
        j["categories"]               = x.categories;
        j["maxStacks"]                = x.max_stacks;
        j["requiredChampion"]         = x.required_champion;
        j["requiredAlly"]             = x.required_ally;
        j["requiredBuffCurrencyName"] = x.required_buff_currency_name;
        j["requiredBuffCurrencyCost"] = x.required_buff_currency_cost;
        j["specialRecipe"]            = x.special_recipe;
        j["isEnchantment"]            = x.is_enchantment;
        j["price"]                    = x.price;
        j["priceTotal"]               = x.price_total;
        j["iconPath"]                 = x.icon_path;
    }
} // namespace yordle::lcu::v1
