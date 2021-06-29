//
// Created by Lilith on 3/24/2021.
//

#pragma once

#include "poppy.hpp"

namespace poppy {
    void deploy(PoppyConfiguration &poppy, yordle::manifest::riot_manifest &manifest, std::filesystem::path &deploy_path, std::map<uint64_t, uint64_t> &block_to_bundle_map, std::set<uint64_t> &set);
} // namespace poppy
