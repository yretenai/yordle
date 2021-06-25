//
// Created by Lilith on 2021-05-08.
//


#ifdef _WIN32
#    define HAS_DX11
#    include "device/win_d3d11.hpp"
#    include "os/win_layer.hpp"
#endif

#include "vex.hpp"

#include "ui/menu/exit_menu.hpp"
#include "ui/menu/message_menu.hpp"
#include "ui/menu/screenshot_menu.hpp"
#include "ui/menu/vex_menu_version.hpp"
#include "ui/menu/view_menu.hpp"
#include "ui/menu/wad_menu.hpp"
#include "ui/window/skin_menu.hpp"

#include <iostream>
#include <string>

std::atomic<std::shared_ptr<vex::device::render_device_framework>> vex::g_framework(nullptr);
std::atomic<std::shared_ptr<vex::mage::wad_container>> vex::g_wad(nullptr);
std::atomic<std::shared_ptr<vex::mage::skin_container>> vex::g_skin(nullptr);
std::atomic<std::shared_ptr<vex::os::os_layer>> vex::g_os(nullptr);
std::atomic<std::shared_ptr<std::deque<std::pair<std::time_t, std::string>>>> vex::g_message(nullptr);
std::atomic<std::shared_ptr<std::mutex>> vex::g_message_mutex(nullptr);

void dump_log() {
    auto messages = vex::g_message.load();
    if (messages == nullptr) {
        return;
    }

    auto log_path = std::filesystem::path("Logs") / (std::to_string(std::chrono::high_resolution_clock::now().time_since_epoch().count()) + ".log");
    if (!std::filesystem::exists("Logs")) {
        std::filesystem::create_directories("Logs");
    }
    std::ofstream output(log_path, std::ios::out | std::ios::trunc);
    for (const auto &log : *messages) {
        auto t           = asctime(localtime(&log.first));
        t[strlen(t) - 1] = 0;
        output << "[" << std::string(t) << "] " << log.second << std::endl;
    }
    output.flush();
    output.close();
}

int main() {
    yordle::data::meta::bin_dispatch::load_table();

    try {
        vex::g_message_mutex = std::make_shared<std::mutex>();
        vex::g_message       = std::make_shared<std::deque<std::pair<std::time_t, std::string>>>();
        vex::g_wad           = std::make_shared<vex::mage::wad_container>();
        vex::g_skin          = std::make_shared<vex::mage::skin_container>();
#ifdef HAS_DX11
        vex::g_os        = std::make_shared<vex::os::win_layer>();
        vex::g_framework = vex::device::win_d3d11::get_instance(true);
#endif
    } catch (const std::exception &ex) {
        std::cerr << ex.what() << std::endl;
        vex::post_message(ex.what());
        dump_log();
        return -1;
    }

    auto fx = vex::g_framework.load();
    if (fx == nullptr) {
        std::cerr << "Failed to create graphics device" << std::endl;
        dump_log();
        return 2;
    }

    if (vex::g_os.load() == nullptr) {
        std::cerr << "Failed to create os layer" << std::endl;
        dump_log();
        return 3;
    }

    if (vex::g_wad.load() == nullptr) {
        std::cerr << "Failed to create wad collection" << std::endl;
        dump_log();
        return 4;
    }

    fx->menu_items->emplace_back(std::make_shared<vex::ui::exit_menu>());
    fx->menu_items->emplace_back(std::make_shared<vex::ui::screenshot_menu>());
    fx->menu_items->emplace_back(std::make_shared<vex::ui::wad_menu>());
    fx->menu_items->emplace_back(std::make_shared<vex::ui::vex_menu_version>());
    fx->menu_items->emplace_back(std::make_shared<vex::ui::message_menu>());
    fx->menu_items->emplace_back(std::make_shared<vex::ui::view_menu>());
    fx->refresh_menu();
    fx->elements->emplace_back(std::make_shared<vex::ui::skin_menu>());

    try {
        fx->run();
    } catch (std::exception &exception) {
        vex::post_message(exception.what());
    }

    fx->shutdown();
    dump_log();
    return 0;
}

std::string vex::get_version_str() {
    return VEX_VERSION_S;
}

int vex::get_version() {
    return VEX_VERSION;
}

void vex::close() { }

void vex::post_message(const std::string &message) {
    auto mut = vex::g_message_mutex.load();
    if (mut->try_lock()) {
        auto messages = vex::g_message.load();
        std::cout << message << std::endl;
        messages->emplace_back(time(nullptr), message);
        mut->unlock();
    }
}
