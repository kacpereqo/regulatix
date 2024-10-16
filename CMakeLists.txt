cmake_minimum_required(VERSION 3.29)
project(Regulatix)

set(CMAKE_CXX_STANDARD 23)

add_executable(Regulatix main.cpp
        utils/units.hpp
        arx.cpp
        arx.hpp
        "utils/rng.hpp"
        model.hpp
        utils/errors.hpp
        pid.hpp
        signal_generators/signal_generator.hpp
        signal_generators/sinus.hpp
        signal_generators/square.hpp
        signal_generators/single_jump.hpp
        feedback_loop.hpp)
