//
// Created by Lilith on 2021-05-11.
//

#pragma once

#include "imgui_element.hpp"

#include <exception>
#include <string>

namespace norra::ui {
    class ux_generic_error : public imgui_element {
    private:
        std::string message;
        static int id;

    public:
        explicit ux_generic_error(const std::string &msg, const std::string &where = "unexpected error");
        ~ux_generic_error() override = default;

        bool paint() override;
    };
} // namespace norra::ui
