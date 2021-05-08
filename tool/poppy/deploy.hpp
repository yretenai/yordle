//
// Created by Lilith on 3/24/2021.
//

#pragma once

#include "poppy.hpp"

namespace poppy {
    void deploy(PoppyConfiguration &poppy, yordle::manifest::riot_manifest &manifest, std::filesystem::path &deploy_path);
} // namespace poppy
