//
// Created by Lilith on 2021-05-08.
//

#pragma once

namespace norra::render_fx {
    class IRenderFramework {
    public:
        ~IRenderFramework() = default;
        virtual ~IRenderFramework() = default;
        virtual void CreateWindow() = 0;
        virtual void DestroyWindow() = 0;
    };
}
