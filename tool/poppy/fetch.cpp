//
// Created by Naomi on 3/24/2021.
//


#include <string>

#include <format>
#include <openssl/sha.h>

#include "download.hpp"
#include "fetch.hpp"

using namespace std;
using namespace yordle::sieve;
using namespace dragon;

namespace poppy {
    void process_configuration(const filesystem::path &cache, const configuration &configuration, PoppyConfiguration &poppy, filesystem::path path) {
        auto url = configuration.patch_url == nullptr ? configuration.url : configuration.patch_url;
        if (url == nullptr) {
            cerr << "err: manifest url is null!" << endl;
            return;
        }
        auto bundles_url = configuration.bundles_url;
        if (bundles_url != nullptr) {
            poppy.bundle_host = std::string(*bundles_url);
        } else {
            poppy.bundle_host = POPPY_DEFAULT_BUNDLE_HOST;
        }
        auto manifest_name = url->substr(url->find_last_of('/') + 1);
        auto cache_target  = cache / manifest_name;
        path += std::string("+") + std::filesystem::path(manifest_name).replace_extension().string();
        Array<uint8_t> array;
        if (filesystem::exists(cache_target)) {
            cout << "using cached " << manifest_name << endl;
            array = read_file(cache_target);
        } else {
            cout << "downloading " << *url << endl;
            auto manifest_data = download_curl(*url, 0);
            if (manifest_data == nullptr) {
                cerr << "err: can't download manifest" << endl;
                return;
            }
            array = Array<uint8_t>(*manifest_data);
            if (!poppy.dry_run) {
                write_file(cache_target, array);
            }
        }

        download(poppy, array, path);
    }

    void fetch_client_config(PoppyConfiguration &poppy) {
        poppy.bundle_template = POPPY_DEFAULT_BUNDLE_TEMPLATE;

        for (const auto &target : poppy.targets) {
            auto cache = poppy.cache_dir;
            if (!poppy.dry_run && !filesystem::exists(cache)) {
                filesystem::create_directories(cache);
            }

            auto url = format(poppy.manifest_url, target);
            cout << "downloading " << url << endl;
            auto data = download_curl(url, 0);
            if (data == nullptr) {
                cerr << "err: can't download client config" << endl;
                continue;
            }
            auto array = Array<uint8_t>(*data);
            unsigned char hash[SHA256_DIGEST_LENGTH];
            SHA256(array.data(), array.byte_size(), hash);
            stringstream str_stream;
            for (unsigned char i : hash) {
                str_stream << setfill('0') << setw(2) << hex << (int) i;
            }
            auto cache_target = cache / format("{0:s}_{1:s}.json", target, str_stream.str());
            if (!poppy.dry_run && !filesystem::exists(cache_target)) {
                write_file(cache_target, array);
            }

            client_config config = json::parse(array.to_string());
            for (const auto &patchline : config) {
                cout << "processing " << *patchline.second.metadata->at("default").full_name << endl;

                if (!patchline.second.platforms->contains(poppy.platform)) {
                    cerr << "does not have the " << poppy.platform << " platform" << endl;
                    continue;
                }

                cache = poppy.cache_dir;
                if (!poppy.dry_run && !filesystem::exists(cache)) {
                    filesystem::create_directories(cache);
                }

                auto resolved_path = filesystem::path(patchline.first);

                if (patchline.second.metadata != nullptr && patchline.second.metadata->contains("default")) {
                    auto metadata = patchline.second.metadata->at("default");
                    if (metadata.path_name != nullptr) {
                        resolved_path = filesystem::path(*metadata.path_name);
                    }
                }

                for (const auto &configuration : *patchline.second.platforms->at(poppy.platform).configurations) {
                    auto id = *configuration.id;
                    if (poppy.configurations.find(id) == poppy.configurations.end()) {
                        continue;
                    }
                    cout << "processing configuration " << id << endl;

                    process_configuration(cache, configuration, poppy, resolved_path / id);

                    if (configuration.secondary_patchlines != nullptr && !poppy.no_sub_configuration) {
                        for (const auto &sub_configuration : *configuration.secondary_patchlines) {
                            process_configuration(cache, sub_configuration, poppy, resolved_path / id / std::filesystem::path(*sub_configuration.path));
                        }
                    }
                }
            }
        }
    }

    void fetch_sieve(PoppyConfiguration &poppy) {
        for (const auto &target : poppy.targets) {
            for (const auto &configuration : poppy.configurations) {
                auto cache = poppy.cache_dir;
                if (!poppy.dry_run && !filesystem::exists(cache)) {
                    filesystem::create_directories(cache);
                }

                auto url = format(poppy.manifest_url, configuration, target, poppy.platform);
                cout << "downloading " << url << endl;
                auto data = download_curl(url, 0);
                if (data == nullptr) {
                    cerr << "err: can't download client config" << endl;
                    continue;
                }
                auto array = Array<uint8_t>(*data);
                unsigned char hash[SHA256_DIGEST_LENGTH];
                SHA256(array.data(), array.byte_size(), hash);
                stringstream str_stream;
                for (unsigned char i : hash) {
                    str_stream << setfill('0') << setw(2) << hex << (int) i;
                }
                auto cache_target = cache / format("{0:s}_{1:s}_{2:s}.json", target, configuration, str_stream.str());
                if (!poppy.dry_run && !filesystem::exists(cache_target)) {
                    write_file(cache_target, array);
                }

                version_set config = json::parse(array.to_string());
                for (const auto &release : *config.releases) {
                    auto id = *release.compat_version->id;
                    cout << "processing version " << id << endl;
                    auto resolved_path = filesystem::path(id);

                    auto manifest_url = release.download->url;
                    if (manifest_url == nullptr) {
                        cerr << "err: manifest url is null!" << endl;
                        continue;
                    }
                    auto manifest_name = manifest_url->substr(manifest_url->find_last_of('/') + 1);
                    resolved_path += std::string("+") + std::filesystem::path(manifest_name).replace_extension().string();
                    auto manifest_cache_target = cache / manifest_name;
                    Array<uint8_t> manifest_array;
                    if (filesystem::exists(manifest_cache_target)) {
                        cout << "using cached " << manifest_name << endl;
                        manifest_array = read_file(manifest_cache_target);
                    } else {
                        cout << "downloading " << *manifest_url << endl;
                        auto manifest_data = download_curl(*manifest_url, 0);
                        if (manifest_data == nullptr) {
                            cerr << "err: can't download manifest" << endl;
                            continue;
                        }
                        manifest_array = Array<uint8_t>(*manifest_data);
                        if (!poppy.dry_run) {
                            write_file(manifest_cache_target, manifest_array);
                        }
                    }

                    download(poppy, manifest_array, resolved_path);
                }
            }
        }
    }

    void fetch_local(PoppyConfiguration &poppy) {
        for (const auto &target : poppy.targets) {
            auto resolved_path = filesystem::path(target).stem();
            cout << "processing manifest " << resolved_path << endl;
            if (!filesystem::exists(target)) {
                cerr << target << " does not exist!" << endl;
                continue;
            }
            auto manifest_name = std::filesystem::path(target).filename().replace_extension().string();
            resolved_path += std::string("+") + manifest_name;
            auto manifest_array = read_file(target);
            download(poppy, manifest_array, resolved_path);
        }
    }
} // namespace poppy
