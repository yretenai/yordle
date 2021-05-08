//
// Created by Lilith on 2021-05-08.
//

#pragma once

#include "device/render_device_framework.hpp"
#include <memory>

namespace norra {
    static std::shared_ptr<norra::device::render_device_framework> g_framework = nullptr;
} // namespace norra
