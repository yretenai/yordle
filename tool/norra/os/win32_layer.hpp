//
// Created by Lilith on 2021-06-18.
//

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <shobjidl_core.h>
#include <windows.h>

#include "../device/win_d3d11.hpp"

#include "os_layer.hpp"

namespace norra::os {
    class win32_layer : public os_layer {
    public:
        explicit win32_layer() = default;
        ~win32_layer()         = default;

        std::set<std::filesystem::path> file_dialog(std::set<std::string> extensions, bool folders) override;
    };
} // namespace norra::os
