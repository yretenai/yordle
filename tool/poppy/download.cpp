//
// Created by Lilith on 3/24/2021.
//

#include "download.hpp"

#include <mutex>

#include <fmt/core.h>

#include "deploy.hpp"

using namespace std;
using namespace yordle::manifest;
using namespace dragon;

static mutex print_lock;

namespace poppy {
    void download(PoppyConfiguration &poppy, Array<uint8_t> &manifest_data, filesystem::path &target) {
        auto manifest = riot_manifest(manifest_data);

        auto cache = poppy.cache_dir / "bundles";
        if (!poppy.dry_run) {
            if (!filesystem::exists(cache)) {
                filesystem::create_directories(cache);
            }
        }

        cout << "target: " << target.string() << endl;

        cout << "---manifest mini dump---" << endl;
        auto indent = Indent(0);
        manifest.print(cout, indent, false);

        // why not just do execution::unseq -> both unseq and par_unseq are defined in pstl
        // if POPPY_THREADING is undefined because the system does not have PSTL, execution::unseq will also be undefined.
        auto ind = std::atomic<int>(0ul);
        auto max = manifest.bundle_ids.size();
#ifdef POPPY_THREADING
        for_each(execution::par_unseq, manifest.bundle_ids.cbegin(), manifest.bundle_ids.cend(), [poppy, cache, &ind, max](const auto &bundle_id) {
#else
        for (const auto &bundle_id : manifest.bundle_ids) {
#endif
            auto url = fmt::format(poppy.bundle_url, bundle_id);
            print_lock.lock();
            cout << "downloading (" << ++ind << "/" << max << ") " << url << endl;
            print_lock.unlock();
            auto filename = fmt::format(POPPY_BUNDLE_FILENAME_FORMAT, bundle_id);
            auto cache_path = cache / filename;
            if (filesystem::exists(cache_path)) {
#ifdef POPPY_THREADING
                return;
#else
                continue;
#endif
            }

            if (poppy.dry_run) {
#ifdef POPPY_THREADING
                return;
#else
                continue;
#endif
            }

            for (auto i = 0; i < 3; ++i) {
                auto bundle_data = download_curl(url, poppy.max_speed);
                if (bundle_data == nullptr) {
                    print_lock.lock();
                    cerr << "err: can't download bundle! attempt " << i + 1 << " of 3" << endl;
                    print_lock.unlock();
                    continue;
                }

                auto array = Array<uint8_t>(*bundle_data);
                write_file(cache_path, array);
                break;
            }
#ifdef POPPY_THREADING
        });
#else
        }
#endif

        auto path = poppy.output_dir / target;
        deploy(poppy, manifest, path);
    }
} // namespace poppy
