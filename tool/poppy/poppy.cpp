//
// Created by Lilith on 2020-08-25.
//

#include <ostream>
#include <thread>

#ifndef NDEBUG
#define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include "decode.hpp"
#include "download.hpp"
#include "fetch.hpp"

namespace poppy {
    PoppyConfiguration parse_configuration(int argc, char **argv, int &exit_code) {
        po::parser cli;
        PoppyConfiguration poppy = {};

        cli["fetch"]
                .abbreviation('F')
                .description("fetches manifests from CDN servers")
                .callback([&] { poppy.fetch = true; });

        cli["download"]
                .abbreviation('d')
                .description("downloads bundles defined by manifest from CDN servers")
                .callback([&] { poppy.download = true; });

        cli["decode"]
                .abbreviation('D')
                .description("decodes bundles")
                .callback([&] { poppy.decode = true; });

        cli["source"]
                .abbreviation('s')
                .description("source system to fetch manifests from\n(client_config, version_set, release_channel)")
                .type(po::string)
                .callback([&](const po::string_t &str) {
                    if (str == "version_set") {
                        poppy.source = PoppySource::VersionSet;
                    } else if (str == "release_channel") {
                        poppy.source = PoppySource::ReleaseChannel;
                    } else {
                        if (str != "client_config") {
                            std::cout << "warn: unrecognized option " << str << " for PoppySource, defaulting to client_config" << std::endl;
                        }
                        poppy.source = PoppySource::ClientConfig;
                    }
                });

        cli["cache"]
                .abbreviation('c')
                .description("downloads bundles defined by manifest from CDN servers")
                .type(po::string)
                .callback([&](const po::string_t &str) {
                    poppy.cache_dir = str;
                });

        cli["output"]
                .abbreviation('o')
                .description("downloads bundles defined by manifest from CDN servers")
                .type(po::string)
                .callback([&](const po::string_t &str) {
                    poppy.output_dir = str;
                });

        cli["manifest"]
                .abbreviation('m')
                .description("manifest url format")
                .type(po::string)
                .bind(poppy.manifest_format);

        cli["bundle"]
                .abbreviation('b')
                .description("bundle url format")
                .type(po::string)
                .bind(poppy.bundle_format);

        cli["threads"]
                .abbreviation('t')
                .description("number of concurrent threads to download")
                .type(po::i32)
                .bind(poppy.concurrency);

        cli[""]
                .bind(poppy.targets);

        auto &help = cli["help"]
                             .abbreviation('h')
                             .description("print this help screen");

        auto &version = cli["version"]
                                .abbreviation('v')
                                .description("print application version");

        if (!cli(argc, argv)) {
            std::cerr << "errored while parsing opts; aborting.\n";
            exit_code = -1;
            return poppy;
        }

        if (version.was_set()) {
            exit_code = 0;
            return poppy;
        }

        if (help.was_set()) {
            std::cout << cli << std::endl;
            exit_code = 0;
            return poppy;
        }

        if (poppy.concurrency < 1) {
            poppy.concurrency = std::thread::hardware_concurrency() > 0 ? std::thread::hardware_concurrency() : 1;
            std::cout << "warn: thread count is an invalid number, defaulting to " << poppy.concurrency << '.' << std::endl;
        }

        if (poppy.manifest_format.empty()) {
            switch (poppy.source) {
                case poppy::PoppySource::ClientConfig:
                    poppy.manifest_format = POPPY_DEFAULT_CLIENT_CONFIG_FORMAT;
                    break;
                case poppy::PoppySource::ReleaseChannel:
                    poppy.manifest_format = POPPY_DEFAULT_RELEASE_CHANNEL_FORMAT;
                    break;
                case poppy::PoppySource::VersionSet:
                    poppy.manifest_format = POPPY_DEFAULT_VERSION_SET_FORMAT;
                    break;
            }
            std::cout << "warn: set manifest url format to " << poppy.manifest_format << '.' << std::endl;
        }

        if (poppy.targets.empty()) {
            std::cerr << "err: no targets specified." << std::endl;
        }

        return poppy;
    }
} // namespace poppy

int main(int argc, char **argv) {
    std::cout << YORDLE_VERSION_S << std::endl;
    std::cout << POPPY_VERSION_S << std::endl;

    int exit_code = POPPY_SAFE_EXIT_CODE;
    auto poppy = poppy::parse_configuration(argc, argv, exit_code);
    if (exit_code != POPPY_SAFE_EXIT_CODE) {
        return exit_code;
    }

    if (poppy.fetch && !poppy::fetch(poppy)) {
        std::cerr << "err: failure during fetch operation" << std::endl;
        return 1;
    }

    if (poppy.download && !poppy::download(poppy)) {
        std::cerr << "err: failure during download operation" << std::endl;
        return 2;
    }

    if (poppy.decode && !poppy::decode(poppy)) {
        std::cerr << "err: failure during decode operation" << std::endl;
        return 3;
    }

    return 0;
}
