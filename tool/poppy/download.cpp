//
// Created by Lilith on 3/24/2021.
//

#include "download.hpp"

#include <atomic>
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

        map<uint64_t, uint64_t> block_to_bundle_map;

        if (!poppy.fresh_install) {
            cout << "finding existing block ids..." << endl;
            auto bundles = deque<filesystem::path>();
            dragon::find_paths(cache, bundles, {".bundle"}, {});
            for (const auto &bundle_path : bundles) {
                auto file   = ifstream(bundle_path, ios::binary | ios::in);
                auto bundle = riot_bundle(file);
                for (const auto &bundle_block : *bundle.blocks) {
                    if (manifest.block_to_bundle_map.contains(bundle_block.block_id)) {
                        block_to_bundle_map[bundle_block.block_id] = bundle.id;
                    }
                }
            }
        }

        cout << "determining which bundles to download..." << endl;
        set<uint64_t> bundle_ids_to_download;
        for (const auto &bundle : manifest.bundles) {
            for (const auto &block : *bundle.second) {
                if (!block_to_bundle_map.contains(block.block_id)) {
                    bundle_ids_to_download.emplace(bundle.first);
                    block_to_bundle_map[block.block_id] = bundle.first;
                }
            }
        }

        // why not just do execution::unseq -> both unseq and par_unseq are defined in pstl
        // if POPPY_THREADING is undefined because the system does not have PSTL, execution::unseq will also be undefined.
        auto ind = atomic<int>(0);
        auto max = bundle_ids_to_download.size();

        cout << "downloading " << max << " bundles..." << endl;
#ifdef POPPY_THREADING
        for_each(execution::par_unseq, bundle_ids_to_download.cbegin(), bundle_ids_to_download.cend(), [poppy, cache, &ind, max](const auto &bundle_id) {
#else
        for (const auto &bundle_id : bundle_ids) {
#endif
            auto url = fmt::format(poppy.bundle_url, bundle_id);
            print_lock.lock();
            cout << "downloading (" << ++ind << "/" << max << ") " << url << endl;
            print_lock.unlock();
            auto filename   = fmt::format(POPPY_BUNDLE_FILENAME_FORMAT, bundle_id);
            auto cache_path = cache / filename;
            if (filesystem::exists(cache_path)) {
#ifdef POPPY_THREADING
                print_lock.lock();
                cout << "skipping " << url << endl;
                print_lock.unlock();
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
        deploy(poppy, manifest, path, block_to_bundle_map);
    }
} // namespace poppy
