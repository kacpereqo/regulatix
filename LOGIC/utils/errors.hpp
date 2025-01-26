
#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <stdexcept>
#include <string>
#include "units.hpp"

namespace error {
inline std::invalid_argument negative_argument(const char* argument_name) {
    return std::invalid_argument("Argument " + std::string(argument_name) + " must be non-negative.");
}

inline std::invalid_argument argument_not_in_range(const char* argument_name,const f32 left_range, const f32 right_range) {
    return std::invalid_argument("Argument " + std::string(argument_name) + " must be in range [" + std::to_string(left_range) + ", " + std::to_string(right_range) + "].");
}
}

#endif //ERRORS_HPP
