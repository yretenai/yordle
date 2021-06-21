//
// Created by Lilith on 2021-05-08.
//

#pragma once

#define VEX_VERSION 1
#define VEX_VERSION_M 0
#define VEX_VERSION_m 0
#define VEX_VERSION_i 1
#define VEX_VERSION_S "0.0.1"

#include <memory>
#include <mutex>

#include "device/render_device_framework.hpp"
#include "mage/skin_container.hpp"
#include "mage/wad_container.hpp"
#include "os/os_layer.hpp"
#include "ui/imgui_element.hpp"
#include "ui/imgui_menu_item.hpp"

#include "../tool_export.h"

namespace vex {
    extern std::atomic<std::shared_ptr<vex::device::render_device_framework>> g_framework;
    extern std::atomic<std::shared_ptr<vex::mage::wad_container>> g_wad;
    extern std::atomic<std::shared_ptr<vex::mage::skin_container>> g_skin;
    extern std::atomic<std::shared_ptr<vex::os::os_layer>> g_os;
    extern std::atomic<std::shared_ptr<std::string>> g_message;
    extern std::atomic<std::shared_ptr<std::mutex>> g_message_mutex;
    YORDLE_TOOL_EXPORT std::string get_version_str();
    YORDLE_TOOL_EXPORT int get_version();
} // namespace vex
