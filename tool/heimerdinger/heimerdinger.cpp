//
// Created by Lilith on 2021-06-06.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include "heimerdinger.hpp"

using namespace std;
using namespace yordle;

namespace heimerdinger {
    bool parse_configuration(int argc, char **argv, HeimerdingerConfiguration &heimerdinger, int &exit_code) {
        po::parser cli;

        cli["bin-entries"]
            .description("bin entries hashlist path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (filesystem::exists(str)) {
                    auto buffer = dragon::read_file(str);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    heimerdinger.hash_list.combine(hash);
                }
            });

        cli["bin-fields"]
            .description("bin fields hashlist path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (filesystem::exists(str)) {
                    auto buffer = dragon::read_file(str);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    heimerdinger.hash_list.combine(hash);
                }
            });

        cli["bin-hashes"]
            .description("bin hashes hashlist path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (filesystem::exists(str)) {
                    auto buffer = dragon::read_file(str);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    heimerdinger.hash_list.combine(hash);
                }
            });

        cli["bin-types"]
            .description("bin types hashlist path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (filesystem::exists(str)) {
                    auto buffer = dragon::read_file(str);
                    auto hash   = cdtb::fnvhashlist(buffer);
                    heimerdinger.hash_list.combine(hash);
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

    auto hashlist = cdtb::fnvhashlist();

    for (const auto &target : heimerdinger.targets) {
        filesystem::path target_path = target;
        auto buffer                  = dragon::read_file(target_path);

        if (target_path.extension() == ".json") {
            target_path = target_path.replace_extension(".bin");
            // encode
        } else {
            target_path = target_path.replace_extension(".json");
            // decode
            if (buffer[0] == 'P') {
                // property bin
            } else {
                auto inibin = data::inibin::load_inibin_file(buffer);
                auto json   = inibin->dump(heimerdinger.hash_list);
                ofstream file(target_path, ios::out | ios::trunc);
                file.write(json.dump(2, ' ', false, nlohmann::json::error_handler_t::replace).data(), (streamsize) json.size());
                file.flush();
                file.close();
            }
        }
    }

    return 0;
}
