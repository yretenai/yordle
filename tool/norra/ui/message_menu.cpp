//
// Created by Lilith on 2021-06-18.
//

#include "message_menu.hpp"
#include "../norra.hpp"

bool norra::ui::message_menu::paint() {
    auto mut = norra::g_message_mutex.load();
    if (mut->try_lock()) {
        auto msg = norra::g_message.load();
        if (msg != nullptr) {
            ImGui::MenuItem(msg->c_str(), nullptr, false, false);
        }
        mut->unlock();
    }
    return true;
}
