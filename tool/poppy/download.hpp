//
// Created by Lilith on 3/24/2021.
//

#pragma once

#include "poppy.hpp"

namespace poppy {
    void download(PoppyConfiguration &poppy, dragon::Array<uint8_t> &manifest_data, std::filesystem::path &target);
}
