//
// Created by Lilith on 2021-06-21.
//
// Generated using quicktype.

#pragma once

#include <nlohmann/json.hpp>

namespace yordle::lcu::v1 {
    using nlohmann::json;

    struct number_formatting_behavior_t {
        int64_t digits_for_thousands_seperator;
        bool trim_trailing_zeros_after_decimal;
        bool western_number_grouping;
    };

    struct number_formatting {
        std::string decimal_seperator;
        std::string thousand_seperator;
        std::string thousand_abbreviation;
        std::string ten_thousand_abbreviation;
        std::string million_abbreviation;
        std::string one_hundred_million_abbreviation;
        std::string billion_abbreviation;
        std::string trillion_abbreviation;
        std::string second_abbreviation;
        std::string minute_abbreviation;
        std::string hour_abbreviation;
        std::string meters_abbreviation;
        std::string kilometers_abbreviation;
        std::string percentage_format;
        number_formatting_behavior_t number_formatting_behavior;
    };

    void from_json(const json &j, yordle::lcu::v1::number_formatting_behavior_t &x);
    void to_json(json &j, const yordle::lcu::v1::number_formatting_behavior_t &x);

    void from_json(const json &j, yordle::lcu::v1::number_formatting &x);
    void to_json(json &j, const yordle::lcu::v1::number_formatting &x);

    inline void from_json(const json &j, yordle::lcu::v1::number_formatting_behavior_t &x) {
        x.digits_for_thousands_seperator    = j.at("digitsForThousandsSeperator").get<int64_t>();
        x.trim_trailing_zeros_after_decimal = j.at("trimTrailingZerosAfterDecimal").get<bool>();
        x.western_number_grouping           = j.at("westernNumberGrouping").get<bool>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::number_formatting_behavior_t &x) {
        j                                  = json::object();
        j["digitsForThousandsSeperator"]   = x.digits_for_thousands_seperator;
        j["trimTrailingZerosAfterDecimal"] = x.trim_trailing_zeros_after_decimal;
        j["westernNumberGrouping"]         = x.western_number_grouping;
    }

    inline void from_json(const json &j, yordle::lcu::v1::number_formatting &x) {
        x.decimal_seperator                = j.at("decimalSeperator").get<std::string>();
        x.thousand_seperator               = j.at("thousandSeperator").get<std::string>();
        x.thousand_abbreviation            = j.at("thousandAbbreviation").get<std::string>();
        x.ten_thousand_abbreviation        = j.at("tenThousandAbbreviation").get<std::string>();
        x.million_abbreviation             = j.at("millionAbbreviation").get<std::string>();
        x.one_hundred_million_abbreviation = j.at("oneHundredMillionAbbreviation").get<std::string>();
        x.billion_abbreviation             = j.at("billionAbbreviation").get<std::string>();
        x.trillion_abbreviation            = j.at("trillionAbbreviation").get<std::string>();
        x.second_abbreviation              = j.at("secondAbbreviation").get<std::string>();
        x.minute_abbreviation              = j.at("minuteAbbreviation").get<std::string>();
        x.hour_abbreviation                = j.at("hourAbbreviation").get<std::string>();
        x.meters_abbreviation              = j.at("metersAbbreviation").get<std::string>();
        x.kilometers_abbreviation          = j.at("kilometersAbbreviation").get<std::string>();
        x.percentage_format                = j.at("percentageFormat").get<std::string>();
        x.number_formatting_behavior       = j.at("numberFormattingBehavior").get<yordle::lcu::v1::number_formatting_behavior_t>();
    }

    inline void to_json(json &j, const yordle::lcu::v1::number_formatting &x) {
        j                                  = json::object();
        j["decimalSeperator"]              = x.decimal_seperator;
        j["thousandSeperator"]             = x.thousand_seperator;
        j["thousandAbbreviation"]          = x.thousand_abbreviation;
        j["tenThousandAbbreviation"]       = x.ten_thousand_abbreviation;
        j["millionAbbreviation"]           = x.million_abbreviation;
        j["oneHundredMillionAbbreviation"] = x.one_hundred_million_abbreviation;
        j["billionAbbreviation"]           = x.billion_abbreviation;
        j["trillionAbbreviation"]          = x.trillion_abbreviation;
        j["secondAbbreviation"]            = x.second_abbreviation;
        j["minuteAbbreviation"]            = x.minute_abbreviation;
        j["hourAbbreviation"]              = x.hour_abbreviation;
        j["metersAbbreviation"]            = x.meters_abbreviation;
        j["kilometersAbbreviation"]        = x.kilometers_abbreviation;
        j["percentageFormat"]              = x.percentage_format;
        j["numberFormattingBehavior"]      = x.number_formatting_behavior;
    }
} // namespace yordle::lcu::v1
