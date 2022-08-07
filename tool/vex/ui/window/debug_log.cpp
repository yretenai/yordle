#include "debug_log.hpp"

#include "../../vex.hpp"

bool vex::ui::debug_log::paint(vex::device::render_device_framework *fx) {
    auto mut = vex::g_message_mutex.load();
    if (mut->try_lock()) {
        auto msg = vex::g_message.load();
        for (const auto &log : *msg) {
            auto t           = asctime(localtime(&log.first));
            t[strlen(t) - 1] = 0;
            ImGui::Text("[%s] %s", t, log.second.c_str());
        }
        mut->unlock();
    }
    return true;
}
