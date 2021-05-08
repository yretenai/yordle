//
// Created by Lilith on 3/24/2021.
//

#include "deploy.hpp"

#include <fmt/core.h>

using namespace std;
using namespace yordle::manifest;
using namespace dragon;

namespace poppy {
    void deploy(PoppyConfiguration &poppy, riot_manifest &manifest, filesystem::path &deploy_path) {
        if (poppy.no_deploy) {
            return;
        }

        // pass 1: build directory skeleton
        auto directory_cache = map<uint64_t, filesystem::path>();
        for (const auto &directory_pair : manifest.directories) {
            auto normalized_path = manifest.get_directory_path(directory_pair.first);
            auto resolved = deploy_path / normalized_path;
            directory_cache[directory_pair.first] = resolved;
            if (filesystem::exists(resolved)) {
                cout << "warn: skipping " << normalized_path << " already exists" << endl;
                continue;
            }
            cout << "creating directory " << normalized_path << endl;
            filesystem::create_directories(resolved);
        }

        auto cache = poppy.cache_dir / "bundles";

        // pass 2: time to d-d-d-duel
        for (const auto &file_pair : manifest.files) {
            auto file_info = file_pair.second;
            auto directory_path = deploy_path / to_string(file_info.directory_id);
            if (directory_cache.contains(file_info.directory_id)) {
                directory_path = directory_cache[file_info.directory_id];
            }

            directory_path /= file_info.name;

            // i don't want to talk about it.
            auto stream = ofstream(directory_path, ios::binary | ios::out | ios::trunc);
            cout << "writing " << directory_path << endl;
            auto bundle_cache = map<uint64_t, shared_ptr<riot_bundle>>();

            for (const auto &block_id : *file_info.block_ids) {
                if (!manifest.block_to_bundle_map.contains(block_id)) {
                    cerr << "err: can't find block id " << HEXLOG64 << block_id << endl;
                    continue;
                }

                // don't
                auto bundle_id = manifest.block_to_bundle_map[block_id];
                if (!bundle_cache.contains(bundle_id)) {
                    auto filename = cache / fmt::format(POPPY_BUNDLE_FILENAME_FORMAT, bundle_id);
                    auto bundle_data = read_file(filename);
                    bundle_cache[bundle_id] = make_shared<riot_bundle>(bundle_data);
                }
                bundle_cache[bundle_id]->read_block(block_id, stream);
            }

            bundle_cache.clear();

            stream.flush();
            stream.close();
        }
    }
} // namespace poppy
