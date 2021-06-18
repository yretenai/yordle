//
// Created by Lilith on 2021-06-18.
//

#include "win32_layer.hpp"
#include "../norra.hpp"

std::set<std::filesystem::path> norra::os::win32_layer::file_dialog(std::set<std::string> extensions, bool folders) {
    IFileOpenDialog *dialog  = nullptr;
    IShellItemArray *results = nullptr;
    IShellItem *item         = nullptr;

    auto hr = CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&dialog));
    if (!SUCCEEDED(hr)) return {};
    try {
        DWORD options;
        if (!SUCCEEDED(dialog->GetOptions(&options))) {
            dialog->Release();
            return {};
        }
        options |= FOS_ALLOWMULTISELECT | FOS_NOCHANGEDIR;
        if (folders) {
            options |= FOS_PICKFOLDERS;
        }
        if (!SUCCEEDED(dialog->SetOptions(options))) {
            dialog->Release();
            return {};
        }

        auto fx = std::reinterpret_pointer_cast<norra::device::win_d3d11>(norra::g_framework.load());
        if (!SUCCEEDED(dialog->Show(fx->hwnd))) {
        }

        if (!SUCCEEDED(dialog->GetResults(&results))) {
            dialog->Release();
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
            item->Release();
            item = nullptr;
        }
        results->Release();
        dialog->Release();
        return set;
    } catch (std::exception &ex) {
        dialog->Release();
        if (results != nullptr) {
            results->Release();
        }
        if (item != nullptr) {
            item->Release();
        }
        throw;
    }
}
