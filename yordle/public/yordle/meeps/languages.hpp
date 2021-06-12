//
// Created by Lilith on 2021-04-23.
//

#pragma once

// https://universe-meeps.leagueoflegends.com/v1/dictionaries/en_us.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/explore/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/explore2/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/search/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/featured-modules/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/champion-browse/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/faction-browse/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/comics/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/collections/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/champions/gwen/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/story/gwen-color-story/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/factions/shadow-isles/index.json
// https://universe-meeps.leagueoflegends.com/v1/en_us/comics/lux/index.json
// https://universe-comics.leagueoflegends.com/comics/en_us/lux/issue-1/index.json

namespace yordle::meeps::languages {
    using UniverseLanguage = const char *;

    static constexpr UniverseLanguage Czech              = "cs_cz";
    static constexpr UniverseLanguage German             = "de_de";
    static constexpr UniverseLanguage Greek              = "el_gr";
    static constexpr UniverseLanguage English            = "en_us";
    static constexpr UniverseLanguage EnglishPL          = "en_pl";
    static constexpr UniverseLanguage EnglishGB          = "en_gb";
    static constexpr UniverseLanguage EnglishAU          = "en_au";
    static constexpr UniverseLanguage EnglishPH          = "en_ph";
    static constexpr UniverseLanguage EnglishSG          = "en_sg";
    static constexpr UniverseLanguage Spanish            = "es_es";
    static constexpr UniverseLanguage SpanishAR          = "es_ar";
    static constexpr UniverseLanguage SpanishMX          = "es_mx";
    static constexpr UniverseLanguage French             = "fr_fr";
    static constexpr UniverseLanguage Hungarian          = "hu_hu";
    static constexpr UniverseLanguage Indonesian         = "id_id";
    static constexpr UniverseLanguage Italian            = "it_it";
    static constexpr UniverseLanguage Japanese           = "ja_jp";
    static constexpr UniverseLanguage Korean             = "ko_kr";
    static constexpr UniverseLanguage Malay              = "ms_my";
    static constexpr UniverseLanguage Polish             = "pl_pl";
    static constexpr UniverseLanguage Portuguese         = "pt_br";
    static constexpr UniverseLanguage Romanian           = "ro_ro";
    static constexpr UniverseLanguage Russian            = "ru_ru";
    static constexpr UniverseLanguage Thai               = "th_th";
    static constexpr UniverseLanguage Turkish            = "tr_tr";
    static constexpr UniverseLanguage Vietnamese         = "vn_vn"; // rito pls it's vi_vn
    static constexpr UniverseLanguage TraditionalChinese = "zh_tw";
    static constexpr UniverseLanguage SimplifiedChinese  = "zh_cn";
} // namespace yordle::meeps::languages
