cmake_minimum_required(VERSION 3.28)
project(LOGIC)

set(CMAKE_CXX_STANDARD 23)

add_library(LOGIC STATIC #main.cpp
        utils/units.hpp
        control_models/arx/arx.cpp
        control_models/arx/arx.hpp
        "utils/rng.hpp"
        control_models/model.hpp
        utils/errors.hpp
        control_models/pid/pid.hpp
        signal_generators/signal_generator.hpp
        signal_generators/sinus.hpp
        signal_generators/square.hpp
        signal_generators/single_jump.hpp
        control_models/feedback_loop.hpp
        filesystem/file_manager.hpp
        filesystem/csv.hpp
        filesystem/file_factory.hpp
        filesystem/abstract_file_factory.hpp
        utils/global_storage.hpp)

