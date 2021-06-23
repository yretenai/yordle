//
// Created by Lilith on 2021-06-18.
//

#include <windows.h>

#include <psapi.h>
#include <shobjidl_core.h>

#include "../vex.hpp"
#include "win_layer.hpp"
#include "win_macros.hpp"

std::set<std::filesystem::path> vex::os::win_layer::file_dialog(std::set<std::string> extensions, bool folders) {
    IFileOpenDialog *dialog  = nullptr;
    IShellItemArray *results = nullptr;
    IShellItem *item         = nullptr;

    auto hr = CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&dialog));
    if (!SUCCEEDED(hr)) return {};
    try {
        DWORD options;
        if (!SUCCEEDED(dialog->GetOptions(&options))) {
            CLEANUP_RELEASE(dialog);
            return {};
        }
        options |= FOS_ALLOWMULTISELECT | FOS_NOCHANGEDIR;
        if (folders) {
            options |= FOS_PICKFOLDERS;
        }
        if (!SUCCEEDED(dialog->SetOptions(options))) {
            CLEANUP_RELEASE(dialog);
            return {};
        }

        auto fx = std::reinterpret_pointer_cast<vex::device::win_d3d11>(vex::g_framework.load());
        if (!SUCCEEDED(dialog->Show(fx->hwnd))) {
        }

        if (!SUCCEEDED(dialog->GetResults(&results))) {
            CLEANUP_RELEASE(dialog);
            return {};
        }
        std::set<std::filesystem::path> set;
        DWORD count;
        results->GetCount(&count);
        for (auto i = 0; i < count; ++i) {
            if (!SUCCEEDED(results->GetItemAt(i, &item))) {
                continue;
            }

            WCHAR *path = nullptr;
            if (!SUCCEEDED(item->GetDisplayName(SIGDN_DESKTOPABSOLUTEPARSING, &path))) {
                continue;
            }
            auto wpath = std::wstring(path);
            CoTaskMemFree(path);
            set.emplace(wpath);
            CLEANUP_RELEASE(item);
        }
        CLEANUP_RELEASE(results);
        CLEANUP_RELEASE(dialog);
        return set;
    } catch (std::exception &ex) {
        CLEANUP_RELEASE(dialog);
        CLEANUP_RELEASE(results);
        CLEANUP_RELEASE(item);
        throw;
    }
}

uint64_t vex::os::win_layer::get_memory() {
    auto process = GetCurrentProcess();
    PROCESS_MEMORY_COUNTERS_EX pmc;
    if (GetProcessMemoryInfo(process, reinterpret_cast<PROCESS_MEMORY_COUNTERS *>(&pmc), sizeof(pmc))) {
        return pmc.PrivateUsage;
    }
    return 0;
}
