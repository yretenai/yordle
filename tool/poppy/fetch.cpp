//
// Created by Lilith on 3/24/2021.
//


#include <string>

#include <boost/format.hpp>
#include <openssl/sha.h>

#include "download.hpp"
#include "fetch.hpp"

bool process_configuration(const std::filesystem::path &cache, const yordle::sieve::models::configuration &configuration, poppy::PoppyConfiguration &poppy, std::filesystem::path path) {
    auto url = configuration.patch_url == nullptr ? configuration.url : configuration.patch_url;
    if (url == nullptr) {
        std::cerr << "err: manifest url is null!" << std::endl;
        return false;
    }
    auto manifest_name = url->substr(url->find_last_of('/') + 1);
    auto cache_target = cache / manifest_name;
    dragon::Array<uint8_t> array;
    if (std::filesystem::exists(cache_target)) {
        std::cout << "using cached " << manifest_name << std::endl;
        array = dragon::read_file(cache_target);
    } else {
        std::cout << "downloading " << *url << std::endl;
        auto manifest_data = poppy::download_curl(*url);
        if (manifest_data == nullptr) {
            std::cerr << "err: can't download manifest" << std::endl;
            return false;
        }
        array = dragon::Array<uint8_t>(*manifest_data);
        dragon::write_file(cache_target, array);
    }

    return poppy::download(poppy, array, path);
}

bool poppy::fetch(PoppyConfiguration &poppy) {
    for (const auto &target : poppy.targets) {
        dragon::Array<uint8_t> array;

        auto cache = poppy.cache_dir / "sieve";
        if (!std::filesystem::exists(cache)) {
            std::filesystem::create_directories(cache);
        }

        if (poppy.offline_config) {
            array = dragon::read_file(target);
        } else {
            auto url = boost::format(poppy.manifest_url) % target;
            std::cout << "downloading " << url << std::endl;
            auto data = poppy::download_curl(url.str());
            if (data == nullptr) {
                std::cerr << "err: can't download client config" << std::endl;
                continue;
            }
            array = dragon::Array<uint8_t>(*data);
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
        }

        auto config = yordle::sieve::client_config(array.to_string());
        for (const auto &patchline : *config.data) {
            std::cout << "processing " << *patchline.second.metadata->at("default").full_name << std::endl;

            cache = poppy.cache_dir / "sieve" / patchline.first;
            if (!std::filesystem::exists(cache)) {
                std::filesystem::create_directories(cache);
            }

            auto resolved_path = std::filesystem::path(patchline.first);

            if(patchline.second.metadata != nullptr && patchline.second.metadata->contains("default")) {
                auto metadata = patchline.second.metadata->at("default");
                if(metadata.path_name != nullptr) {
                    resolved_path = std::filesystem::path(*metadata.path_name);
                }
            }

            for (const auto &configuration : *patchline.second.platforms->at("win").configurations) {
                auto id = *configuration.id;
                if (poppy.configurations.find(id) == poppy.configurations.end()) {
                    continue;
                }
                std::cout << "processing configuration " << id << std::endl;

                if (!process_configuration(cache, configuration, poppy, resolved_path / id)) {
                    std::cerr << "err: cannot process configuration!" << std::endl;
                    continue;
                }

                if (configuration.secondary_patchlines != nullptr) {
                    for (const auto &sub_configuration : *configuration.secondary_patchlines) {
                        if (!process_configuration(cache, sub_configuration, poppy, resolved_path / id / resolved_path)) {
                            std::cerr << "err: cannot process configuration!" << std::endl;
                            continue;
                        }
                    }
                }
            }
        }
    }

    return true;
}
