//
// Created by Lilith on 2021-05-08.
//


#ifdef _WIN32
#    define HAS_DX11
#    include "device/win_d3d11.hpp"
#    include "os/win32_layer.hpp"
#endif

#include "norra.hpp"

#include "ui/exit_menu.hpp"
#include "ui/message_menu.hpp"
#include "ui/norra_menu_version.hpp"
#include "ui/wad_menu.hpp"
#include "ui/yordle_menu_version.hpp"

#include <standard_dragon/exception/invalid_data.hpp>

#include <iostream>

std::atomic<std::shared_ptr<norra::device::render_device_framework>> norra::g_framework(nullptr);
std::atomic<std::shared_ptr<norra::mage::wad_container>> norra::g_wad(nullptr);
std::atomic<std::shared_ptr<norra::os::os_layer>> norra::g_os(nullptr);
std::atomic<std::shared_ptr<std::string>> norra::g_message(nullptr);
std::atomic<std::shared_ptr<std::mutex>> norra::g_message_mutex(nullptr);

int main() {
    try {
#ifdef HAS_DX11
        norra::g_framework = norra::device::win_d3d11::get_instance(true);
        norra::g_os        = std::make_shared<norra::os::win32_layer>();
#endif
        norra::g_wad           = std::make_shared<norra::mage::wad_container>();
        norra::g_message_mutex = std::make_shared<std::mutex>();
    } catch (const std::exception &ex) {
        std::cerr << ex.what() << std::endl;
        return -1;
    }

    auto fx = norra::g_framework.load();
    if (fx == nullptr) {
        std::cerr << "Failed to create graphics device" << std::endl;
        return 2;
    }

    if (norra::g_os.load() == nullptr) {
        std::cerr << "Failed to create os layer" << std::endl;
        return 3;
    }

    if (norra::g_wad.load() == nullptr) {
        std::cerr << "Failed to create wad collection" << std::endl;
        return 4;
    }

    fx->menu_items->push_back(std::make_shared<norra::ui::exit_menu>());
    fx->menu_items->push_back(std::make_shared<norra::ui::wad_menu>());
    fx->menu_items->push_back(std::make_shared<norra::ui::yordle_menu_version>());
    fx->menu_items->push_back(std::make_shared<norra::ui::norra_menu_version>());
    fx->menu_items->push_back(std::make_shared<norra::ui::message_menu>());
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

std::string norra::get_version_str() {
    return NORRA_VERSION_S;
}

int norra::get_version() {
    return NORRA_VERSION;
}
