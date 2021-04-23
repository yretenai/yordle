//
// Created by Lilith on 3/24/2021.
//

#include "download.hpp"

#include <mutex>

#include <boost/format.hpp>

#include "deploy.hpp"

static std::mutex print_lock;

void poppy::download(PoppyConfiguration &poppy, dragon::Array<uint8_t> &manifest_data, std::filesystem::path &target) {
    auto manifest = yordle::manifest::riot_manifest(manifest_data);

    auto cache = poppy.cache_dir / "bundles";
    if (!std::filesystem::exists(cache)) {
        std::filesystem::create_directories(cache);
    }

    // why not just do std::execution::unseq -> both unseq and par_unseq are defined in pstl
    // if POPPY_THREADING is undefined because the system does not have PSTL, std::execution::unseq will also be undefined.
#ifdef POPPY_THREADING
    std::for_each(std::execution::par_unseq, manifest.bundles.cbegin(), manifest.bundles.cend(), [poppy, cache](const auto &bundle_pair) {
#else
    for (const auto &bundle_pair : manifest.bundles) {
#endif
        auto url = boost::format(poppy.bundle_url) % bundle_pair.first;
        auto filename = boost::format(POPPY_BUNDLE_FILENAME_FORMAT) % bundle_pair.first;
        auto cache_path = cache / filename.str();
        if (std::filesystem::exists(cache_path)) {
            print_lock.lock();
            std::cout << "already downloaded " << url << std::endl;
            print_lock.unlock();
#ifdef POPPY_THREADING
            return;
#else
            continue;
#endif
        }

        print_lock.lock();
        std::cout << "downloading " << url << std::endl;
        print_lock.unlock();

        for (auto i = 0; i < 3; ++i) {
            auto bundle_data = poppy::download_curl(url.str(), poppy.max_speed);
            if (bundle_data == nullptr) {
                print_lock.lock();
                std::cerr << "err: can't download bundle! attempt " << i + 1 << " of 3" << std::endl;
                print_lock.unlock();
                continue;
            }

            auto array = dragon::Array<uint8_t>(*bundle_data);
            dragon::write_file(cache_path, array);
            break;
        }
#ifdef POPPY_THREADING
    });
#else
    }
#endif

    auto path = poppy.output_dir / target;
    poppy::deploy(poppy, manifest, path);
}
