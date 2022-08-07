#include "message_menu.hpp"

#include "../../vex.hpp"

bool vex::ui::message_menu::paint(vex::device::render_device_framework *fx) {
    auto mut = vex::g_message_mutex.load();
    if (mut->try_lock()) {
        auto msg = vex::g_message.load();
        if (!msg->empty()) {
            if (std::difftime(time(nullptr), msg->back().first) < 3) {
                ImGui::MenuItem(msg->back().second.c_str(), nullptr, false, false);
            }
        }
        mut->unlock();
    }
    return true;
}
