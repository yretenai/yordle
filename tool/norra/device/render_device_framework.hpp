//
// Created by Lilith on 2021-05-08.
//

#pragma once

namespace norra::device {
    class render_device_framework {
    protected:
        virtual bool startup() = 0;

    public:
        virtual ~render_device_framework() = default;
        virtual void run() = 0;
        virtual void close() = 0;
        virtual void shutdown() = 0;
    };
} // namespace norra::device
