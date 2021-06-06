//
// Created by Lilith on 2021-06-05.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include "lulu.hpp"

using namespace std;
using namespace yordle;

namespace lulu {
    bool parse_configuration(int argc, char **argv, LuluConfiguration &lulu, int &exit_code) {
        po::parser cli;

        cli["output"]
            .abbreviation('o')
            .description("target output directory to save files to")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                lulu.output_dir = str;
            });

        cli["hash"]
            .abbreviation('H')
            .description("manifest url format")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (std::filesystem::exists(str)) {
                    ifstream stream(str, ios::in);
                    lulu.hash_list = cdtb::xxhashlist(stream);
                    stream.close();
                }
            });

        cli[""]
            .bind(lulu.targets);

        auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

        auto &dry = cli["dry"]
                        .abbreviation('n')
                        .description("targets are file paths to cached manifests");

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

        if (dry.was_set()) {
            lulu.dry_run = true;
        }

        if (lulu.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        return true;
    }

    string get_version_str() {
        return LULU_VERSION_S;
    }

    int get_version() {
        return LULU_VERSION;
    }
} // namespace lulu

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "lulu version " << lulu::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    lulu::LuluConfiguration lulu;
    if (!lulu::parse_configuration(argc, argv, lulu, exit_code)) {
        return exit_code;
    }

    for (const auto &wad_path : lulu.targets) {
        auto stream = ifstream(wad_path, ios::in | ios::binary);
        auto wad = yordle::archive::wad_file::load_wad_file(stream);

        for (const auto &entry : *wad->entries) {
            auto entry_path = lulu.hash_list.get_path(entry.hash);
            cout << entry_path.string() << endl;
            if (lulu.dry_run) {
                continue;
            }

            auto output_path = lulu.output_dir / entry_path;
            auto output_dir = output_path.parent_path();

            if (filesystem::exists(output_dir)) {
                if (!filesystem::is_directory(output_path)) {
                    filesystem::create_directories(output_dir.replace_filename(output_dir.filename().string() + ".dir"));
                }
            } else {
                filesystem::create_directories(output_dir);
            }

            auto data = wad->read_file(stream, entry);
            dragon::write_file(output_path, *data);
        }
    }

    return 0;
}
