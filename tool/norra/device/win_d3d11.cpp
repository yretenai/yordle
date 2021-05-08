//
// Created by Lilith on 2021-05-08.
//

#include <d3d11.h>
#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
#include <tchar.h>

#include "win_d3d11.hpp"


extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

std::shared_ptr<norra::device::win_d3d11> norra::device::win_d3d11::instance = nullptr;

namespace norra::device {
    bool win_d3d11::startup() {
        wc = {sizeof(WNDCLASSEX), CS_CLASSDC, win_d3d11::WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, _T("Norra"), nullptr};
        RegisterClassEx(&wc);
        hwnd = CreateWindow(wc.lpszClassName, _T("Norra"), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, nullptr, nullptr, wc.hInstance, nullptr);

        if (!create_device()) {
            shutdown_device();
            UnregisterClass(wc.lpszClassName, wc.hInstance);
            DestroyWindow(hwnd);
            is_exiting = true;
            return false;
        }

        ShowWindow(hwnd, SW_SHOWDEFAULT);
        UpdateWindow(hwnd);

        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO &io = ImGui::GetIO();
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
        io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
        ImGui::StyleColorsDark();
        ImGui_ImplWin32_Init(hwnd);
        ImGui_ImplDX11_Init(dx_device, dx_context);

        return true;
    }

    void win_d3d11::run() {
        ImVec4 clear_color = ImVec4(0.05f, 0.06f, 0.09f, 1.00f);
        while (!is_exiting) {
            MSG msg;
            while (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
                if (msg.message == WM_QUIT)
                    is_exiting = true;
            }

            if (is_exiting || dx_context == nullptr || dx_swap == nullptr) {
                break;
            }

            // TODO: render stack.

            ImGui_ImplDX11_NewFrame();
            ImGui_ImplWin32_NewFrame();
            ImGui::NewFrame();

            // TODO: window stack.

            ImGui::Render();
            const float clear_color_with_alpha[4] = {clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w};
            dx_context->OMSetRenderTargets(1, &dx_rt, nullptr);
            dx_context->ClearRenderTargetView(dx_rt, clear_color_with_alpha);
            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

            dx_swap->Present(0, 0);
        }
    }

    void win_d3d11::shutdown_impl() {
        if (instance == nullptr) {
            return;
        }

        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();

        shutdown_device();
        DestroyWindow(hwnd);
        UnregisterClass(wc.lpszClassName, wc.hInstance);

        instance = nullptr;
    }

    void win_d3d11::close() {
        is_exiting = true;
    }

    bool win_d3d11::create_device() {
        DXGI_SWAP_CHAIN_DESC sd;
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = 2;
        sd.BufferDesc.Width = 0;
        sd.BufferDesc.Height = 0;
        sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferDesc.RefreshRate.Numerator = 60;
        sd.BufferDesc.RefreshRate.Denominator = 1;
        sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow = hwnd;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.Windowed = TRUE;
        sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

        UINT createDeviceFlags = 0;
        //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
        D3D_FEATURE_LEVEL featureLevel;
        const D3D_FEATURE_LEVEL featureLevelArray[2] = {
                D3D_FEATURE_LEVEL_11_0,
                D3D_FEATURE_LEVEL_10_0,
        };

        if (D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &dx_swap, &dx_device, &featureLevel, &dx_context) != S_OK) {
            return false;
        }

        create_rt();
        return true;
    }

    void win_d3d11::shutdown_device() {
        shutdown_rt();
        if (dx_swap) {
            dx_swap->Release();
            dx_swap = nullptr;
        }
        if (dx_context) {
            dx_context->Release();
            dx_context = nullptr;
        }
        if (dx_device) {
            dx_device->Release();
            dx_device = nullptr;
        }
    }

    void win_d3d11::create_rt() {
        ID3D11Texture2D *pBackBuffer;
        dx_swap->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
        dx_device->CreateRenderTargetView(pBackBuffer, nullptr, &dx_rt);
        pBackBuffer->Release();
    }

    void win_d3d11::shutdown_rt() {
        if (dx_rt) {
            dx_rt->Release();
            dx_rt = nullptr;
        }
    }

    LRESULT win_d3d11::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam)) {
            return true;
        }

        switch (msg) { // NOLINT(hicpp-multiway-paths-covered)
            case WM_SIZE:
                if (instance->dx_device != nullptr && wParam != SIZE_MINIMIZED) {
                    instance->shutdown_rt();
                    instance->dx_swap->ResizeBuffers(0, (UINT) LOWORD(lParam), (UINT) HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
                    instance->create_rt();
                }
                return 0;
            case WM_SYSCOMMAND:
                if ((wParam & 0xfff0) == SC_KEYMENU) { // Disable ALT application menu
                    return 0;
                }
                break;
            case WM_QUIT:
            case WM_CLOSE:
                instance->shutdown();
                return 0;
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
        }
        return DefWindowProc(hWnd, msg, wParam, lParam);
    }

    std::shared_ptr<render_device_framework> win_d3d11::get_instance() {
        if (win_d3d11::instance == nullptr) {
            instance = std::make_shared<win_d3d11>();
            if (!instance->startup()) {
                instance = nullptr;
            }
        }

        return instance;
    }
} // namespace norra::device
