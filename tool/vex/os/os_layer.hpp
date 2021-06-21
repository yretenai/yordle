//
// Created by Lilith on 2021-06-18.
//

#pragma once

#include <filesystem>
#include <set>
#include <string>

namespace vex::os {
    class os_layer {
    public:
        virtual std::set<std::filesystem::path> file_dialog(std::set<std::string> extensions, bool folders) = 0;
        virtual uint64_t get_memory()                                                                       = 0;
    };
} // namespace vex::os
