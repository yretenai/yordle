//
// Created by Lilith on 3/24/2021.
//

#include "deploy.hpp"

#include <boost/format.hpp>

void poppy::deploy(PoppyConfiguration &poppy, yordle::manifest::riot_manifest &manifest, std::filesystem::path &deploy_path) {
    if (poppy.no_deploy) {
        return;
    }

    // pass 1: build directory skeleton
    auto directory_cache = std::map<uint64_t, std::filesystem::path>();
    for (const auto &directory_pair : manifest.directories) {
        auto normalized_path = manifest.get_directory_path(directory_pair.first);
        auto resolved = deploy_path / normalized_path;
        directory_cache[directory_pair.first] = resolved;
        if (std::filesystem::exists(resolved)) {
            std::cout << "warn: skipping " << normalized_path << " already exists" << std::endl;
            continue;
        }
        std::cout << "creating directory " << normalized_path << std::endl;
        std::filesystem::create_directories(resolved);
    }

    auto cache = poppy.cache_dir / "bundles";

    // pass 2: time to d-d-d-duel
    for (const auto &file_pair : manifest.files) {
        auto file_info = file_pair.second;
        auto directory_path = deploy_path / std::to_string(file_info.directory_id);
        if (directory_cache.contains(file_info.directory_id)) {
            directory_path = directory_cache[file_info.directory_id];
        }

        directory_path /= file_info.name;

        // i don't want to talk about it.
        auto stream = std::ofstream(directory_path, std::ios::binary | std::ios::out | std::ios::trunc);
        std::cout << "writing " << directory_path << std::endl;
        auto bundle_cache = std::map<uint64_t, std::shared_ptr<yordle::manifest::riot_bundle>>();

        for (const auto &block_id : *file_info.block_ids) {
            if (!manifest.block_to_bundle_map.contains(block_id)) {
                std::cerr << "err: can't find block id " << HEXLOG64 << block_id << std::endl;
                continue;
            }

            // don't
            auto bundle_id = manifest.block_to_bundle_map[block_id];
            if (!bundle_cache.contains(bundle_id)) {
                auto filename = cache / (boost::format(POPPY_BUNDLE_FILENAME_FORMAT) % bundle_id).str();
                auto bundle_data = dragon::read_file(filename);
                bundle_cache[bundle_id] = std::make_shared<yordle::manifest::riot_bundle>(bundle_data);
            }
            bundle_cache[bundle_id]->read_block(block_id, stream);
        }

        bundle_cache.clear();

        stream.flush();
        stream.close();
    }
}
