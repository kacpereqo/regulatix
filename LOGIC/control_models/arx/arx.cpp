//
// Created by remza on 14.10.2024.
//

#include "arx.hpp"
#include "../../utils/rng.hpp"
#include "../../utils/errors.hpp"

ModelARX::ModelARX( const std::vector<f32>& a, const std::vector<f32>& b, const f32 delay, const f32 noise_coefficient) {
    this->set_a(a);
    this->set_b(b);

    this->set_delay(delay);
    this->set_noise_coefficient(noise_coefficient);

    this->tick = 0;
}

float ModelARX::run(const f32 input_signal) {
    f32 result = 0;

    for (i32 i = 0; i < this->a_size; i++) {
        if (this->tick - i > delay) {
            const index u_idx = (this->tick + a_size - i - 1) % a_size;
            result += this->b[i] * this->u[u_idx];
        }
    }
    for (i32 i = 0; i < this->b_size; i++) {
        if (this->tick - i > delay) {
            const index y_idx = (this->tick + b_size - i - 1) % b_size;
            result -= this->a[i] * this->y[y_idx];
        }
    }

    result += this->noise();

    const index u_index = this->tick % this->a_size;
    const index y_index = this->tick % this->b_size;

    this->u[u_index] = input_signal;
    this->y[y_index] = result;

    this->tick++;

    return result;
}

float ModelARX::noise() const {
    return Random::random_normal(0, this->noise_coefficient);
}

void ModelARX::set_delay(const f32 delay) {
    if (delay < 0)
        throw error::negative_argument("delay");
    this->delay = delay;
}

void ModelARX::set_a(const std::vector<f32>& a) {
    this->a = a;
    this->a_size = a.size();
    this->u = std::vector<f32>(this->a_size, 0.0f);
}

void ModelARX::set_b(const std::vector<f32>& b) {
    this->b = b;
    this->b_size = b.size();
    this->y = std::vector<f32>(this->b_size, 0.0f);
}

void ModelARX::set_noise_coefficient(const f32 noise_coefficient) {
    this->noise_coefficient = noise_coefficient;
}
std::vector<f32> ModelARX::get_a() const
{
    return a;
}
std::vector<f32> ModelARX::get_b() const
{
    return b;
}
float ModelARX::get_delay() const
{
    return delay;
}


