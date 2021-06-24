//
// Created by Lilith on 2021-06-21.
//

#include "debug_menu.hpp"

#include "../../vex.hpp"

bool vex::ui::debug_menu::paint(vex::device::render_device_framework *fx) {
    if (fx != nullptr) {
        ImGui::Value("frame time", float(fx->frame_time), "%f ms");
        ImGui::Value("menu items", uint32_t(fx->menu_items->size()));
        ImGui::Value("elements", uint32_t(fx->elements->size()));
        ImGui::Value("textures", uint32_t(fx->textures->size()));
        ImGui::Value("models", uint32_t(fx->models->size()));
        ImGui::Value("shaders", uint32_t(fx->shaders->size()));
    }

    auto wad = vex::g_wad.load();
    if (wad != nullptr) {
        ImGui::Value("archives", uint32_t(wad->paths.size()));
        ImGui::Value("files", uint32_t(wad->entries.size()));
    }

    auto os = vex::g_os.load();
    if (os != nullptr) {
        ImGui::Value("memory", float(os->get_memory()) / 1048576.0f, "%.2f MiB");
    }

    return true;
}
