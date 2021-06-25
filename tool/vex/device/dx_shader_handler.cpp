//
// Created by Lilith on 2021-06-25.
//

#include <d3d11.h>
#include <d3dcompiler.h>
#include <windows.h>

#include "../common_win.hpp"
#include "../os/win_macros.hpp"
#include "../vex.hpp"
#include "dx_shader_handler.hpp"

namespace vex::device {
    std::shared_ptr<dragon::Array<D3D_SHADER_MACRO>> get_macros(std::map<std::string, std::string> &macros) {
        if (macros.empty()) {
            return nullptr;
        }

        D3D_SHADER_MACRO empty {nullptr, nullptr};
        auto data = std::make_shared<dragon::Array<D3D_SHADER_MACRO>>(macros.size() + 1, &empty);

        auto i = 0;
        for (const auto &pair : macros) {
            data->set(i++, {pair.first.c_str(), pair.second.c_str()});
        }

        return data;
    }

    ID3DBlob *dx_shader_handler::compile_shader(uint64_t shader_hash, const std::string &entry, std::map<std::string, std::string> &macros, const std::string &shader_model) {
        auto wad  = vex::g_wad.load();
        auto data = wad->read_file(shader_hash);
        if (data == nullptr) {
            return nullptr;
        }
        return compile_shader(data->to_string(), entry, macros, shader_model);
    }

    ID3DBlob *dx_shader_handler::compile_shader(const std::string &text, const std::string &entry, std::map<std::string, std::string> &macros, const std::string &shader_model) {
        auto flags     = D3DCOMPILE_ENABLE_STRICTNESS;
        ID3DBlob *blob = nullptr, *error_blob = nullptr;
        auto macro_defines = get_macros(macros);
        auto result        = D3DCompile(text.c_str(), text.size(), nullptr, macro_defines == nullptr ? nullptr : macro_defines->data(), this,
                                 entry.c_str(), shader_model.c_str(), flags, 0, &blob, &error_blob);
        if (FAILED(result)) {
            CLEANUP_RELEASE(blob);

            if (error_blob) {
                std::string msg = std::string(reinterpret_cast<char *>(error_blob->GetBufferPointer()), error_blob->GetBufferSize());
                CLEANUP_RELEASE(error_blob);
                vex::post_message(msg);
                return nullptr;
            }
            vex::win_post_message(result);
            return nullptr;
        }

        return blob;
    }

    __declspec(nothrow) HRESULT dx_shader_handler::Open(D3D_INCLUDE_TYPE IncludeType, LPCSTR pFileName, LPCVOID pParentData, LPCVOID *ppData, UINT *pBytes) {
        auto wad = vex::g_wad.load();
        std::filesystem::path path(pFileName);
        auto data = wad->read_file(path);
        if (data == nullptr) {
            return S_FALSE;
        }

        auto pData = new char[data->size()];
        *pBytes    = data->size();
        data->copy(reinterpret_cast<uintptr_t>(pData), 0, data->size());
        *ppData = pData;
        return S_OK;
    }

    __declspec(nothrow) HRESULT dx_shader_handler::Close(LPCVOID pData) {
        delete[](char *) pData;
        return S_OK;
    }
} // namespace vex::device
