//
// Created by Lilith on 2020-08-25.
//

#include <ostream>

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>
#include <curl/curl.h>

#include "fetch.hpp"

using namespace std;
using namespace yordle;

namespace poppy {
    bool parse_configuration(int argc, char **argv, PoppyConfiguration &poppy, int &exit_code) {
        po::parser cli;

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

        cli["speed-limit"]
                .description("download speed limit (per thread) in bytes")
                .type(po::i64)
                .bind(poppy.max_speed);

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

        if (offline.was_set()) {
            poppy.is_offline = true;
        }

        if (deploy.was_set()) {
            poppy.no_deploy = true;
        }

        if (poppy.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        if (client_config.was_set()) {
            poppy.is_client_config = true;
            if (poppy.manifest_url == POPPY_DEFAULT_SIEVE_URL) {
                poppy.manifest_url = POPPY_DEFAULT_MANIFEST_URL;
                cout << "warn: updating manifest url to " << poppy.manifest_url << endl;
            }
        }

        if (configurations.was_set()) {
            auto vec = configurations.to_vector<po::string>();
            poppy.configurations = set<string>(vec.begin(), vec.end());
        } else {
            if (poppy.is_client_config) {
                poppy.configurations = {"na1", "default", "na"};
                cout << "warn: no configurations set, defaulting to na, na1, default" << endl;
            } else if (!poppy.is_offline) {
                poppy.configurations = {"NA1"};
                cout << "warn: no configurations set, defaulting to NA1" << endl;
            }
        }

        return true;
    }

    static size_t append_vector(void *contents, size_t size, size_t nmemb, void *userp) {
        auto vec = (vector<uint8_t> *) userp;
        vec->insert(vec->end(), (uint8_t *) contents, (uint8_t *) contents + (size * nmemb));
        return size * nmemb;
    }

    shared_ptr<vector<uint8_t>> download_curl(const string &url, int64_t speed_limit) {
        shared_ptr<vector<uint8_t>> ptr = make_shared<vector<uint8_t>>();
        CURL *curl;
        CURLcode res;

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, append_vector);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, ptr.get());
            curl_easy_setopt(curl, CURLOPT_MAX_RECV_SPEED_LARGE, static_cast<curl_off_t>(speed_limit));
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

    string get_version_str() {
        return POPPY_VERSION_S;
    }

    int get_version() {
        return POPPY_VERSION;
    }
} // namespace poppy

int main(int argc, char **argv) {
    cout << "yordle version " << get_version_str() << endl;
    cout << "poppy version " << poppy::get_version_str() << endl;

    if (get_version() != YORDLE_VERSION) {
        cout << "warn: Yordle version is " << get_version() << " expected version " << YORDLE_VERSION << " (" << YORDLE_VERSION_S << ")! behavior is undefined!" << endl;
    }

    int exit_code = 0;
    poppy::PoppyConfiguration poppy = {};
    if (!poppy::parse_configuration(argc, argv, poppy, exit_code)) {
        return exit_code;
    }

    if (poppy.is_offline) {
        poppy::fetch_local(poppy);
    } else if (poppy.is_client_config) {
        poppy::fetch_client_config(poppy);
    } else {
        poppy::fetch_sieve(poppy);
    }


    return 0;
}
