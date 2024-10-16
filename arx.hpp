//
// Created by remza on 14.10.2024.
//

#ifndef ARX_HPP
#define ARX_HPP

#include <vector>
#include "utils/units.hpp"
#include "model.hpp"


class ModelARX : public Model {
private:
    u64 tick;

    std::vector<f32> a;
    std::vector<f32> b;

    size a_size;
    size b_size;

    std::vector<f32> u;
    std::vector<f32> y;

    f32 delay; // tick delay, also known as k
    f32 noise_coefficient; // noise coefficient, also known as z

    float noise() const override;

public:
    ModelARX( const std::vector<f32>& a, const std::vector<f32>& b,  f32 delay , f32 noise_coefficient );
    float run(float input_signal) override;

    void set_delay(f32 delay);
    void set_noise_coefficient(f32 noise_coefficient);
    void set_a(const std::vector<f32>& a);
    void set_b(const std::vector<f32>& b);

};


#endif //ARX_HPP
