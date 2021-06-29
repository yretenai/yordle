//
// Created by Lilith on 2021-05-08.
//

#include <chrono>
#include <d3d11.h>
#include <DirectXTK/DDSTextureLoader.h>
#include <DirectXTK/ScreenGrab.h>
#include <DirectXTK/WICTextureLoader.h>
#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
#include <iostream>
#include <standard_dragon/exception/reasonable.hpp>
#include <wincodec.h>

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
            vex::win_post_message(static_cast<HRESULT>(GetLastError()));
            return;
        }
        hwnd = CreateWindowExW(0, wc.lpszClassName, TEXT("Vex"), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, nullptr, nullptr, wc.hInstance, nullptr);

        try {
            create_device();
        } catch (const std::exception &ex) {
            shutdown_device();
            UnregisterClassW(wc.lpszClassName, wc.hInstance);
            DestroyWindow(hwnd);
            is_exiting = true;
            vex::post_message(ex.what());
            return;
        }

        shader_handler = std::make_shared<dx_shader_handler>();

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

            auto should_screenshot = perform_screenshot.load();

            const float clear_color_with_alpha[4] = {clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, should_screenshot ? 0.0f : clear_color.w};
            dx_context->OMSetRenderTargets(1, &dx_rt, nullptr);
            dx_context->ClearRenderTargetView(dx_rt, clear_color_with_alpha);

            if (should_screenshot) {
                screenshot(std::to_string(hrtime.time_since_epoch().count()) + ".png");
                perform_screenshot = false;
            }

            // TODO: Insert D3D11 Render code here.

            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

            dx_swap->Present(1, 0);
            auto hrend = std::chrono::high_resolution_clock::now();
            frame_time = std::chrono::duration_cast<std::chrono::duration<double>>(hrend - hrtime).count() * 1000;
        }

        clear_assets();
    }

    void win_d3d11::shutdown_impl() {
        if (get_instance() == nullptr) {
            return;
        }

        ImGui_ImplDX11_Shutdown();
        ImGui_ImplWin32_Shutdown();

        shutdown_imgui();

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
            vex::win_post_message(result);
            throw dragon::exception::reasonable("unable to create directx device");
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
            vex::win_post_message(result);
            throw dragon::exception::reasonable("unable to create directx render buffer");
        }

        result = dx_device->CreateRenderTargetView(pBackBuffer, nullptr, &dx_rt);
        CLEANUP_RELEASE(pBackBuffer);
        if (FAILED(result)) {
            vex::win_post_message(result);
            throw dragon::exception::reasonable("unable to create directx render target");
        }
    }

    void win_d3d11::screenshot(const std::filesystem::path &output) {
        ID3D11Texture2D *pBackBuffer;

        auto result = dx_swap->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
        if (FAILED(result)) {
            return;
        }

        std::filesystem::path screenshot_dir("Screenshots");
        if (!std::filesystem::exists(screenshot_dir)) {
            std::filesystem::create_directories(screenshot_dir);
        }

        result = DirectX::SaveWICTextureToFile(dx_context, pBackBuffer, GUID_ContainerFormatPng, (screenshot_dir / output).wstring().c_str(), &GUID_WICPixelFormat32bppBGRA);
        if (FAILED(result)) {
            CLEANUP_RELEASE(pBackBuffer);
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
                inst->close();
                vex::close();
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
                vex::post_message(ex.what());
                return nullptr;
            }
        }

        return ptr;
    }

    float load_texture_dimensions(ID3D11Resource *resource) {
        D3D11_RESOURCE_DIMENSION dimension;
        resource->GetType(&dimension);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wswitch"
        switch (dimension) {
            case D3D11_RESOURCE_DIMENSION_TEXTURE2D: {
                ID3D11Texture2D *texture;
                if (FAILED(resource->QueryInterface(&texture))) {
                    return 1;
                }

                D3D11_TEXTURE2D_DESC desc;
                texture->GetDesc(&desc);
                CLEANUP_RELEASE(texture);
                return static_cast<float>(desc.Width) / static_cast<float>(desc.Height);
            }
            case D3D11_RESOURCE_DIMENSION_TEXTURE3D: {
                ID3D11Texture3D *texture;
                if (FAILED(resource->QueryInterface(&texture))) {
                    return 1;
                }

                D3D11_TEXTURE3D_DESC desc;
                texture->GetDesc(&desc);
                CLEANUP_RELEASE(texture);
                return static_cast<float>(desc.Width) / static_cast<float>(desc.Height);
            }
        }

        return 1;
#pragma clang diagnostic pop
    }

    std::shared_ptr<void> win_d3d11::load_texture(uint64_t texture_path) {
        if (!textures->contains(texture_path)) {
            ID3D11ShaderResourceView *raw_ptr = nullptr;
            ID3D11Resource *resource          = nullptr;

            auto wad = vex::g_wad.load();
            auto tex = wad->read_file(texture_path);

            if (tex == nullptr) {
                vex::post_message(std::string("can't load texture ") + std::to_string(texture_path));
                return nullptr;
            }

            auto hr = DirectX::CreateDDSTextureFromMemory(dx_device, dx_context, tex->data(), tex->byte_size(), &resource, &raw_ptr);
            if (FAILED(hr)) {
                CLEANUP_RELEASE(resource);
                CLEANUP_RELEASE(raw_ptr);
                vex::post_message("can't create dds texture");
                return nullptr;
            }

            textures->emplace(texture_path, std::shared_ptr<ID3D11ShaderResourceView>(raw_ptr, [](IUnknown *ptr) {
                                  ptr->Release();
                              }));

            texture_dimensions->emplace(texture_path, load_texture_dimensions(resource));

            CLEANUP_RELEASE(resource);
        }

        return textures->at(texture_path);
    }

    std::shared_ptr<void> win_d3d11::load_image(uint64_t image_path) {
        if (!textures->contains(image_path)) {
            ID3D11ShaderResourceView *raw_ptr = nullptr;
            ID3D11Resource *resource          = nullptr;

            auto wad = vex::g_wad.load();
            auto tex = wad->read_file(image_path);

            if (tex == nullptr) {
                vex::post_message(std::string("can't load image ") + std::to_string(image_path));
                return nullptr;
            }

            auto hr = DirectX::CreateWICTextureFromMemory(dx_device, dx_context, tex->data(), tex->byte_size(), &resource, &raw_ptr);
            if (FAILED(hr)) {
                CLEANUP_RELEASE(resource);
                CLEANUP_RELEASE(raw_ptr);
                vex::post_message("can't load wic image ");
                return nullptr;
            }

            textures->emplace(image_path, std::shared_ptr<ID3D11ShaderResourceView>(raw_ptr, [](IUnknown *ptr) {
                                  ptr->Release();
                              }));

            texture_dimensions->emplace(image_path, load_texture_dimensions(resource));

            CLEANUP_RELEASE(resource);
        }

        return textures->at(image_path);
    }

    std::shared_ptr<vex::mage::skinned_mesh_container> win_d3d11::load_model(uint64_t model_path, uint64_t resource_key) {
        if (!models->contains(resource_key)) {
            auto container = load_model_base(model_path, resource_key);
            if (container == nullptr) {
                return nullptr;
            }

            D3D11_BUFFER_DESC buffer_desc;
            D3D11_SUBRESOURCE_DATA data;

            buffer_desc.Usage          = D3D11_USAGE_DEFAULT;
            buffer_desc.CPUAccessFlags = 0;
            buffer_desc.MiscFlags      = 0;
            data.SysMemPitch           = 0;
            data.SysMemSlicePitch      = 0;

            buffer_desc.BindFlags           = D3D11_BIND_VERTEX_BUFFER;
            buffer_desc.StructureByteStride = container->mesh->vbo_stride;
            buffer_desc.ByteWidth           = container->mesh->vbo->byte_size();
            data.pSysMem                    = container->mesh->vbo->data();

            ID3D11Buffer *raw_ptr = nullptr;
            if (FAILED(dx_device->CreateBuffer(&buffer_desc, &data, &raw_ptr))) {
                vex::post_message("can't create vertex buffer");
                return nullptr;
            }
            container->vbo = std::shared_ptr<ID3D11Buffer>(raw_ptr, [](IUnknown *ptr) {
                ptr->Release();
            });

            buffer_desc.BindFlags           = D3D11_BIND_INDEX_BUFFER;
            buffer_desc.StructureByteStride = sizeof(uint16_t) * 3;
            buffer_desc.ByteWidth           = container->mesh->ibo->byte_size();
            data.pSysMem                    = container->mesh->ibo->data();

            if (FAILED(dx_device->CreateBuffer(&buffer_desc, &data, &raw_ptr))) {
                container->vbo = nullptr;
                vex::post_message("can't create index buffer");
                return nullptr;
            }
            container->ibo = std::shared_ptr<ID3D11Buffer>(raw_ptr, [](IUnknown *ptr) {
                ptr->Release();
            });

            models->emplace(resource_key, container);
        }

        return models->at(resource_key);
    }

    std::shared_ptr<void> win_d3d11::load_shader(uint64_t shader_path) {
        if (!shaders->contains(shader_path)) {
            vex::post_message("can't create shader");
            return nullptr;
        }
        return shaders->at(shader_path);
    }

    void win_d3d11::clear_assets() const {
        textures->clear();
        texture_dimensions->clear();
        models->clear();
        shaders->clear();
    }

    void win_d3d11::clear_texture(uint64_t image_path) {
        if (textures->contains(image_path)) {
            textures->erase(image_path);
        }

        if (texture_dimensions->contains(image_path)) {
            texture_dimensions->erase(image_path);
        }
    }

    void win_d3d11::clear_model(uint64_t image_path) {
        if (models->contains(image_path)) {
            models->erase(image_path);
        }
    }

    void win_d3d11::clear_shader(uint64_t image_path) {
        if (shaders->contains(image_path)) {
            shaders->erase(image_path);
        }
    }
} // namespace vex::device
