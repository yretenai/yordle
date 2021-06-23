//
// Created by Lilith on 2021-05-08.
//

#include <chrono>
#include <d3d11.h>
#include <d3dcompiler.h>
#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
#include <iostream>

#include "../common_win.hpp"
#include "../os/win_macros.hpp"
#include "win_d3d11.hpp"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

std::atomic<std::shared_ptr<vex::device::win_d3d11>> vex::device::win_d3d11::instance;

namespace vex::device {
    void win_d3d11::startup() {
        render_device_framework::startup();
        CoInitializeEx(nullptr, COINIT_MULTITHREADED);

        wc          = {sizeof(WNDCLASSEX), CS_CLASSDC, win_d3d11::WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, TEXT("Vex"), nullptr};
        auto result = RegisterClassExW(&wc);
        if (result == 0) {
            throw vex::windows::get_win_exception(static_cast<HRESULT>(GetLastError()));
        }
        hwnd = CreateWindowExW(0, wc.lpszClassName, TEXT("Vex"), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, nullptr, nullptr, wc.hInstance, nullptr);

        try {
            create_device();
        } catch (const std::exception &ex) {
            shutdown_device();
            UnregisterClassW(wc.lpszClassName, wc.hInstance);
            DestroyWindow(hwnd);
            is_exiting = true;
            throw ex;
        }

        ShowWindow(hwnd, SW_SHOWDEFAULT);
        UpdateWindow(hwnd);

        setup_imgui();

        ImGui_ImplWin32_Init(hwnd);
        ImGui_ImplDX11_Init(dx_device, dx_context);
    }

    void win_d3d11::run() {
        while (!is_exiting) {
            auto hrtime = std::chrono::high_resolution_clock::now();
            MSG msg;
            while (PeekMessageW(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessageW(&msg);
                if (msg.message == WM_QUIT)
                    is_exiting = true;
            }

            if (is_exiting || dx_context == nullptr || dx_swap == nullptr) {
                break;
            }

            ImGui_ImplDX11_NewFrame();
            ImGui_ImplWin32_NewFrame();
            ImGui::NewFrame();

            render_imgui();

            ImGui::Render();
            const float clear_color_with_alpha[4] = {clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w};
            dx_context->OMSetRenderTargets(1, &dx_rt, nullptr);
            dx_context->ClearRenderTargetView(dx_rt, clear_color_with_alpha);

            // TODO: Insert D3D11 Render code here.

            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

            dx_swap->Present(1, 0);
            auto hrend = std::chrono::high_resolution_clock::now();
            frame_time = std::chrono::duration_cast<std::chrono::duration<double>>(hrend - hrtime).count() * 1000;
        }
    }

    void win_d3d11::shutdown_impl() {
        if (get_instance() == nullptr) {
            return;
        }

        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        shutdown_device();
        DestroyWindow(hwnd);
        UnregisterClassW(wc.lpszClassName, wc.hInstance);

        instance.store(nullptr);
    }

    void win_d3d11::close() {
        is_exiting = true;
    }

    void win_d3d11::create_device() {
        DXGI_SWAP_CHAIN_DESC sd;
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount                        = 2;
        sd.BufferDesc.Width                   = 0;
        sd.BufferDesc.Height                  = 0;
        sd.BufferDesc.Format                  = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferDesc.RefreshRate.Numerator   = 60;
        sd.BufferDesc.RefreshRate.Denominator = 1;
        sd.Flags                              = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
        sd.BufferUsage                        = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow                       = hwnd;
        sd.SampleDesc.Count                   = 1;
        sd.SampleDesc.Quality                 = 0;
        sd.Windowed                           = TRUE;
        sd.SwapEffect                         = DXGI_SWAP_EFFECT_DISCARD;

        UINT createDeviceFlags = 0;
        //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
        D3D_FEATURE_LEVEL featureLevel;
        const D3D_FEATURE_LEVEL featureLevelArray[2] = {
            D3D_FEATURE_LEVEL_11_0,
            D3D_FEATURE_LEVEL_10_0,
        };

        auto result = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &dx_swap, &dx_device, &featureLevel, &dx_context);
        if (FAILED(result)) {
            throw vex::windows::get_win_exception(result);
        }

        create_rt();
    }

    void win_d3d11::shutdown_device() {
        shutdown_rt();
        CLEANUP_RELEASE(dx_swap);
        CLEANUP_RELEASE(dx_context);
        CLEANUP_RELEASE(dx_device);
    }

    void win_d3d11::create_rt() {
        ID3D11Texture2D *pBackBuffer;

        auto result = dx_swap->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
        if (FAILED(result)) {
            throw vex::windows::get_win_exception(result);
        }

        result = dx_device->CreateRenderTargetView(pBackBuffer, nullptr, &dx_rt);
        CLEANUP_RELEASE(pBackBuffer);
        if (FAILED(result)) {
            throw vex::windows::get_win_exception(result);
        }
    }

    void win_d3d11::shutdown_rt() {
        CLEANUP_RELEASE(dx_rt);
    }

    LRESULT win_d3d11::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam)) {
            return true;
        }

        auto inst = get_instance();

        if (inst == nullptr) {
            PostQuitMessage(0);
            return 0;
        }

        switch (msg) { // NOLINT(hicpp-multiway-paths-covered)
            case WM_SIZE:
                if (inst->dx_device != nullptr && wParam != SIZE_MINIMIZED) {
                    inst->shutdown_rt();
                    inst->dx_swap->ResizeBuffers(0, (UINT) LOWORD(lParam), (UINT) HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
                    inst->create_rt();
                }
                return 0;
            case WM_SYSCOMMAND:
                if ((wParam & 0xfff0) == SC_KEYMENU) { // Disable ALT application menu
                    return 0;
                }
                break;
            case WM_QUIT:
            case WM_CLOSE:
                get_instance()->shutdown();
                return 0;
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
        }
        return DefWindowProc(hWnd, msg, wParam, lParam);
    }

    std::shared_ptr<win_d3d11> win_d3d11::get_instance(bool create) {
        auto ptr = win_d3d11::instance.load();
        if (ptr == nullptr && create) {
            ptr = std::make_shared<win_d3d11>();
            try {
                win_d3d11::instance.store(ptr);
                ptr->startup();
            } catch (const std::exception &ex) {
                ptr = nullptr;
                throw ex;
            }
        }

        return ptr;
    }

    ID3DBlob *win_d3d11::compile_shader(const std::string &text, const std::string &entry, const std::string &shader_model) {
        auto flags     = D3DCOMPILE_ENABLE_STRICTNESS;
        ID3DBlob *blob = nullptr, *error_blob = nullptr;
        auto result = D3DCompile(text.c_str(), text.size(), nullptr, nullptr, D3D_COMPILE_STANDARD_FILE_INCLUDE,
                                 entry.c_str(), shader_model.c_str(), flags, 0, &blob, &error_blob);
        if (FAILED(result)) {
            CLEANUP_RELEASE(blob);

            if (error_blob) {
                std::string msg = std::string(reinterpret_cast<char *>(error_blob->GetBufferPointer()), error_blob->GetBufferSize());
                CLEANUP_RELEASE(error_blob);
                throw std::exception(msg.c_str());
            }

            throw vex::windows::get_win_exception(result);
        }

        return blob;
    }
} // namespace vex::device
