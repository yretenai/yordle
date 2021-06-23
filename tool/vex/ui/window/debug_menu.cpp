//
// Created by Lilith on 2021-06-21.
//

#include "debug_menu.hpp"

#include "../../vex.hpp"

bool vex::ui::debug_menu::paint(vex::device::render_device_framework *fx) {
    ImGui::LabelTextV("frame time", "%f ms", reinterpret_cast<char *>(&fx->frame_time));
    auto menu_sz = fx->menu_items->size();
    ImGui::LabelTextV("menu items", "%d", reinterpret_cast<char *>(&menu_sz));
    auto window_sz = fx->elements->size();
    ImGui::LabelTextV("windows", "%d", reinterpret_cast<char *>(&window_sz));
    auto tex_sz = 0;
    ImGui::LabelTextV("textures", "%d", reinterpret_cast<char *>(&tex_sz));
    auto model_sz = 0;
    ImGui::LabelTextV("models", "%d", reinterpret_cast<char *>(&model_sz));
    auto shader_sz = 0;
    ImGui::LabelTextV("shaders", "%d", reinterpret_cast<char *>(&shader_sz));
    auto wad       = vex::g_wad.load();
    auto wad_count = wad->paths.size();
    ImGui::LabelTextV("wads", "%d", reinterpret_cast<char *>(&wad_count));
    auto entry_count = wad->entries.size();
    ImGui::LabelTextV("files", "%d", reinterpret_cast<char *>(&entry_count));
    auto os     = vex::g_os.load();
    auto memory = os->get_memory();
    ImGui::LabelTextV("memory", "%d bytes", reinterpret_cast<char *>(&memory));
    return true;
}
