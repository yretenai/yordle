//
// Created by Lilith on 2021-06-25.
//


#pragma once

#include <d3d11.h>

#include <cstdint>
#include <string>

namespace vex::device {
    class dx_shader_handler : public ID3DInclude {
    public:
        explicit dx_shader_handler() = default;

        ID3DBlob *compile_shader(uint64_t shader_hash, const std::string &entry, std::map<std::string, std::string> &macros, const std::string &shader_model);
        ID3DBlob *compile_shader(const std::string &text, const std::string &entry, std::map<std::string, std::string> &macros, const std::string &shader_model);

        __declspec(nothrow) HRESULT __stdcall Open(D3D_INCLUDE_TYPE IncludeType, LPCSTR pFileName, LPCVOID pParentData, LPCVOID *ppData, UINT *pBytes) override;
        __declspec(nothrow) HRESULT __stdcall Close(LPCVOID pData) override;
    };
} // namespace vex::device
