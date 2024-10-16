//
// Created by remza on 14.10.2024.
//

#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "signal_generator.hpp"
#include "../utils/errors.hpp"

class RectangleSignalGenerator : public SignalGenerator {

private:
    u32 period;
    f32 fill{};

    void set_fill(const f32 fill) {
        if (fill < 0 || fill > 1)
            throw error::argument_not_in_range("fill", 0, 1);
        this->fill = fill;
    }


public:
    RectangleSignalGenerator(const f32 amplitude,const u32 period, const f32 fill) {
        this->amplitude = amplitude;
        this->period = period;
        this->set_fill(fill);
    }

    f32 _generate(const index tick) override {
        const f32 lval = static_cast<f32>(tick % this->period);
        const f32 rval = this->fill * static_cast<f32>(this->period);

        if (lval < rval)
            return this->amplitude;
        else
            return 0;
    }
};

#endif //SQUARE_HPP
