//
// Created by Lilith on 2021-06-17.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <exception>
#include <ProgramOptions.hxx>

#include "teemo.hpp"

using namespace std;
using namespace dragon;
using namespace yordle;

namespace teemo {
    bool parse_configuration(int argc, char **argv, TeemoConfiguration &teemo, int &exit_code) {
        po::parser cli;

        cli["prop-entry"]
            .description("hash list path for property entries (binentries)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.fnv[cdtb::hashlist_target::prop_entry] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        cli["prop-field"]
            .description("hash list path for property fields (binfields)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.fnv[cdtb::hashlist_target::prop_field] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        cli["prop-hash"]
            .description("hash list path for property hashes (binhashes)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.fnv[cdtb::hashlist_target::prop_hash] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        cli["prop-type"]
            .description("hash list path for property types (bintypes)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.fnv[cdtb::hashlist_target::prop_type] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        cli["wad-hash"]
            .description("hash list path for wad files (game/lcu)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.xx[cdtb::hashlist_target::wad_file] = make_shared<cdtb::xxhashlist>(buffer);
                }
            });

        cli["rst-hash"]
            .description("hash list path for rst keys (strings)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    teemo.hashes.xx[cdtb::hashlist_target::rst_string] = make_shared<cdtb::xxhashlist>(buffer);
                }
            });

        auto &output = cli["output"]
                           .abbreviation('o')
                           .description("output directory")
                           .type(po::string)
                           .callback([&](const po::string_t &str) {
                               teemo.output_dir = str;
                           });


        cli[""]
            .bind(teemo.targets);

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

        if (teemo.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        if (!output.was_set()) {
            cerr << "err: needs an output directory" << endl;
            exit_code = 2;
            return false;
        }

        return true;
    }

    string get_version_str() {
        return TEEMO_VERSION_S;
    }

    int get_version() {
        return TEEMO_VERSION;
    }
} // namespace teemo

void find_hashes(std::shared_ptr<data::prop::empty_prop> &prop, set<uint32_t> &prop_entries, set<uint32_t> &prop_types, set<uint32_t> &prop_fields, set<uint32_t> &prop_hashes, set<uint64_t> &wad_hashes) {
    if (prop == nullptr) {
        return;
    }

    if (prop->key != 0) {
        prop_fields.insert(prop->key);
    }

    switch (prop->type) {
        case data::prop::prop_type::uint32: {
            auto uint_prop = data::prop::empty_prop::cast_prop<data::prop::uint32_prop>(prop);
            if (uint_prop != nullptr && uint_prop->value != 0) {
                prop_hashes.insert(uint_prop->value);
            }
            break;
        }
        case data::prop::prop_type::fnv_hash: {
            auto fnv_prop = data::prop::empty_prop::cast_prop<data::prop::fnv_hash_prop>(prop);
            if (fnv_prop != nullptr && fnv_prop->value != 0) {
                prop_hashes.insert(fnv_prop->value);
            }
            break;
        }
        case data::prop::prop_type::xx_hash: {
            auto xx_prop = data::prop::empty_prop::cast_prop<data::prop::xx_hash_prop>(prop);
            if (xx_prop != nullptr && xx_prop->value != 0) {
                wad_hashes.insert(xx_prop->value);
            }
            break;
        }
        case data::prop::prop_type::set: {
            auto set_prop = data::prop::empty_prop::cast_prop<data::prop::set_prop>(prop);
            if (set_prop != nullptr) {
                for (auto sub_prop : set_prop->value) {
                    find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                }
            }
            break;
        }
        case data::prop::prop_type::unordered_set: {
            auto set_prop = data::prop::empty_prop::cast_prop<data::prop::unordered_set_prop>(prop);
            if (set_prop != nullptr) {
                for (auto sub_prop : set_prop->value) {
                    find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                }
            }
            break;
        }
        case data::prop::prop_type::structure: {
            auto structure_prop = data::prop::empty_prop::cast_prop<data::prop::structure_prop>(prop);
            if (structure_prop != nullptr) {
                prop_types.insert(structure_prop->class_hash);
                for (const auto &pair : structure_prop->value) {
                    prop_hashes.insert(pair.first);
                    auto sub_prop = pair.second;
                    find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                }
            }
            break;
        }
        case data::prop::prop_type::inline_structure: {
            auto structure_prop = data::prop::empty_prop::cast_prop<data::prop::inline_structure_prop>(prop);
            if (structure_prop != nullptr) {
                prop_types.insert(structure_prop->class_hash);
                for (const auto &pair : structure_prop->value) {
                    prop_hashes.insert(pair.first);
                    auto sub_prop = pair.second;
                    find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                }
            }
            break;
        }
        case data::prop::prop_type::reference: {
            auto ref_prop = data::prop::empty_prop::cast_prop<data::prop::reference_prop>(prop);
            if (ref_prop != nullptr) {
                prop_entries.insert(ref_prop->value);
            }
            break;
        }
        case data::prop::prop_type::optional: {
            auto opt_prop = data::prop::empty_prop::cast_prop<data::prop::optional_prop>(prop);
            if (opt_prop != nullptr) {
                auto sub_prop = opt_prop->value;
                find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
            }
            break;
        }
        case data::prop::prop_type::map: {
            auto map_prop = data::prop::empty_prop::cast_prop<data::prop::map_prop>(prop);
            if (map_prop != nullptr) {
                for (const auto &pair : map_prop->value) {
                    auto key_prop = pair.first;
                    find_hashes(key_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                    auto value_prop = pair.second;
                    find_hashes(value_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                }
            }
            break;
        }
        default:
            break;
    }
}

void find_values(std::shared_ptr<data::prop::empty_prop> &prop, set<uint32_t> &prop_entries, set<uint32_t> &prop_types, set<uint32_t> &prop_fields, set<uint32_t> &prop_hashes, set<uint64_t> &wad_hashes, set<uint64_t> &rst_hashes, teemo::TeemoConfiguration &teemo) {
    if (prop == nullptr) {
        return;
    }

    switch (prop->type) {
        case data::prop::prop_type::string: {
            auto string_prop = data::prop::empty_prop::cast_prop<data::prop::string_prop>(prop);
            if (string_prop != nullptr) {
                auto value    = string_prop->value;
                auto fnv_hash = cdtb::fnvhashlist::hash(value);
                if (prop_entries.contains(fnv_hash)) {
                    teemo.hashes.fnv[cdtb::hashlist_target::prop_entry]->hashes[fnv_hash] = value;
                }
                if (prop_types.contains(fnv_hash)) {
                    teemo.hashes.fnv[cdtb::hashlist_target::prop_type]->hashes[fnv_hash] = value;
                }
                if (prop_fields.contains(fnv_hash)) {
                    teemo.hashes.fnv[cdtb::hashlist_target::prop_field]->hashes[fnv_hash] = value;
                }
                if (prop_hashes.contains(fnv_hash)) {
                    teemo.hashes.fnv[cdtb::hashlist_target::prop_hash]->hashes[fnv_hash] = value;
                }
                auto xx_hash = cdtb::xxhashlist::hash(value);
                if (wad_hashes.contains(xx_hash)) {
                    teemo.hashes.xx[cdtb::hashlist_target::wad_file]->hashes[xx_hash] = value;
                }
                auto xx_hash40 = xx_hash & 0x7fffffffff;
                auto xx_hash39 = xx_hash & 0xffffffffff;
                if (rst_hashes.contains(xx_hash40) || rst_hashes.contains(xx_hash39)) {
                    teemo.hashes.xx[cdtb::hashlist_target::rst_string]->hashes[xx_hash] = value;
                }
            }
            break;
        }
        case data::prop::prop_type::set: {
            auto set_prop = data::prop::empty_prop::cast_prop<data::prop::set_prop>(prop);
            if (set_prop != nullptr) {
                for (auto sub_prop : set_prop->value) {
                    find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
            break;
        }
        case data::prop::prop_type::unordered_set: {
            auto set_prop = data::prop::empty_prop::cast_prop<data::prop::unordered_set_prop>(prop);
            if (set_prop != nullptr) {
                for (auto sub_prop : set_prop->value) {
                    find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
            break;
        }
        case data::prop::prop_type::structure: {
            auto structure_prop = data::prop::empty_prop::cast_prop<data::prop::structure_prop>(prop);
            if (structure_prop != nullptr) {
                for (const auto &pair : structure_prop->value) {
                    auto sub_prop = pair.second;
                    find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
            break;
        }
        case data::prop::prop_type::inline_structure: {
            auto structure_prop = data::prop::empty_prop::cast_prop<data::prop::inline_structure_prop>(prop);
            if (structure_prop != nullptr) {
                for (const auto &pair : structure_prop->value) {
                    auto sub_prop = pair.second;
                    find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
            break;
        }
        case data::prop::prop_type::optional: {
            auto opt_prop = data::prop::empty_prop::cast_prop<data::prop::optional_prop>(prop);
            if (opt_prop != nullptr) {
                auto sub_prop = opt_prop->value;
                find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
            }
            break;
        }
        case data::prop::prop_type::map: {
            auto map_prop = data::prop::empty_prop::cast_prop<data::prop::map_prop>(prop);
            if (map_prop != nullptr) {
                for (const auto &pair : map_prop->value) {
                    auto key_prop = pair.first;
                    find_values(key_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                    auto value_prop = pair.second;
                    find_values(value_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
            break;
        }
        default:
            break;
    }
}

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "teemo version " << teemo::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    teemo::TeemoConfiguration teemo;
    if (!teemo::parse_configuration(argc, argv, teemo, exit_code)) {
        return exit_code;
    }

    teemo.hashes.init_empty();

    cout << "finding files to build hash database..." << endl;
    auto targets = dragon::find_paths(teemo.targets, {".bin", ".inibin", ".txt", ".wad", ".mobile", ".client"}, {});

    set<uint32_t> prop_entries;
    set<uint32_t> prop_types;
    set<uint32_t> prop_fields;
    set<uint32_t> prop_hashes;
    set<uint64_t> wad_hashes;
    set<uint64_t> rst_hashes;

    cout << "building hash database..." << endl;
    for (const auto &target : targets) {
        try {
            ifstream file(target, ios::binary | ios::in);
            uint32_t fourcc;
            file.read(reinterpret_cast<char *>(&fourcc), sizeof(uint32_t));
            file.seekg(0, ios::beg);
            if (static_cast<archive::wad_version>(fourcc & 0xFFFF) == archive::wad_version::v0_0) {
                auto wad = archive::wad_file::load_wad_file(file);
                if (wad != nullptr && wad->entries != nullptr) {
                    for (const auto &entry : *wad->entries) {
                        wad_hashes.insert(entry.hash);
                    }
                }
            } else {
                auto buffer = dragon::read_file(target);
                if (fourcc == data::property_bin::FOURCC || fourcc == data::property_bin::FOURCC_PATCH) {
                    auto prop = data::property_bin(buffer);
                    for (const auto &pair : prop.objects) {
                        const auto &obj = pair.second;
                        if (obj == nullptr) {
                            continue;
                        }

                        prop_types.insert(obj->key);
                        prop_entries.insert(obj->class_hash);

                        for (const auto &property : obj->value) {
                            prop_fields.insert(property.first);

                            auto sub_prop = property.second;
                            find_hashes(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes);
                        }
                    }
                } else if (static_cast<data::rst_version>(fourcc & 0xFFFFFF) == data::rst_version::v0) {
                    auto rst = data::rst_file::load_rst_file(buffer);

                    for (const auto &entry : rst->strings) {
                        rst_hashes.insert(entry.first);
                    }
                } else {
                    auto inibin = data::inibin::load_inibin_file(buffer);
                    if (inibin == nullptr || inibin->properties.empty()) {
                        continue;
                    }

                    for (const auto &entry : inibin->properties) {
                        prop_fields.insert(entry.first);
                    }
                }
            }
        } catch (const std::exception &ex) {
            cerr << "error processing " << target.string() << " got exception " << ex.what() << endl;
        }
    }

    cout << "finding values..." << endl;
    for (const auto &target : targets) {
        try {
            if (target.extension() != ".bin") {
                continue;
            }

            auto buffer = dragon::read_file(target);
            auto fourcc = buffer.cast<uint32_t>(0);
            if (fourcc != data::property_bin::FOURCC && fourcc != data::property_bin::FOURCC_PATCH) {
                continue;
            }

            auto prop = data::property_bin(buffer);
            for (const auto &pair : prop.objects) {
                const auto &obj = pair.second;
                if (obj == nullptr) {
                    continue;
                }

                for (const auto &property : obj->value) {
                    auto sub_prop = property.second;
                    find_values(sub_prop, prop_entries, prop_types, prop_fields, prop_hashes, wad_hashes, rst_hashes, teemo);
                }
            }
        } catch (const std::exception &ex) {
            cerr << "error processing " << target.string() << " got exception " << ex.what() << endl;
        }
    }

    cout << "saving..." << endl;
    if (!filesystem::exists(teemo.output_dir)) {
        filesystem::create_directories(teemo.output_dir);
    }

    std::map<cdtb::hashlist_target, std::string> names {
        {cdtb::hashlist_target::prop_entry, "binentry"},
        {cdtb::hashlist_target::prop_field, "binfield"},
        {cdtb::hashlist_target::prop_hash, "binhash"},
        {cdtb::hashlist_target::prop_type, "bintype"},
        {cdtb::hashlist_target::wad_file, "game"},
        {cdtb::hashlist_target::rst_string, "string"}};

    const std::string prefix = "hashes.";
    const std::string ext    = ".txt";

    for (const auto &pair : teemo.hashes.fnv) {
        if (!names.contains(pair.first)) {
            continue;
        }

        std::string filename = prefix;
        filename += names[pair.first];
        filename += ext;
        cout << filename << endl;

        auto target = teemo.output_dir / filename;
        ofstream file(target, ios::out);
        pair.second->save(file);
        file.close();
    }

    for (const auto &pair : teemo.hashes.xx) {
        if (!names.contains(pair.first)) {
            continue;
        }

        std::string filename = prefix;
        filename += names[pair.first];
        filename += ext;
        cout << filename << endl;

        auto target = teemo.output_dir / filename;
        ofstream file(target, ios::out);
        pair.second->save(file);
        file.close();
    }

    return 0;
}
