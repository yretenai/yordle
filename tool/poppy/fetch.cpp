//
// Created by Lilith on 3/24/2021.
//


#include <string>

#include <boost/format.hpp>
#include <openssl/sha.h>

#include "download.hpp"
#include "fetch.hpp"

void process_configuration(const std::filesystem::path &cache, const yordle::sieve::models::configuration &configuration, poppy::PoppyConfiguration &poppy, std::filesystem::path path) {
    auto url = configuration.patch_url == nullptr ? configuration.url : configuration.patch_url;
    if (url == nullptr) {
        std::cerr << "err: manifest url is null!" << std::endl;
        return;
    }
    auto manifest_name = url->substr(url->find_last_of('/') + 1);
    auto cache_target = cache / manifest_name;
    dragon::Array<uint8_t> array;
    if (std::filesystem::exists(cache_target)) {
        std::cout << "using cached " << manifest_name << std::endl;
        array = dragon::read_file(cache_target);
    } else {
        std::cout << "downloading " << *url << std::endl;
        auto manifest_data = poppy::download_curl(*url, poppy.max_speed);
        if (manifest_data == nullptr) {
            std::cerr << "err: can't download manifest" << std::endl;
            return;
        }
        array = dragon::Array<uint8_t>(*manifest_data);
        dragon::write_file(cache_target, array);
    }

    poppy::download(poppy, array, path);
}

void poppy::fetch_client_config(PoppyConfiguration &poppy) {
    for (const auto &target : poppy.targets) {
        auto cache = poppy.cache_dir;
        if (!std::filesystem::exists(cache)) {
            std::filesystem::create_directories(cache);
        }

        auto url = boost::format(poppy.manifest_url) % target;
        std::cout << "downloading " << url << std::endl;
        auto data = poppy::download_curl(url.str(), poppy.max_speed);
        if (data == nullptr) {
            std::cerr << "err: can't download client config" << std::endl;
            continue;
        }
        auto array = dragon::Array<uint8_t>(*data);
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256(array.data(), array.byte_size(), hash);
        std::stringstream ss;
        for (unsigned char i : hash) {
            ss << std::setfill('0') << std::setw(2) << std::hex << (int) i;
        }
        auto cache_target = cache / (target + "_" + ss.str() + ".json");
        if (!std::filesystem::exists(cache_target)) {
            dragon::write_file(cache_target, array);
        }

        auto config = yordle::sieve::client_config(array.to_string());
        for (const auto &patchline : *config.data) {
            std::cout << "processing " << *patchline.second.metadata->at("default").full_name << std::endl;

            cache = poppy.cache_dir / patchline.first;
            if (!std::filesystem::exists(cache)) {
                std::filesystem::create_directories(cache);
            }

            auto resolved_path = std::filesystem::path(patchline.first);

            if (patchline.second.metadata != nullptr && patchline.second.metadata->contains("default")) {
                auto metadata = patchline.second.metadata->at("default");
                if (metadata.path_name != nullptr) {
                    resolved_path = std::filesystem::path(*metadata.path_name);
                }
            }

            for (const auto &configuration : *patchline.second.platforms->at("win").configurations) {
                auto id = *configuration.id;
                if (poppy.configurations.find(id) == poppy.configurations.end()) {
                    continue;
                }
                std::cout << "processing configuration " << id << std::endl;

                process_configuration(cache, configuration, poppy, resolved_path / id);

                if (configuration.secondary_patchlines != nullptr) {
                    for (const auto &sub_configuration : *configuration.secondary_patchlines) {
                        process_configuration(cache, sub_configuration, poppy, resolved_path / id / resolved_path);
                    }
                }
            }
        }
    }
}

void poppy::fetch_sieve(PoppyConfiguration &poppy) {
    for (const auto &target : poppy.targets) {
        for (const auto &configuration : poppy.configurations) {
            auto cache = poppy.cache_dir;
            if (!std::filesystem::exists(cache)) {
                std::filesystem::create_directories(cache);
            }

            auto url = boost::format(poppy.manifest_url) % configuration % target;
            std::cout << "downloading " << url << std::endl;
            auto data = poppy::download_curl(url.str(), poppy.max_speed);
            if (data == nullptr) {
                std::cerr << "err: can't download client config" << std::endl;
                continue;
            }
            auto array = dragon::Array<uint8_t>(*data);
            unsigned char hash[SHA256_DIGEST_LENGTH];
            SHA256(array.data(), array.byte_size(), hash);
            std::stringstream ss;
            for (unsigned char i : hash) {
                ss << std::setfill('0') << std::setw(2) << std::hex << (int) i;
            }
            auto cache_target = cache / (target + configuration + "_" + ss.str() + ".json");
            if (!std::filesystem::exists(cache_target)) {
                dragon::write_file(cache_target, array);
            }

            auto config = yordle::sieve::version_set(array.to_string());
            for (const auto &release : *config.data->releases) {
                auto id = *release.compat_version->id;
                std::cout << "processing version " << id << std::endl;
                auto resolved_path = std::filesystem::path(id);

                auto manifest_url = release.download->url;
                if (manifest_url == nullptr) {
                    std::cerr << "err: manifest url is null!" << std::endl;
                    continue;
                }
                auto manifest_name = manifest_url->substr(manifest_url->find_last_of('/') + 1);
                auto manifest_cache_target = cache / manifest_name;
                dragon::Array<uint8_t> manifest_array;
                if (std::filesystem::exists(manifest_cache_target)) {
                    std::cout << "using cached " << manifest_name << std::endl;
                    manifest_array = dragon::read_file(manifest_cache_target);
                } else {
                    std::cout << "downloading " << *manifest_url << std::endl;
                    auto manifest_data = poppy::download_curl(*manifest_url, poppy.max_speed);
                    if (manifest_data == nullptr) {
                        std::cerr << "err: can't download manifest" << std::endl;
                        continue;
                    }
                    manifest_array = dragon::Array<uint8_t>(*manifest_data);
                    dragon::write_file(manifest_cache_target, manifest_array);
                }

                poppy::download(poppy, manifest_array, resolved_path);
            }
        }
    }
}

void poppy::fetch_local(PoppyConfiguration &poppy) {
    for (const auto &target : poppy.targets) {
        auto resolved_path = std::filesystem::path(target).stem();
        std::cout << "processing manifest " << resolved_path << std::endl;
        if (!std::filesystem::exists(target)) {
            std::cerr << target << " does not exist!" << std::endl;
            continue;
        }
        auto manifest_array = dragon::read_file(target);
        poppy::download(poppy, manifest_array, resolved_path);
    }
}
