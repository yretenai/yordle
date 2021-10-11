//
// Created by Lilith on 2021-06-19.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include <string>

#include <nlohmann/json.hpp>

#include "norra.hpp"
#include "model.hpp"
#include "template.hpp"

using namespace std;
using namespace dragon;
using namespace yordle;
using namespace nlohmann;

namespace norra {
    bool parse_configuration(int argc, char **argv, NorraConfiguration &norra, int &exit_code) {
        po::parser cli;

        cli["prop-field"]
            .description("hash list path for property fields (binfields)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                const filesystem::path &path = str;
                cout << "loading hash list " << path.filename() << endl;
                if (filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);

                    norra.hashes.fnv[cdtb::hashlist_target::prop_field] = make_shared<cdtb::fnvhashlist>(buffer);
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

                    norra.hashes.fnv[cdtb::hashlist_target::prop_type] = make_shared<cdtb::fnvhashlist>(buffer);
                }
            });

        auto &yordle_dir = cli["out"]
                               .abbreviation('o')
                               .description("path to yordle source dir")
                               .type(po::string)
                               .callback([&](const po::string_t &str) {
                                   norra.yordle_dir = str;
                               });

        auto &meta_file = cli["in"]
                              .abbreviation('i')
                              .description("path to meta json file")
                              .type(po::string)
                              .callback([&](const po::string_t &str) {
                                  norra.meta_file = str;
                              });

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

        if (help.was_set()) {
            cout << cli << endl;
            exit_code = 0;
            return false;
        }

        if (!yordle_dir.was_set()) {
            cerr << "err: needs an output directory" << endl;
            exit_code = 2;
            return false;
        }

        if (!meta_file.was_set()) {
            cerr << "err: needs a meta file" << endl;
            exit_code = 3;
            return false;
        }

        return true;
    }

    string get_version_str() {
        return NORRA_VERSION_S;
    }

    int get_version() {
        return NORRA_VERSION;
    }
} // namespace norra
