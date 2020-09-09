//
// Created by yretenai on 2020-09-09.
//

#ifndef POPPY_NOT_IMPLEMENTED_EXCEPTION_HPP
#define POPPY_NOT_IMPLEMENTED_EXCEPTION_HPP

#include <exception>
#include <string>

namespace poppy::exception {
    class not_implemented_exception : public std::exception {
    public:
        std::string reason_message;
        explicit not_implemented_exception(const char *message = "not implemented") {
            reason_message = message;
        }

        const char *what() const noexcept override {
            return reason_message.c_str();
        }
    };
} // namespace poppy::exception

#endif //POPPY_NOT_IMPLEMENTED_EXCEPTION_HPP
