//
// Created by Lilith on 2021-06-12.
//

#include <ProgramOptions.hxx>
#include <standard_dragon/hash/fnv1a.hpp>
#include <standard_dragon/WemSoundbank.hpp>

#include "gnar.hpp"

using namespace std;
using namespace dragon;
using namespace dragon::bkhd;
using namespace dragon::bkhd::hirc;
using namespace dragon::hash;
using namespace yordle;
using namespace yordle::audio;
using namespace yordle::data;
using namespace prop;

namespace gnar {
    bool parse_configuration(int argc, char **argv, GnarConfiguration &gnar, int &exit_code) {
        po::parser cli;

        auto &game_dir = cli["root"]
                             .abbreviation('g')
                             .description("extracted game root folder")
                             .type(po::string)
                             .callback([&](const po::string_t &str) {
                                 gnar.game_dir = str;
                             });

        cli["fnv-hash"]
            .abbreviation('F')
            .description("fnv hash list path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = read_file(path);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    gnar.hash_list.combine(hash);
                }
            });

        cli["xx-hash"]
            .abbreviation('H')
            .description("xx hash list path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = read_file(path);
                    auto hash   = cdtb::xxhashlist(buffer);
                    gnar.file_hash_list.combine(hash);
                }
            });

        cli["locale"]
            .abbreviation('l')
            .type(po::string)
            .multi()
            .bind(gnar.locales);

        auto &output = cli["output"]
                           .abbreviation('o')
                           .description("output directory")
                           .type(po::string)
                           .callback([&](const po::string_t &str) {
                               gnar.output_dir = str;
                           });

        auto &disable_map = cli["disable-map"]
                                .description("disable map processing");

        auto &disable_champ = cli["disable-champ"]
                                  .description("disable champ processing");

        auto &disable_sfx = cli["disable-sfx"]
                                .description("disable sfx processing");

        auto &disable_vo = cli["disable-vo"]
                               .description("disable vo processing");

        cli[""]
            .bind(gnar.targets);

        auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

        auto &version = cli["version"]
                            .abbreviation('v')
                            .description("print application version");

        if (!cli(argc, argv)) {
            cerr << "errored while parsing opts; aborting.\n";
            exit_code = -1;
            return false;
        }

        if (version.was_set()) {
            exit_code = 0;
            return false;
        }

        if (help.was_set()) {
            cout << cli << endl;
            exit_code = 0;
            return false;
        }

        if (gnar.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        if (!output.was_set()) {
            cerr << "err: needs an output directory" << endl;
            exit_code = 2;
            return false;
        }

        if (!game_dir.was_set()) {
            cerr << "err: needs a game directory" << endl;
            exit_code = 3;
            return false;
        }

        if (disable_map.was_set()) {
            gnar.process_map = false;
        }

        if (disable_champ.was_set()) {
            gnar.process_champ = false;
        }

        if (disable_sfx.was_set()) {
            gnar.process_sfx = false;
        }

        if (disable_vo.was_set()) {
            gnar.process_vo = false;
        }

        if (gnar.locales.empty()) {
            cout << "warn: setting default locales" << endl;
            gnar.locales = {"cs_CZ", "de_DE", "el_GR", "en_US", "es_ES", "es_MX", "fr_FR", "hu_HU", "it_IT", "ja_JP", "ko_KR", "pl_PL", "pt_BR", "ro_RO", "ru_RU", "th_TH", "tr_TR", "vn_VN", "zh_CN", "zh_TW"};
        }

        return true;
    }

    string get_version_str() {
        return GNAR_VERSION_S;
    }

    int get_version() {
        return GNAR_VERSION;
    }
} // namespace gnar

void output_source(filesystem::path &target, uint32_t id, const vector<WemSoundbank> &banks, const vector<wem_pack> &packs) {
    for (auto bank : banks) {
        auto data  = bank.get_chunk_impl<WemData>();
        auto index = bank.get_chunk_impl<WemDataIndex>();

        if (data == nullptr || index == nullptr) {
            continue;
        }

        if (index->has_stream(id)) {
            if (!filesystem::exists(target)) {
                filesystem::create_directories(target);
            }
            auto wem_name = to_string(id) + ".wem";
            auto output   = target / wem_name;
            write_file(output, data->get_stream(index->streams[id]));
            return;
        }
    }

    for (auto pack : packs) {
        auto wem_name = to_wstring(id) + L".wem";
        auto output   = target / wem_name;
        if (pack.audio.contains(wem_name)) {
            if (!filesystem::exists(target)) {
                filesystem::create_directories(target);
            }
            write_file(output, *pack.audio[wem_name]);
            return;
        }
    }

    // todo: wem_pack
    cerr << "can't find wem id " << id << endl;
}

