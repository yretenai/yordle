#pragma once

#include "poppy.hpp"

namespace poppy {
    void deploy(PoppyConfiguration &poppy, yordle::manifest::riot_manifest &manifest, std::filesystem::path &deploy_path, std::map<uint64_t, uint64_t> &block_to_bundle_map, std::set<uint64_t> &set);
    void deploy_bundles(PoppyConfiguration &poppy);
} // namespace poppy
