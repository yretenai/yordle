//
// Created by Lilith on 2020-08-25.
//

#include <ostream>
#include <thread>

#ifndef NDEBUG
#define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>
#include <curl/curl.h>

#include "fetch.hpp"

namespace poppy {
    PoppyConfiguration parse_configuration(int argc, char **argv, int &exit_code) {
        po::parser cli;
        PoppyConfiguration poppy = {};

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
                .bind(poppy.manifest_url);

        cli["bundle"]
                .abbreviation('b')
                .description("bundle url format")
                .type(po::string)
                .bind(poppy.bundle_url);

        auto &configurations = cli["configurations"]
                                       .abbreviation('C')
                                       .description("configurations to actualize")
                                       .type(po::string)
                                       .multi();

        cli[""]
                .bind(poppy.targets);

        auto &help = cli["help"]
                             .abbreviation('h')
                             .description("print this help screen");

        auto &offline = cli["local-manifest"]
                                .abbreviation('B')
                                .description("targets are file paths to cached manifests");

        auto &deploy = cli["no-deploy"]
                                .description("only download bundle files");

        auto &client_config = cli["client-config"]
                                      .description("cdn data is from patch-lines, not sieve");

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

        if (offline.was_set()) {
            poppy.is_offline = true;
        }

        if (deploy.was_set()) {
            poppy.no_deploy = true;
        }

        if (poppy.targets.empty()) {
            std::cerr << "err: no targets specified." << std::endl;
            exit_code = 1;
            return poppy;
        }

        if (client_config.was_set()) {
            poppy.is_client_config = true;
            if (poppy.manifest_url == POPPY_DEFAULT_SIEVE_URL) {
                poppy.manifest_url = POPPY_DEFAULT_MANIFEST_URL;
                std::cout << "warn: updating manifest url to " << poppy.manifest_url << std::endl;
            }
        }

        if (configurations.was_set()) {
            auto vec = configurations.to_vector<po::string>();
            poppy.configurations = std::set<std::string>(vec.begin(), vec.end());
        } else {
            if(poppy.is_client_config) {
                poppy.configurations = {"na1", "default", "na"};
                std::cout << "warn: no configurations set, defaulting to na, na1, default" << std::endl;
            } else if(!poppy.is_offline) {
                poppy.configurations = {"NA1"};
                std::cout << "warn: no configurations set, defaulting to NA1" << std::endl;
            }
        }

        return poppy;
    }

    static size_t append_vector(void *contents, size_t size, size_t nmemb, void *userp) {
        auto vec = (std::vector<uint8_t> *) userp;
        vec->insert(vec->end(), (uint8_t *) contents, (uint8_t *) contents + (size * nmemb));
        return size * nmemb;
    }

    std::unique_ptr<std::vector<uint8_t>> download_curl(const std::string &url) {
        std::unique_ptr<std::vector<uint8_t>> ptr = std::make_unique<std::vector<uint8_t>>();
        CURL *curl;
        CURLcode res;

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, append_vector);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, ptr.get());
            res = curl_easy_perform(curl);
            long response_code;
            if (curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code) != CURLE_OK) {
                response_code = 200;
            }
            curl_easy_cleanup(curl);
            if (res != CURLE_OK) return nullptr;
            if (response_code != 200) return nullptr;
            return ptr;
        }

        return nullptr;
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

    if (poppy.is_offline) {
        if (!poppy::fetch_local(poppy)) {
            std::cerr << "err: failure during local operation" << std::endl;
            return 1;
        }
    } else if (poppy.is_client_config) {
        if (!poppy::fetch_client_config(poppy)) {
            std::cerr << "err: failure during client config operation" << std::endl;
            return 1;
        }
    } else {
        if (!poppy::fetch_sieve(poppy)) {
            std::cerr << "err: failure during sieve operation" << std::endl;
            return 1;
        }
    }


    return 0;
}
