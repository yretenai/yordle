#pragma once

#include "../device/win_d3d11.hpp"

#include "os_layer.hpp"

namespace vex::os {
    class win_layer : public os_layer {
    public:
        explicit win_layer() = default;
        ~win_layer()         = default;

        std::set<std::filesystem::path> file_dialog(std::set<std::string> extensions, bool folders) override;
        uint64_t get_memory() override;
    };
} // namespace vex::os
