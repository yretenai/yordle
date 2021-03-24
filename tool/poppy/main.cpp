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
#include "poppy.hpp"

int main(int argc, char **argv) {
    std::cout << YORDLE_VERSION_S << std::endl;
    std::cout << POPPY_VERSION_S << std::endl;

    po::parser cli;
    PoppyConfiguration configuration = {};

    cli["fetch"]
            .abbreviation('F')
            .description("fetches manifests from CDN servers")
            .callback([&] { configuration.fetch = true; });

    cli["download"]
            .abbreviation('d')
            .description("downloads bundles defined by manifest from CDN servers")
            .callback([&] { configuration.download = true; });

    cli["decode"]
            .abbreviation('D')
            .description("decodes bundles")
            .callback([&] { configuration.decode = true; });

    cli["source"]
            .abbreviation('s')
            .description("source system to fetch manifests from\n(client_config, version_set, release_channel)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (str == "version_set") {
                    configuration.source = PoppySource::VersionSet;
                } else if (str == "release_channel") {
                    configuration.source = PoppySource::ReleaseChannel;
                } else {
                    if (str != "client_config") {
                        std::cout << "warn: unrecognized option " << str << " for PoppySource, defaulting to client_config" << std::endl;
                    }
                    configuration.source = PoppySource::ClientConfig;
                }
            });

    cli["cache"]
            .abbreviation('c')
            .description("downloads bundles defined by manifest from CDN servers")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                configuration.cache_dir = str;
            });

    cli["output"]
            .abbreviation('o')
            .description("downloads bundles defined by manifest from CDN servers")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                configuration.output_dir = str;
            });

    cli["manifest"]
            .abbreviation('m')
            .description("manifest url format")
            .type(po::string)
            .bind(configuration.manifest_format);

    cli["bundle"]
            .abbreviation('b')
            .description("bundle url format")
            .type(po::string)
            .bind(configuration.bundle_format);

    cli["threads"]
            .abbreviation('t')
            .description("number of concurrent threads to download")
            .type(po::i32)
            .bind(configuration.concurrency);

    cli[""]
            .bind(configuration.targets);

    auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

    if (!cli(argc, argv)) {
        std::cerr << "errored while parsing opts; aborting.\n";
        return -1;
    }

    if (help.was_set()) {
        std::cout << cli << std::endl;
        return 0;
    }

    if (configuration.concurrency < 1) {
        configuration.concurrency = std::thread::hardware_concurrency() > 0 ? std::thread::hardware_concurrency() : 1;
        std::cout << "warn: thread count is an invalid number, defaulting to " << configuration.concurrency << '.' << std::endl;
    }

    if (configuration.manifest_format.empty()) {
        switch (configuration.source) {
            case POPPY_SOURCE::ClientConfig:
                configuration.manifest_format = POPPY_DEFAULT_CLIENT_CONFIG_FORMAT;
                break;
            case POPPY_SOURCE::ReleaseChannel:
                configuration.manifest_format = POPPY_DEFAULT_RELEASE_CHANNEL_FORMAT;
                break;
            case POPPY_SOURCE::VersionSet:
                configuration.manifest_format = POPPY_DEFAULT_VERSION_SET_FORMAT;
                break;
        }
        std::cout << "warn: set manifest url format to " << configuration.manifest_format << '.' << std::endl;
    }

    if (configuration.targets.empty()) {
        std::cerr << "err: no targets specified." << std::endl;
        return 0;
    }

    if (configuration.fetch && !fetch(configuration)) {
        std::cerr << "err: failure during fetch operation" << std::endl;
        return 1;
    }

    if (configuration.download && !download(configuration)) {
        std::cerr << "err: failure during download operation" << std::endl;
        return 2;
    }

    if (configuration.decode && !decode(configuration)) {
        std::cerr << "err: failure during decode operation" << std::endl;
        return 3;
    }

    return 0;
}
