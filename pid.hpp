//
// Created by remza on 14.10.2024.
//

#ifndef PID_HPP
#define PID_HPP

#include <numeric>

#include "utils/units.hpp"
#include <vector>

class PidModel {
private:
    f32 k;
    f32 t;
    f32 td;

    size tick;

    std::vector<f32> values;

public:
    PidModel(f32 k, f32 t, f32 td);
    float run(f32 input_signal);

    void reset() {
        this->tick = 0;
        this->values.clear();
    }


};

inline PidModel::PidModel(const f32 k, const f32 t = 0, const f32 td =0 ) {
    this->k = k;
    this->t = t;
    this->td = td;
    this->tick = 0;

    this->values = std::vector<f32>(64, 0.0f);
}

inline float PidModel::run(const f32 input_signal) {
    f32 result = 0;
    this->values.push_back(input_signal);

    // Proportional
    if (this->k != 0) {
        result += this->k * input_signal;
    }

    // Integral
    if (this->t != 0) {
        f32 sum = std::accumulate(this->values.begin(), this->values.end(), 0.0f);
        sum = sum/this->t;

        result += sum;
    }

    // Derivative
    if(this->td != 0 && this->tick > 0) {
        f32 diff = this->values[this->tick] - this->values[this->tick - 1];
        diff = this->td * diff;

        result += diff;
    }

    this->tick++;

    return result;
}

#endif //PID_HPP
