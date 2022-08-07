#pragma once

#include "poppy.hpp"

namespace poppy {
    void download(PoppyConfiguration &poppy, dragon::Array<uint8_t> &manifest_data, std::filesystem::path &target);
} // namespace poppy