void find_source(filesystem::path &target, uint32_t id, const vector<WemSoundbank> &banks, const vector<wem_pack> &packs, set<uint32_t> &done) {
    if (!done.emplace(id).second) {
        return;
    }

    for (auto bank : banks) {
        auto hirc = bank.get_chunk_impl<WemHierarchy>();
        if (hirc == nullptr) {
            continue;
        }

        auto type = hirc->get_type(id);
        switch (type) {
            case WemHierarchySound::type: {
                auto sound = hirc->get_chunk<WemHierarchySound>(id);
                output_source(target, sound->source.source_id, banks, packs);
                return;
            }
            case WemHierarchyAction::type: {
                auto action = hirc->get_chunk<WemHierarchyAction>(id);
                find_source(target, action->target, banks, packs, done);
                return;
            }
            case WemHierarchyEvent::type: {
                auto event = hirc->get_chunk<WemHierarchyEvent>(id);
                for (auto action : event->actions) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchyContainer::type: {
                auto container = hirc->get_chunk<WemHierarchyContainer>(id);
                for (auto action : container->children) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchySwitch::type: {
                auto switch_container = hirc->get_chunk<WemHierarchySwitch>(id);
                for (auto action : switch_container->children) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchyMusic::type: {
                auto music = hirc->get_chunk<WemHierarchyMusic>(id);
                for (auto action : music->children) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchyMusicSegment::type: {
                auto segment = hirc->get_chunk<WemHierarchyMusicSegment>(id);
                for (auto action : segment->children) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchyMusicSwitch::type: {
                auto music_switch = hirc->get_chunk<WemHierarchyMusicSwitch>(id);
                for (auto action : music_switch->children) {
                    find_source(target, action, banks, packs, done);
                }
                return;
            }
            case WemHierarchyMusicTrack::type: {
                auto track = hirc->get_chunk<WemHierarchyMusicTrack>(id);
                for (auto source : track->sources) {
                    output_source(target, source.source_id, banks, packs);
                }
                return;
            }
            default:
                return;
        }
    }
}

void process(gnar::GnarConfiguration &gnar, const filesystem::path &output, const vector<filesystem::path> &bankPaths, const vector<string> &events, const vector<string> &tags, bool isVO) {
    vector<WemSoundbank> banks;
    vector<wem_pack> wem_packs;

    for (const auto &bank_path : bankPaths) {
        auto game_dir = gnar.game_dir / bank_path;
        if (!filesystem::exists(game_dir)) {
            cerr << "can't find " << bank_path << endl;
            continue;
        }

        auto data = read_file(game_dir);
        if (bank_path.extension() == ".wpk") {
            wem_packs.emplace_back(data);
        } else if (bank_path.extension() == ".bnk") {
            banks.emplace_back(data);
        }
    }

    string type = isVO ? "vo" : "sfx";
    for (auto event : events) {
        cout << "Processing event " << event << endl;
        if (!event.starts_with("Play_")) {
            continue;
        }
        auto cleaned_event = event;
        if (event.starts_with(string("Play_").append(type).append("_"))) {
            cleaned_event = event.substr(5 + type.size() + 1);
        }

        for (const auto &tag : tags) {
            auto prefix = string("Play_").append(type).append("_").append(tag).append("_");
            if (event.starts_with(prefix)) {
                cleaned_event = event.substr(prefix.size());
            }
        }
        auto target = output / cleaned_event;
        set<uint32_t> done;

        str_to_lower(event);
        find_source(target, fnv1_32(reinterpret_cast<uint8_t *>(event.data()), event.length()), banks, wem_packs, done);
    }
}

void process_bank_units(gnar::GnarConfiguration &gnar, const string &type, const shared_ptr<set_prop> &bankUnits, vector<string> &tags, set<string> &done_units) {
    if (bankUnits == nullptr) {
        return;
    }

    for (auto bankUnitPtr : bankUnits->value) {
        auto bankUnit = empty_prop::cast_prop<inline_structure_prop>(bankUnitPtr);

        auto bankPathsPtr = bankUnit->cast_prop<set_prop>(0x2a21ad00); // bankPath
        if (bankPathsPtr == nullptr) {
            continue;
        }
        auto eventsPtr = bankUnit->cast_prop<set_prop>(0x12d8e384); // events
        if (eventsPtr == nullptr) {
            continue;
        }
        auto namePtr = bankUnit->cast_prop<string_prop>(0x8d39bde6); // name
        if (namePtr == nullptr) {
            cerr << "can't find name!" << endl;
            continue;
        }
        auto name = namePtr->value;
        if (!done_units.emplace(name).second) {
            continue;
        }

        cout << "processing bank unit " << name << endl;

        auto isVOPtr = bankUnit->cast_prop<bool_prop>(0x3b13aa4b); // voiceOver
        auto isVO    = !(isVOPtr == nullptr) && isVOPtr->value;

        vector<string> localTag = tags;
        localTag.push_back(name);

        vector<filesystem::path> bankPaths;
        bankPaths.reserve(bankPathsPtr->value.size());
        for (auto bankPathPtr : bankPathsPtr->value) {
            bankPaths.emplace_back(empty_prop::cast_prop<string_prop>(bankPathPtr)->value);
        }
        vector<string> events;
        events.reserve(eventsPtr->value.size());
        for (auto eventPtr : eventsPtr->value) {
            events.push_back(empty_prop::cast_prop<string_prop>(eventPtr)->value);
        }

        if (name.ends_with("_VO")) {
            localTag.push_back(name.substr(0, name.length() - 3));
        }
        if (name.ends_with("_SFX")) {
            localTag.push_back(name.substr(0, name.length() - 4));
        }

        if (isVO) {
            if (!gnar.process_vo) {
                continue;
            }

            vector<filesystem::path> localedBankPaths;
            for (const auto &locale : gnar.locales) {
                for (auto bankPath : bankPaths) {
                    filesystem::path localizedBankPath;
                    do {
                        auto dir = bankPath.filename();
                        bankPath = bankPath.parent_path();
                        if (dir.string() == "en_US") {
                            localizedBankPath = filesystem::path(locale) / localizedBankPath;
                        } else {
                            localizedBankPath = dir / localizedBankPath;
                        }
                    } while (!bankPath.empty());
                    localedBankPaths.push_back(localizedBankPath.parent_path());
                }
                cout << "processing locale " << locale << endl;
                process(gnar, gnar.output_dir / (type + "VO") / locale / name, localedBankPaths, events, localTag, true);
            }
        } else {
            if (!gnar.process_sfx) {
                continue;
            }

            process(gnar, gnar.output_dir / (type + "SFX") / name, bankPaths, events, localTag, false);
        }
    }
}

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "gnar version " << gnar::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    gnar::GnarConfiguration gnar;
    if (!gnar::parse_configuration(argc, argv, gnar, exit_code)) {
        return exit_code;
    }

    set<string> done_units;
    for (const auto &target : find_paths(gnar.targets, {".bin"}, {})) {
        auto data = read_file(target);
        auto bin  = property_bin(data);

        for (auto &obj : bin.objects) {
            vector<string> tags;
            if (gnar.process_champ && obj->key == 0x9b67e9f6) {                               // SkinCharacterDataProperties
                auto skinAudioProperties = obj->cast_prop<inline_structure_prop>(0x8f7b194f); // skinAudioProperties
                if (skinAudioProperties != nullptr) {
                    auto tagEventList = skinAudioProperties->cast_prop<set_prop>(0xd65bac4d); // tagEventList
                    if (tagEventList != nullptr) {
                        tags.reserve(tagEventList->value.size());
                        for (auto tagPtr : tagEventList->value) {
                            tags.push_back(empty_prop::cast_prop<string_prop>(tagPtr)->value);
                        }
                    }

                    process_bank_units(gnar, "Skin", skinAudioProperties->cast_prop<set_prop>(0xf8f29f92), tags, done_units); // bankUnits
                }
            } else if (gnar.process_map && (obj->key == 0xb36da9ac || obj->key == 0xf2b58198)) {         // MapAudioDataProperties || FeatureAudioDataProperties
                process_bank_units(gnar, "Map", obj->cast_prop<set_prop>(0xf8f29f92), tags, done_units); // bankUnits
            }
        }
    }

    return 0;
}
