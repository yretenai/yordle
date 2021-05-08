//
// Created by Lilith on 2021-05-08.
//


#ifdef _WIN32
#    define HAS_DX11
#    include "device/win_d3d11.hpp"
#endif

#include "norra.hpp"

#include <iostream>

int main(int argc, char **argv) {
#ifdef HAS_DX11
    norra::g_framework = norra::device::win_d3d11::get_instance();
    if (norra::g_framework == nullptr) {
        std::cerr << "Failed to create graphics device" << std::endl;
        return 2;
    }
    try {
        norra::g_framework->run();
    } catch (std::exception &exception) {
        norra::g_framework->shutdown();
        throw exception;
    }

    norra::g_framework->shutdown();
#endif
    return 0;
}
