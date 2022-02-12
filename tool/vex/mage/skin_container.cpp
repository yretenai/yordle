//
// Created by Lilith on 2021-06-21.
//

#include <exception>
#include <xxhash.h>
#include <yordle/data/meta/bin_defs/Champion.hpp>
#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>

#include "../vex.hpp"

#include <yordle/yordle.hpp>

using namespace std;
using namespace dragon;
using namespace vex;

namespace vex::mage {
    constexpr uint64_t SKINS_JSON    = 0x893ffb0b2db8ecfaull;
    constexpr uint64_t CHAMPIONS_BIN = 0xb3cc3b6ac3ea0472ull;
    constexpr uint64_t SKINS_BIN     = 0x7280860748b39959ull;

    void skin_container::load_data() {
        is_busy = true;

        try {
            auto wad                = g_wad.load();
            auto champions_bin_data = wad->read_file(CHAMPIONS_BIN);
            if (champions_bin_data == nullptr) {
                is_busy = false;
                return;
            }

            vex::post_message("loading champion info");

            auto champions_bin = yordle::data::property_bin(*champions_bin_data);
            bool use_legacy    = !wad->has_file(SKINS_JSON);
            int64_t last_max   = 0;
            for (const auto &pair : champions_bin.objects) {
                auto champion = yordle::data::meta::deserialize<yordle::data::meta::Champion>(pair.second);
                if (champion == nullptr) {
                    continue;
                }

                if (champion->name == "TFTChampion") {
                    continue;
                }

                auto id = last_max + 1;
                if (!use_legacy) {
                    auto ptr_CatalogEntry = champion->_underlying_prop->cast_prop<yordle::data::prop::inline_structure_prop>(607049692u);
                    std::shared_ptr<yordle::data::meta::CatalogEntry> catalogEntry = nullptr;
                    if(ptr_CatalogEntry != nullptr) {
                        catalogEntry = yordle::data::meta::deserialize<yordle::data::meta::CatalogEntry>(ptr_CatalogEntry, 607049692u);
                    }

                    if (catalogEntry == nullptr) {
                        use_legacy = true;
                    } else {
                        id = static_cast<int64_t>(catalogEntry->itemID);
                    }
                }
                if (id > last_max) last_max = id;

                auto bin_path = filesystem::path("DATA") / "Characters" / champion->name / (champion->name + ".bin");
                champion_info info {id, false, yordle::cdtb::xxhashlist::hash(bin_path.generic_string()), champion->name, 0, {}, bin_path.generic_string()};
                champions[id] = make_shared<champion_info>(info);
                champion_names.insert(info.name);
                reverse_map[info.name] = id;
            }

            vex::post_message("loading skin info");

            if (use_legacy) {
                // TODO.
            } else {
                auto skins_json_data = wad->read_file(SKINS_JSON);
                if (skins_json_data == nullptr) {
                    throw;
                }

                yordle::lcu::v1::skins skins = nlohmann::json::parse(skins_json_data->to_string());

                for (auto &skin : skins) {
                    auto champion_id = skin.second.id / 1000;
                    auto skin_id     = skin.second.id % 1000;
                    if (!champions.contains(champion_id)) {
                        vex::post_message(string("cannot find champion id ") + to_string(champion_id));
                        continue;
                    }

                    auto champion     = champions[champion_id];
                    auto resource_key = filesystem::path("Characters") / champion->name / "Skins" / (string("Skin") + to_string(skin_id));
                    auto bin_path     = filesystem::path("DATA") / resource_key;
                    auto tile_path    = filesystem::path("plugins") / "rcp-be-lol-game-data" / "global" / "default" / skin.second.tile_path.substr(22);
                    skin_info info {skin_id, skin.second.id, yordle::cdtb::xxhashlist::hash(bin_path.generic_string() + ".bin"), yordle::cdtb::fnvhashlist::hash(resource_key.generic_string()), skin.second.name, yordle::cdtb::xxhashlist::hash(tile_path.generic_string()), 0, {}, bin_path.generic_string(), resource_key.generic_string()};
                    if (skin_id == 0) {
                        champion->image = info.image;
                    }

                    if (skin.second.chromas != nullptr && !skin.second.chromas->empty()) {
                        for (auto &chroma : *skin.second.chromas) {
                            auto chroma_id           = chroma.id % 1000;
                            auto chroma_resource_key = filesystem::path("Characters") / champion->name / "Skins" / (string("Skin") + to_string(chroma_id));
                            auto chroma_bin_path     = filesystem::path("DATA") / chroma_resource_key;
                            auto chroma_tile_path    = filesystem::path("plugins") / "rcp-be-lol-game-data" / "global" / "default" / chroma.chroma_path.substr(22);
                            skin_info skin_chroma {chroma_id, chroma.id, yordle::cdtb::xxhashlist::hash(chroma_bin_path.generic_string() + ".bin"), yordle::cdtb::fnvhashlist::hash(chroma_resource_key.generic_string()), "Chroma " + to_string(info.chromas.size() + 1), yordle::cdtb::xxhashlist::hash(chroma_tile_path.generic_string()), 0, {}, chroma_bin_path.generic_string(), chroma_resource_key.generic_string()};
                            if (!chroma.colors.empty()) {
                                auto color = chroma.colors[0];
                                if (!color.empty()) {
                                    istringstream line_stream = istringstream(color.substr(1));
                                    line_stream >> hex >> skin_chroma.color;
                                }
                            }
                            info.chromas[skin_chroma.id] = make_shared<skin_info>(skin_chroma);
                        }
                    }
                    champion->skins[info.id] = make_shared<skin_info>(info);
                }
            }
            is_busy = false;
        } catch (std::exception &e) {
            is_busy = false;
            throw;
        }
    }

    void skin_container::clear() {
        selected_champion = -1;
        selected_skin     = -1;
        selected_chroma   = -1;

        champions.clear();
    }

    skin_container::champion_info skin_container::get_champion() {
        if (selected_champion == -1 || !champions.contains(selected_champion)) {
            return {-1};
        }

        return *champions[selected_champion];
    }

    skin_container::skin_info skin_container::get_skin() {
        if (selected_champion == -1) {
            return {-1};
        }

        auto champ = get_champion();

        if (selected_skin == -1) {
            selected_skin = 0;
        }

        if (champ.id == -1 || !champ.skins.contains(selected_skin)) {
            return {-1};
        }

        auto skin = *champ.skins[selected_skin];
        if (selected_chroma > -1 && skin.chromas.contains(selected_chroma)) {
            return *skin.chromas[selected_chroma];
        }
        return skin;
    }

    int64_t skin_container::skin_id() const {
        if (selected_champion == -1) {
            return -1;
        }

        if (selected_skin == -1) {
            return selected_champion * 1000;
        }

        if (selected_chroma == -1) {
            return selected_champion * 1000 + selected_skin;
        }

        return selected_champion * 1000 + selected_chroma;
    }
} // namespace vex::mage
