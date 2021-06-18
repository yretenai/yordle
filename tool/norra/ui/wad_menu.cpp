//\
// Created by Lilith on 2021-06-18.
//

#include "wad_menu.hpp"
#include "../norra.hpp"

bool norra::ui::wad_menu::paint() {
    if (ImGui::MenuItem(name.c_str(), nullptr, false, true)) {
        std::thread([] {
            auto os  = norra::g_os.load();
            auto wad = norra::g_wad.load();
            if (os != nullptr) {
                auto paths = os->file_dialog({}, true);
                wad->load_wads(paths);
            }
        }).detach();
    }
    return true;
}
