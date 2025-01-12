//
// Created by remza on 14.10.2024.
//

#ifndef SIGNAL_GENERATOR_HPP
#define SIGNAL_GENERATOR_HPP

#include "../utils/units.hpp"

class SignalGenerator {
public:
    virtual ~SignalGenerator() = default;

    SignalGenerator() = default;

    f32 generate(const index tick) {
        return amplitude * this->_generate(tick);
    }

protected:
    virtual f32 _generate(index tick) = 0;
    f32 amplitude = 0;
};

#endif //SIGNAL_GENERATOR_HPP
