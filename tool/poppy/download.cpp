//
// Created by Lilith on 3/24/2021.
//

#include "download.hpp"

#include <boost/format.hpp>

#define POPPY_BUNDLE_FILENAME_FORMAT "%016X.bundle"

bool poppy::download(PoppyConfiguration &poppy, dragon::Array<uint8_t> &manifest_data) {
    auto manifest = yordle::manifest::riot_manifest(manifest_data);

    auto cache = poppy.cache_dir / "bundles";
    if (!std::filesystem::exists(cache)) {
        std::filesystem::create_directories(cache);
    }

    // TODO: Thread this!
    for(const auto& bundle_pair : manifest.bundles) {
        auto url = boost::format(poppy.bundle_url) % bundle_pair.first;
        auto filename = boost::format(POPPY_BUNDLE_FILENAME_FORMAT) % bundle_pair.first;
        auto cache_path = cache / filename.str();
        if(std::filesystem::exists(cache_path)) {
            std::cout << "already downloaded " << url << std::endl;
            continue;
        }
        std::cout << "downloading " << url << std::endl;
        auto bundle_data = poppy::download(url.str());
        if (bundle_data == nullptr) {
            std::cerr << "err: can't download bundle!" << std::endl;
            continue;
        }
        auto array = dragon::Array<uint8_t>(*bundle_data);
        dragon::write_file(cache_path, array);
    }

    return true;
}
