//\
// Created by Lilith on 2021-06-18.
//

#include "wad_menu.hpp"
#include "../vex.hpp"

std::atomic<bool> vex::ui::wad_menu::locked(false);

bool vex::ui::wad_menu::paint() {
    auto is_locked = locked.load();
    if (ImGui::MenuItem(name.c_str(), nullptr, false, !is_locked)) {
        locked = true;
        std::thread([] {
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
            locked = false;
        }).detach();
    }
    return true;
}
