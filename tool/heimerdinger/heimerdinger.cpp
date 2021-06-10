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

        cli["fnv-hash"]
            .abbreviation('F')
            .description("fnv hash list path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading hash list " << path.filename() << std::endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    heimerdinger.hash_list.combine(hash);
                }
            });

        cli["xx-hash"]
            .abbreviation('H')
            .description("xx hash list path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading hash list " << path.filename() << std::endl;
                if (std::filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);
                    auto hash   = cdtb::xxhashlist(buffer);
                    heimerdinger.file_hash_list.combine(hash);
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
    for (const auto &target : dragon::find_paths(heimerdinger.targets, {".bin", ".inibin"}, {})) {
        std::cout << target.string() << std::endl;
        filesystem::path target_path = target;
        auto buffer                  = dragon::read_file(target_path);
        target_path                  = target_path.replace_extension(".json");

        nlohmann::json json;
        try {
            if (buffer[0] == 'P') {
                auto prop = data::property_bin(buffer);
                json      = prop.to_json(heimerdinger.hash_list, heimerdinger.file_hash_list, heimerdinger.store_type_info);
            } else {
                auto inibin = data::inibin::load_inibin_file(buffer);
                json        = inibin->to_json(heimerdinger.hash_list);
            }
        } catch (const std::exception &ex) {
            std::cerr << "error processing " << target.string() << " got exception " << ex.what() << std::endl;
        }

        ofstream file(target_path, ios::out | ios::trunc);
        auto json_text = json.dump(2, ' ', false, nlohmann::json::error_handler_t::replace);
        file.write(json_text.data(), (streamsize) json_text.size());
        file.flush();
        file.close();
    }

    return 0;
}
