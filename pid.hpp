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

    f32 proportional;
    f32 integral;
    f32 derivative;

    void calculate_proportional(f32 input_signal);
    void calculate_integral(f32 input_signal);
    void calculate_derivative(f32 input_signal);

public:
    std::vector<f32> values;

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

    this->values = std::vector<f32>();
}

inline void PidModel::calculate_proportional(const f32 input_signal) {
    this->proportional = this->k * input_signal;
}

inline void PidModel::calculate_integral(const f32 input_signal) {
    if (this->t != 0) {
        f32 sum = std::accumulate(this->values.begin(), this->values.end(), 0.0f);
        sum  = sum/this->t;
    }
}

inline void PidModel::calculate_derivative(const f32 input_signal) {
    if(this->td != 0 && this->tick > 0) {
        f32 diff = this->values[this->tick] - this->values[this->tick - 1];
        diff = this->td * diff;

        this->derivative = diff;
    }
}

inline float PidModel::run(const f32 input_signal) {
    this->values.push_back(input_signal);

    calculate_proportional(input_signal);
    calculate_integral(input_signal);
    calculate_derivative(input_signal);

    f32 result = 0;
    result += this->proportional;
    result += this->integral;
    result += this->derivative;

    this->tick++;

    return result;
}

#endif //PID_HPP
