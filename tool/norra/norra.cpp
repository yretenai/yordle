//
// Created by Lilith on 2021-05-08.
//


#ifdef _WIN32
#    define HAS_DX11
#    include "device/win_d3d11.hpp"
#endif

#include "norra.hpp"

#include "ui/norra_menu_version.hpp"
#include "ui/ux_generic_error.hpp"
#include "ui/yordle_menu_version.hpp"

#include <standard_dragon/exception/invalid_data.hpp>

#include <iostream>

int main() {
    try {
#ifdef HAS_DX11
        norra::g_framework = norra::device::win_d3d11::get_instance();
#endif
    } catch (const std::exception &ex) {
        std::cerr << ex.what() << std::endl;
        return 3;
    }

    if (norra::g_framework == nullptr) {
        std::cerr << "Failed to create graphics device" << std::endl;
        return 2;
    }

    norra::g_framework->menu_items->push_back(std::make_shared<norra::ui::yordle_menu_version>());
    norra::g_framework->menu_items->push_back(std::make_shared<norra::ui::norra_menu_version>());
    norra::g_framework->refresh_menu();

    try {
        norra::g_framework->run();
    } catch (std::exception &exception) {
        norra::g_framework->shutdown();
        throw exception;
    }

    norra::g_framework->shutdown();
    return 0;
}

std::string norra::get_version_str() {
    return NORRA_VERSION_S;
}

int norra::get_version() {
    return NORRA_VERSION;
}
