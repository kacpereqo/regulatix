//
// Created by remza on 23.10.2024.
//

#ifndef GLOBAL_STORAGE_HPP
#define GLOBAL_STORAGE_HPP

#include "units.hpp"

class GlobalStorage {
private:
    size tick = 0;

    static const GlobalStorage& get_instance() {
        static GlobalStorage instance;
        return instance;
    }

public:
    [[nodiscard]] size get_tick() const {
        return this->tick;
    }

    void increment_tick() {
        this->tick++;
    }
};

#endif

