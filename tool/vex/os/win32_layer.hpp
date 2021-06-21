//
// Created by Lilith on 2021-06-18.
//

#pragma once

#include "../device/win_d3d11.hpp"

#include "os_layer.hpp"

namespace vex::os {
    class win32_layer : public os_layer {
    public:
        explicit win32_layer() = default;
        ~win32_layer()         = default;

        std::set<std::filesystem::path> file_dialog(std::set<std::string> extensions, bool folders) override;
        uint64_t get_memory() override;
    };
} // namespace vex::os
