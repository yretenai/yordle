//
// Created by Lilith on 3/24/2021.
//

#include "deploy.hpp"

#include <fmt/core.h>

using namespace std;
using namespace yordle::manifest;
using namespace dragon;

namespace poppy {
    void deploy(PoppyConfiguration &poppy, riot_manifest &manifest, filesystem::path &deploy_path, map<uint64_t, uint64_t> &block_to_bundle_map) {
        if (poppy.no_deploy || poppy.dry_run) {
            return;
        }

        auto directory_cache = map<uint64_t, filesystem::path>();
        for (const auto &directory_pair : manifest.directories) {
            auto normalized_path                  = manifest.get_directory_path(directory_pair.first);
            auto resolved                         = deploy_path / normalized_path;
            directory_cache[directory_pair.first] = resolved;
            if (filesystem::exists(resolved)) {
                cout << "warn: skipping " << normalized_path << " already exists" << endl;
                continue;
            }
            cout << "creating directory " << normalized_path << endl;
            filesystem::create_directories(resolved);
        }

        auto bundle_cache = map<uint64_t, riot_bundle>();
        auto cache        = poppy.cache_dir / "bundles";

        for (const auto &file_pair : manifest.files) {
            auto file_info      = file_pair.second;
            auto directory_path = deploy_path / to_string(file_info.directory_id);
            if (directory_cache.contains(file_info.directory_id)) {
                directory_path = directory_cache[file_info.directory_id];
            }

            directory_path /= file_info.name;

            for (const auto &block_id : *file_info.block_ids) {
                if (!block_to_bundle_map.contains(block_id)) {
                    cerr << "err: can't find block id " << HEXLOG64 << block_id << endl;
                    continue;
                }

                auto bundle_id = block_to_bundle_map[block_id];
                if (!bundle_cache.contains(bundle_id)) {
                    auto bundle_path = std::filesystem::absolute(cache / fmt::format(POPPY_BUNDLE_FILENAME_FORMAT, bundle_id));
                    if (!filesystem::exists(bundle_path)) {
                        cerr << "err: can't find cached block file " << HEXLOG64 << block_id << endl;
                        continue;
                    }

                    try {
                        auto buffer             = dragon::read_file(bundle_path);
                        auto bundle             = riot_bundle(buffer);
                        bundle_cache[bundle_id] = bundle;
                    } catch (const std::exception &e) {
                        cout << "failure reading " << bundle_path.string() << ": " << e.what() << endl;
                    }
                }
            }

            auto stream = ofstream(directory_path, ios::binary | ios::out | ios::trunc);
            cout << "writing " << directory_path << endl;
            for (const auto &block_id : *file_info.block_ids) {
                if (!block_to_bundle_map.contains(block_id)) {
                    cerr << "err: can't find block id " << HEXLOG64 << block_id << endl;
                    continue;
                }

                auto bundle_id = block_to_bundle_map[block_id];
                if (!bundle_cache.contains(bundle_id)) {
                    cerr << "err: can't find bundle id " << HEXLOG64 << bundle_id << endl;
                    continue;
                }

                bundle_cache[bundle_id].read_block(block_id, stream);
            }

            stream.flush();
            stream.close();

            bundle_cache.clear();
        }
    }
} // namespace poppy
