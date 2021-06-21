//\
// Created by Lilith on 2021-06-18.
//

#include "wad_menu.hpp"

#include "../../mage/wad_container.hpp"
#include "../../os/os_layer.hpp"
#include "../../vex.hpp"

std::atomic<bool> vex::ui::wad_menu::locked(false);

bool vex::ui::wad_menu::paint() {
    auto is_locked = locked.load();
    if (ImGui::MenuItem(name.c_str(), nullptr, false, !is_locked)) {
        locked = true;
        std::thread([] {
            try {
                auto os    = vex::g_os.load();
                auto paths = os->file_dialog({}, true);
                if (paths.empty()) {
                    locked = false;
                    return;
                }
                auto wad = vex::g_wad.load();
                wad->clear();
                wad->load_wads(paths);
                auto skin = vex::g_skin.load();
                skin->clear();
                skin->load_data();
            } catch (std::exception &e) {
                auto mut = g_message_mutex.load();
                if (mut->try_lock()) {
                    g_message = make_shared<std::string>(std::string("error: ") + e.what());
                    mut->unlock();
                }
            }
            locked = false;
        }).detach();
    }
    return true;
}
