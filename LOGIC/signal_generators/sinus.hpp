//
// Created by remza on 14.10.2024.
//

#ifndef SINUS_HPP
#define SINUS_HPP
#define _USE_MATH_DEFINES

#include "signal_generator.hpp"
#include <cmath>


class SinusSignalGenerator : public SignalGenerator {

private:
    u32 period;

public:
    SinusSignalGenerator(const f32 amplitude,const size period) {
        this->amplitude = amplitude;
        this->period = period;
    }

    f32 _generate(const index tick) override {
        const f32 temp = static_cast<f32>(tick % this->period) / static_cast<f32>(this->period);
        return static_cast<f32>(std::sin(temp * 2.0f * M_PI));
    }
};

#endif //SINUS_HPP
