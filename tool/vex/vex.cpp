//
// Created by Lilith on 2021-05-08.
//


#ifdef _WIN32
#    define HAS_DX11
#    include "device/win_d3d11.hpp"
#    include "os/win32_layer.hpp"
#endif

#include "vex.hpp"

#include "ui/exit_menu.hpp"
#include "ui/message_menu.hpp"
#include "ui/vex_menu_version.hpp"
#include "ui/wad_menu.hpp"

#include <standard_dragon/exception/invalid_data.hpp>

#include <iostream>

std::atomic<std::shared_ptr<vex::device::render_device_framework>> vex::g_framework(nullptr);
std::atomic<std::shared_ptr<vex::mage::wad_container>> vex::g_wad(nullptr);
std::atomic<std::shared_ptr<vex::os::os_layer>> vex::g_os(nullptr);
std::atomic<std::shared_ptr<std::string>> vex::g_message(nullptr);
std::atomic<std::shared_ptr<std::mutex>> vex::g_message_mutex(nullptr);

int main() {
    try {
#ifdef HAS_DX11
        vex::g_framework = vex::device::win_d3d11::get_instance(true);
        vex::g_os        = std::make_shared<vex::os::win32_layer>();
#endif
        vex::g_wad           = std::make_shared<vex::mage::wad_container>();
        vex::g_message_mutex = std::make_shared<std::mutex>();
    } catch (const std::exception &ex) {
        std::cerr << ex.what() << std::endl;
        return -1;
    }

    auto fx = vex::g_framework.load();
    if (fx == nullptr) {
        std::cerr << "Failed to create graphics device" << std::endl;
        return 2;
    }

    if (vex::g_os.load() == nullptr) {
        std::cerr << "Failed to create os layer" << std::endl;
        return 3;
    }

    if (vex::g_wad.load() == nullptr) {
        std::cerr << "Failed to create wad collection" << std::endl;
        return 4;
    }

    fx->menu_items->push_back(std::make_shared<vex::ui::exit_menu>());
    fx->menu_items->push_back(std::make_shared<vex::ui::wad_menu>());
    fx->menu_items->push_back(std::make_shared<vex::ui::vex_menu_version>());
    fx->menu_items->push_back(std::make_shared<vex::ui::message_menu>());
    fx->refresh_menu();

    try {
        fx->run();
    } catch (std::exception &exception) {
        fx->shutdown();
        throw exception;
    }

    fx->shutdown();
    return 0;
}

std::string vex::get_version_str() {
    return VEX_VERSION_S;
}

int vex::get_version() {
    return VEX_VERSION;
}
