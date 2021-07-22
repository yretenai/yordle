//
// Created by Lilith on 3/24/2021.
//

#include "deploy.hpp"

#include <fmt/core.h>

using namespace std;
using namespace yordle::manifest;
using namespace dragon;

namespace poppy {
    void deploy_bundles(PoppyConfiguration &poppy) {
        auto output = poppy.output_dir / "bundle_out";

        if (!filesystem::exists(output)) {
            filesystem::create_directories(output);
        }

        for (const auto &target : poppy.targets) {
            auto target_path = output / filesystem::path(target).filename().replace_extension();
            if (!filesystem::exists(target_path)) {
                filesystem::create_directories(target_path);
            }

            auto file   = ifstream(target, ios::binary | ios::in);
            auto bundle = riot_bundle(file);

            for (const auto &block : *bundle.blocks) {
                auto of = ofstream(target_path / fmt::format("{0:16x}.bin", block.block_id), ios::binary | ios::trunc | ios::out);
                bundle.read_block(block.block_id, file, of);
                of.close();
            }
            file.close();
        }
    }

    void deploy(PoppyConfiguration &poppy, yordle::manifest::riot_manifest &manifest, std::filesystem::path &deploy_path, std::map<uint64_t, uint64_t> &block_to_bundle_map, std::set<uint64_t> &file_ids) {
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

        auto bundle_cache   = map<uint64_t, riot_bundle>();
        auto filepath_cache = map<uint64_t, filesystem::path>();
        auto cache          = poppy.cache_dir / "bundles";

        for (const auto &file_id : file_ids) {
            auto file_info = manifest.files[file_id];

            if (poppy.old_manifest != nullptr && poppy.old_manifest->files.contains(file_id)) {
                bool new_data      = false;
                auto old_block_ids = poppy.old_manifest->files[file_id].block_ids;
                auto new_block_ids = file_info.block_ids;
                if (old_block_ids->size() != new_block_ids->size()) {
                    new_data = true;
                } else {
                    for (auto i = 0; i < new_block_ids->size(); ++i) {
                        if (new_block_ids->get(i) != old_block_ids->get(i)) {
                            new_data = true;
                            break;
                        }
                    }
                }

                if (!new_data) {
                    continue;
                }
            }

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
                        auto file                 = ifstream(bundle_path, ios::binary | ios::in);
                        auto bundle               = riot_bundle(file);
                        bundle_cache[bundle_id]   = bundle;
                        filepath_cache[bundle_id] = bundle_path;
                        file.close();
                    } catch (const std::exception &e) {
                        cout << "failure reading " << bundle_path.string() << ": " << e.what() << endl;
                    }
                }
            }

            auto stream = ofstream(directory_path, ios::binary | ios::out | ios::trunc);
            stream.seekp(file_info.size - 1, ios::end);
            stream.write("\0", 1);
            stream.seekp(0, ios::beg);
            cout << "writing " << directory_path.string() << endl;
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

                auto file = ifstream(filepath_cache[bundle_id], ios::binary | ios::in);
                bundle_cache[bundle_id].read_block(block_id, file, stream);
                file.close();
            }

            stream.flush();
            stream.close();

            bundle_cache.clear();
        }
    }
} // namespace poppy
