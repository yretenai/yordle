//
// Created by Lilith on 2021-06-12.
//

#include <ProgramOptions.hxx>
#include <standard_dragon/WemSoundbank.hpp>

#include "gnar.hpp"

using namespace std;
using namespace dragon;
using namespace yordle;

namespace gnar {
    bool parse_configuration(int argc, char **argv, GnarConfiguration &gnar, int &exit_code) {
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
                    gnar.hash_list.combine(hash);
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
                    gnar.file_hash_list.combine(hash);
                }
            });

        auto &output = cli["output"]
                           .abbreviation('o')
                           .description("output directory")
                           .type(po::string)
                           .bind(gnar.output);

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

        return true;
    }

    string get_version_str() {
        return GNAR_VERSION_S;
    }

    int get_version() {
        return GNAR_VERSION;
    }
} // namespace gnar

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

    return 0;
}
