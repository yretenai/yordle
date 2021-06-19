//
// Created by Lilith on 2021-05-11.
//

#include "ux_generic_error.hpp"
#include <fmt/format.h>

int vex::ui::ux_generic_error::id = 0;

namespace vex::ui {
    ux_generic_error::ux_generic_error(const std::string &msg, const std::string &where) {
        title   = fmt::format("{0:s}##error_{1:d}", where, ++id);
        message = msg;
    }

    bool ux_generic_error::paint() {
        ImGui::Text("%s", message.c_str());
        return true;
    }
} // namespace vex::ui
