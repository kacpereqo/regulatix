cmake_minimum_required(VERSION 3.29)
project(Regulatix)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

add_executable(Regulatix main.cpp
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
        Filesystem/file_manager.hpp
        filesystem/csv.hpp
        Filesystem/file_factory.hpp
        filesystem/abstract_file_factory.hpp
        utils/global_storage.hpp)

