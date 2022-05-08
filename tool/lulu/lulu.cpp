//
// Created by Lilith on 2021-06-05.
//

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include <yordle/yordle.hpp>
#include <yordle/archive/wad_file.hpp>

#include "file_type_detector.hpp"
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
            .description("hash list path")
            .type(po::string)
            .multi()
            .callback([&](const po::string_t &str) {
                const std::filesystem::path &path = str;
                std::cout << "loading hash list " << path.filename() << std::endl;
                if (std::filesystem::exists(path)) {
                    auto buffer = dragon::read_file(path);
                    auto hash   = cdtb::xxhashlist(buffer);
                    lulu.hash_list.combine(hash);
                }
            });

        cli["test"]
            .type(po::string)
            .multi()
            .bind(lulu.tests);

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

    std::cout << "finding files..." << std::endl;
    auto has_tests = !lulu.tests.empty();

    for (const auto &wad_path : dragon::find_paths(lulu.targets, {".wad", ".client", ".mobile"}, {})) {
        std::cout << "processing " << wad_path.filename().string() << std::endl;
        auto stream = ifstream(wad_path, ios::in | ios::binary);
        auto wad    = yordle::archive::wad_file::load_wad_file(stream);

        if (wad == nullptr || wad->entries == nullptr) {
            stream.close();
            continue;
        }

        for (const auto &entry : *wad->entries) {
            auto entry_path = lulu.hash_list.get_path(entry.hash);
            if (lulu.dry_run) {
                continue;
            }

            auto output_path = lulu.output_dir / entry_path;
            auto output_dir  = output_path.parent_path();

            if (!filesystem::exists(output_dir)) {
                filesystem::create_directories(output_dir);
            }

            auto data = wad->read_file(stream, entry);
            if (!output_path.has_extension()) {
                auto detected = lulu::file_type_detector::detect_extension(data);
                if (!detected.empty()) {
                    output_path.replace_extension(detected);
                }
            }

            const auto generic = output_path.generic_string();

            if (has_tests) {
                auto success = false;
                for (const auto &test : lulu.tests) {
                    if (generic.find(test) != std::string::npos) {
                        success = true;
                        break;
                    }
                }

                if (!success) {
                    continue;
                }
            }

            cout << generic << endl;

            dragon::write_file(output_path, *data);
        }

        stream.close();
    }

    return 0;
}
