//
// Created by Lilith on 2021-06-21.
//

#include <exception>
#include <xxhash.h>

#include "../vex.hpp"

#include <yordle/data/meta/bin_class_def.hpp>
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

            auto mut = g_message_mutex.load();
            if (mut->try_lock()) {
                g_message = make_shared<string>("loading champion info");
                mut->unlock();
            }

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
                    if (champion->catalogEntry == nullptr) {
                        use_legacy = true;
                    } else {
                        id = static_cast<int64_t>(champion->catalogEntry->itemID);
                    }
                }
                if (id > last_max) last_max = id;

                auto bin_path = filesystem::path("DATA") / "Characters" / champion->name / (champion->name + ".bin");
                champion_info info {id, false, yordle::cdtb::xxhashlist::hash(bin_path.generic_string()), champion->name, 0, {}};
                champions[id] = make_shared<champion_info>(info);
            }

            if (mut->try_lock()) {
                g_message = make_shared<string>("loading skin info");
                mut->unlock();
            }

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
                        if (mut->try_lock()) {
                            g_message = make_shared<string>(string("cannot find champion id ") + to_string(champion_id));
                            mut->unlock();
                        }

                        continue;
                    }

                    auto champion  = champions[champion_id];
                    auto bin_path  = filesystem::path("DATA") / "Characters" / champion->name / "Skins" / (string("Skin") + to_string(skin_id) + ".bin");
                    auto tile_path = filesystem::path("rcp-be-lol-game-data") / "global" / "default" / skin.second.tile_path.substr(22);
                    skin_info info {skin_id, skin.second.id, yordle::cdtb::xxhashlist::hash(bin_path.generic_string()), skin.second.name, yordle::cdtb::xxhashlist::hash(tile_path.generic_string()), {}};
                    if (skin_id == 0) {
                        champion->image = info.image;
                    }

                    if (skin.second.chromas != nullptr && !skin.second.chromas->empty()) {
                        for (auto &chroma : *skin.second.chromas) {
                            auto chroma_id        = chroma.id % 1000;
                            auto chroma_bin_path  = filesystem::path("DATA") / "Characters" / champion->name / "Skins" / (string("Skin") + to_string(chroma_id) + ".bin");
                            auto chroma_tile_path = filesystem::path("rcp-be-lol-game-data") / "global" / "default" / chroma.chroma_path.substr(22);
                            chroma_info skin_chroma {chroma_id, chroma.id, yordle::cdtb::xxhashlist::hash(chroma_bin_path.generic_string()), "Chroma " + to_string(info.chromas.size() + 1), yordle::cdtb::xxhashlist::hash(chroma_tile_path.generic_string())};
                            info.chromas.emplace_back(skin_chroma);
                        }
                    }
                    champion->skins.emplace_back(make_shared<skin_info>(info));
                }
            }

            if (mut->try_lock()) {
                g_message = nullptr;
                mut->unlock();
            }
        } catch (std::exception &e) {
            is_busy = false;
            throw;
        }
    }

    void skin_container::clear() {
        champions.clear();
    }
} // namespace vex::mage
