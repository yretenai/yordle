//
// Created by Lilith on 3/24/2021.
//


#include <algorithm>

#include <boost/format.hpp>

#include "fetch.hpp"
#include "download.hpp"

bool process_configuration(const std::filesystem::path& cache, const yordle::sieve::models::configuration& configuration, poppy::PoppyConfiguration &poppy) {
    auto url = configuration.patch_url == nullptr ? configuration.url : configuration.patch_url;
    if(url == nullptr) {
        std::cerr << "err: manifest url is null!" << std::endl;
        return false;
    }
    std::cout << "downloading " << *url << std::endl;
    auto manifest_data = poppy::download(*url);
    if (manifest_data == nullptr) {
        std::cerr << "err: can't download manifest" << std::endl;
        return false;
    }
    auto array = dragon::Array<uint8_t>(*manifest_data);
    auto manifest_name = url->substr(url->find_last_of('/') + 1);
    dragon::write_file(cache / manifest_name, array);

    return poppy::download(poppy, array);
}

bool poppy::fetch(PoppyConfiguration &poppy) {
    for(const auto &target : poppy.targets) {
        auto url = boost::format(poppy.manifest_url) % target;
        std::cout << "downloading " << url << std::endl;
        auto data = poppy::download(url.str());
        if(data == nullptr) {
            std::cerr << "err: can't download client config" << std::endl;
            continue;
        }
        auto cache = poppy.cache_dir / "sieve";
        if (!std::filesystem::exists(cache)) {
            std::filesystem::create_directories(cache);
        }
        auto array = dragon::Array<uint8_t>(*data);
        dragon::write_file(cache / (target + ".json"), array);

        auto config = yordle::sieve::client_config(array.to_string());
        for(const auto &patchline : *config.data) {
            std::cout << "processing " << *patchline.second.metadata->at("default").full_name << std::endl;

            cache = poppy.cache_dir / "sieve" / patchline.first;
            if (!std::filesystem::exists(cache)) {
                std::filesystem::create_directories(cache);
            }

            for(const auto &configuration : *patchline.second.platforms->at("win").configurations) {
                auto id = *configuration.id;
                if (poppy.configurations.find(id) == poppy.configurations.end()) {
                    continue;
                }
                std::cout << "processing configuration " << id << std::endl;

                if(!process_configuration(cache, configuration, poppy)) {
                    std::cerr << "err: cannot process configuration!" << std::endl;
                    continue;
                }

                if(configuration.secondary_patchlines != nullptr) {
                    for (const auto &sub_configuration : *configuration.secondary_patchlines) {
                        if(!process_configuration(cache, sub_configuration, poppy)) {
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
