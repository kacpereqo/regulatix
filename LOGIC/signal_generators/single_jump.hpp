//
// Created by remza on 15.10.2024.
//

#ifndef SINGLE_JUMP_HPP
#define SINGLE_JUMP_HPP

#include "signal_generator.hpp"
#include "iostream"

class SingleJumpGenerator : public SignalGenerator {

private:
    u32 activation_tick;

public:
    SingleJumpGenerator(const f32 amplitude,const u32 activation_tick) {
    this->activation_tick = activation_tick;
        this->amplitude = amplitude;
    }

    f32 _generate(const index tick) override {
        if (tick <= this->activation_tick)
            return 1.0f;
        else
            return 0.0f;
    }
};

#endif //SINGLE_JUMP_HPP
