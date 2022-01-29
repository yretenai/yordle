//
// Created by Naomi on 2020-08-25.
//

#include <ostream>

#ifndef NDEBUG
#    define PROGRAMOPTIONS_NO_COLORS
#endif
#include <ProgramOptions.hxx>

#include <curl/curl.h>

#include "deploy.hpp"
#include "fetch.hpp"

using namespace std;
using namespace yordle;

namespace poppy {
    bool parse_configuration(int argc, char **argv, PoppyConfiguration &poppy, int &exit_code) {
        po::parser cli;

        cli["cache"]
            .abbreviation('c')
            .description("directory to store bundle files")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                poppy.cache_dir = str;
            });

        cli["dump"]
            .abbreviation('d')
            .description("dump bundle urls to output path")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                poppy.dump_path = str;
            });

        cli["output"]
            .abbreviation('o')
            .description("directory to deploy files")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                poppy.output_dir = str;
            });

        cli["old"]
            .abbreviation('O')
            .description("old manifest to compare against (will only actualize changed files)")
            .type(po::string)
            .callback([&](const po::string_t &str) {
                if (filesystem::exists(str)) {
                    cout << "loading old manifest... ";
                    auto manifest_data = dragon::read_file(str);
                    poppy.old_manifest = make_shared<manifest::riot_manifest>(manifest_data);
                    cout << HEXLOG64 << poppy.old_manifest->id << endl;
                } else {
                    cerr << str << " doesn't exist!" << endl;
                }
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

        cli["platform"]
            .abbreviation('p')
            .description("target platform to download")
            .type(po::string)
            .bind(poppy.platform);

        cli["throttle"]
            .abbreviation('t')
            .description("download speed limit (per thread) in bytes")
            .type(po::i64)
            .bind(poppy.max_speed);

        auto &configurations = cli["configurations"]
                                   .abbreviation('C')
                                   .description("configurations to actualize")
                                   .type(po::string)
                                   .multi();

        auto &filters = cli["filters"]
                            .abbreviation('f')
                            .description("paths to filter")
                            .type(po::string)
                            .multi();

        auto &languages = cli["languages"]
                              .abbreviation('l')
                              .description("languages to download")
                              .type(po::string)
                              .multi();

        auto &skip_generic = cli["skip-generic"]
                                 .description("skips files with no language");

        auto &generic = cli["generic"]
                            .description("only process files with no language");

        auto &no_suffix = cli["no-suffix"]
                              .description("do not suffix deploy path with the release id");

        auto &help = cli["help"]
                         .abbreviation('h')
                         .description("print this help screen");

        auto &offline = cli["local-manifest"]
                            .abbreviation('B')
                            .description("targets are file paths to cached manifests");

        auto &dry = cli["dry"]
                        .abbreviation('n')
                        .description("read-only mode");

        auto &deploy = cli["no-deploy"]
                           .abbreviation('N')
                           .description("only download bundle files");

        auto &client_config = cli["client-config"]
                                  .abbreviation('L')
                                  .description("cdn data is from patch-lines, not sieve");

        auto &decompress = cli["decompress"]
                               .abbreviation('X')
                               .description("targets are bundle files to decompress");

        auto &no_sub = cli["no-sub"]
                           .abbreviation('S')
                           .description("do not process sub configurations");

        auto &fresh_install = cli["fresh-install"]
                                  .description("do not use bundles from previous versions");

        auto &all_bundles = cli["all-bundles"]
                               .description("Download all bundle files even if they are not referenced");

        auto &version = cli["version"]
                            .abbreviation('v')
                            .description("print application version");

        cli[""]
            .bind(poppy.targets);

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

        poppy.is_offline           = offline.was_set();
        poppy.dry_run              = dry.was_set();
        poppy.no_deploy            = deploy.was_set();
        poppy.no_sub_configuration = no_sub.was_set();
        poppy.fresh_install        = fresh_install.was_set();
        poppy.skip_generic         = skip_generic.was_set();
        poppy.generic              = generic.was_set();
        poppy.no_suffix            = no_suffix.was_set();
        poppy.all_bundles          = all_bundles.was_set();
        poppy.decompress           = decompress.was_set();

        if (poppy.targets.empty()) {
            cerr << "err: no targets specified." << endl;
            exit_code = 1;
            return false;
        }

        poppy.is_client_config = client_config.was_set();
        if (poppy.is_client_config) {
            if (poppy.manifest_url == POPPY_DEFAULT_SIEVE_URL) {
                poppy.manifest_url = POPPY_DEFAULT_MANIFEST_URL;
                cout << "warn: updating manifest url to " << poppy.manifest_url << endl;
            }

            if (poppy.platform == "windows") {
                poppy.platform = "win";
                cout << "warn: updating platform to " << poppy.platform << endl;
            }

            if (poppy.no_suffix) {
                cout << "warn: disabling --no-suffix due to incompatibilities" << endl;
            }
        }

        if (configurations.was_set()) {
            auto vec             = configurations.to_vector<po::string>();
            poppy.configurations = set<string>(vec.begin(), vec.end());
        } else {
            if (!poppy.decompress) {
                if (poppy.is_client_config) {
                    poppy.configurations = {"na1", "default", "na"};
                    cout << "warn: no configurations set, defaulting to na, na1, default" << endl;
                } else if (!poppy.is_offline) {
                    poppy.configurations = {"NA1"};
                    cout << "warn: no configurations set, defaulting to NA1" << endl;
                }
            }
        }

        if (filters.was_set()) {
            auto vec      = filters.to_vector<po::string>();
            poppy.filters = set<string>(vec.begin(), vec.end());
        }

        if (languages.was_set()) {
            auto vec               = languages.to_vector<po::string>();
            poppy.language_filters = set<string>(vec.begin(), vec.end());
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

    int exit_code                   = 0;
    poppy::PoppyConfiguration poppy = {};
    if (!poppy::parse_configuration(argc, argv, poppy, exit_code)) {
        return exit_code;
    }

    try {
        if (poppy.is_offline) {
            poppy::fetch_local(poppy);
        } else if (poppy.is_client_config) {
            poppy::fetch_client_config(poppy);
        } else if (poppy.decompress) {
            poppy::deploy_bundles(poppy);
        } else {
            poppy::fetch_sieve(poppy);
        }
    } catch (std::exception &e) {
        cerr << "error: " << e.what() << endl;
        cerr.flush();
        return -7685;
    }


    return 0;
}
