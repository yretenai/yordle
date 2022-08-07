#include "wad_menu.hpp"

#include "../../mage/wad_container.hpp"
#include "../../os/os_layer.hpp"
#include "../../vex.hpp"

std::atomic<bool> vex::ui::wad_menu::locked(false);

bool vex::ui::wad_menu::paint(vex::device::render_device_framework *fx) {
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
                auto wad  = vex::g_wad.load();
                auto skin = vex::g_skin.load();
                auto fx   = vex::g_framework.load();

                skin->is_busy = true;
                wad->clear();
                skin->clear();
                fx->clear_assets();

                wad->load_wads(paths);
                skin->load_data();
            } catch (std::exception &e) {
                vex::post_message(std::string("error: ") + e.what());
            }
            locked = false;
        }).detach();
    }
    return true;
}
