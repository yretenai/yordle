//
// Created by Lilith on 2021-06-18.
//

#pragma once

#include <filesystem>
#include <set>
#include <string>

namespace norra::os {
    class os_layer {
    public:
        virtual std::set<std::filesystem::path> file_dialog(std::set<std::string> extensions, bool folders) = 0;
    };
} // namespace norra::os
