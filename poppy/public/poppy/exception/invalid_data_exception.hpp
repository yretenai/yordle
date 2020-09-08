//
// Created by yretenai on 2020-09-08.
//

#ifndef POPPY_INVALID_DATA_EXCEPTION_HPP
#define POPPY_INVALID_DATA_EXCEPTION_HPP

#include <exception>
#include <string>

namespace poppy::exception {
    class invalid_data_exception : public std::exception {
    public:
        std::string reason_message;
        explicit invalid_data_exception(const char *message = "unknown\n") {
            reason_message = message;
        }

        const char *what() const noexcept override {
            return reason_message.c_str();
        }
    };
} // namespace poppy::exception

#endif //POPPY_INVALID_DATA_EXCEPTION_HPP
