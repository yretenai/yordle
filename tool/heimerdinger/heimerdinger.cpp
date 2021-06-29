//
// Created by Lilith on 2021-06-06.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <exception>
#include <ProgramOptions.hxx>

#include "heimerdinger.hpp"

using namespace std;
using namespace dragon;
using namespace yordle;

namespace heimerdinger {
    bool parse_configuration(int argc, char **argv, HeimerdingerConfiguration &heimerdinger, int &exit_code) {
        po::parser cli;

        cli["prop-entry"]
            .description("hash list path for property entries (binentries)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading entry hash list " << path.filename() << std::endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.fnv[cdtb::hashlist_target::prop_entry] = make_shared<cdtb::fnvhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli["prop-field"]
            .description("hash list path for property fields (binfields)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading field hash list " << path.filename() << std::endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.fnv[cdtb::hashlist_target::prop_field] = make_shared<cdtb::fnvhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli["prop-hash"]
            .description("hash list path for property hashes (binhashes)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading hash list " << path.filename() << std::endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.fnv[cdtb::hashlist_target::prop_hash] = make_shared<cdtb::fnvhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli["prop-type"]
            .description("hash list path for property types (bintypes)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading type hash list " << path.filename() << std::endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.fnv[cdtb::hashlist_target::prop_type] = make_shared<cdtb::fnvhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli["wad-hash"]
            .description("hash list path for wad files (game/lcu)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading wad hash list " << path.filename() << std::endl;
                if (std::filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.xx[cdtb::hashlist_target::wad_file] = make_shared<cdtb::xxhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli["rst-hash"]
            .description("hash list path for rst keys (strings)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading rst hash list " << path.filename() << std::endl;
                if (std::filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    heimerdinger.hashes.xx[cdtb::hashlist_target::rst_string] = make_shared<cdtb::xxhashlist>(buffer);
                } else {
                    std::cerr << path.string() << " does not exist!" << std::endl;
                }
            });

        cli[""]
            .bind(heimerdinger.targets);

        auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

        auto &version = cli["version"]
                            .abbreviation('v')
                            .description("print application version");

        auto &typeinfo = cli["typeinfo"]
                             .abbreviation('T')
                             .description("store type info in json output");

        if (!cli(argc, argv)) {
            cerr << "errored while parsing opts; aborting.\n";
            exit_code = -1;
            return false;
        }

        if (version.was_set()) {
            exit_code = 0;
            return false;
        }

        if (typeinfo.was_set()) {
            heimerdinger.store_type_info = true;
        }

        if (help.was_set()) {
            cout << cli << endl;
            exit_code = 0;
            return false;
        }

        if (heimerdinger.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        if (heimerdinger.hashes.xx.contains(cdtb::hashlist_target::rst_string)) {
            auto restricted                                            = heimerdinger.hashes.xx[cdtb::hashlist_target::rst_string]->restrict_bits(40);
            heimerdinger.hashes.xx[cdtb::hashlist_target::rst_string]  = restricted;
            heimerdinger.hashes.xx[cdtb::hashlist_target::rst4_string] = restricted->restrict_bits(39);
        }

        return true;
    }

    string get_version_str() {
        return HEIMERDINGER_VERSION_S;
    }

    int get_version() {
        return HEIMERDINGER_VERSION;
    }
} // namespace heimerdinger

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "heimerdinger version " << heimerdinger::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    heimerdinger::HeimerdingerConfiguration heimerdinger;
    if (!heimerdinger::parse_configuration(argc, argv, heimerdinger, exit_code)) {
        return exit_code;
    }

    std::cout << "finding files..." << std::endl;
    for (const auto &target : dragon::find_paths(heimerdinger.targets, {".bin", ".inibin", ".txt"}, {})) {
        std::cout << target.string() << std::endl;
        filesystem::path target_path = target;
        auto buffer                  = dragon::read_file(target_path);
        target_path                  = target_path.replace_extension(".json");

        nlohmann::json json;
#ifdef NDEBUG
        try {
#endif
            auto fourcc = buffer.cast<uint32_t>(0);
            if (fourcc == data::property_bin::FOURCC || fourcc == data::property_bin::FOURCC_PATCH) {
                auto prop = data::property_bin(buffer);
                json      = prop.to_json(heimerdinger.hashes, heimerdinger.store_type_info);
            } else if (static_cast<data::rst_version>(fourcc & 0xFFFFFF) == data::rst_version::v0) {
                auto rst = data::rst_file::load_rst_file(buffer);
                json     = rst->to_json(heimerdinger.hashes);
            } else {
                auto inibin = data::inibin::load_inibin_file(buffer);
                if (inibin == nullptr || inibin->properties.empty()) {
                    continue;
                }
                json = inibin->to_json(heimerdinger.hashes);
            }
#ifdef NDEBUG
        } catch (const std::exception &ex) {
            std::cerr << "error processing " << target.string() << " got exception " << ex.what() << std::endl;
        }
#endif

        ofstream file(target_path, ios::out | ios::trunc);
        auto json_text = json.dump(2, ' ', false, nlohmann::json::error_handler_t::replace);
        file.write(json_text.data(), (streamsize) json_text.size());
        file.flush();
        file.close();
    }

    return 0;
}
