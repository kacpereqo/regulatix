//
// Created by remza on 16.10.2024.
//

#ifndef FEEDBACK_LOOP_HPP
#define FEEDBACK_LOOP_HPP


#include "pid/pid.hpp"
#include "arx/arx.hpp"

#include "../utils/units.hpp"

class FeedbackLoop final : public PidModel, public ModelARX {
private:
    size tick;
    f32 error = 0.f;
    f32 pid_result = 0.f;

public:
    FeedbackLoop(const PidModel& pid, const ModelARX& arx): PidModel(pid), ModelARX(arx) {
        this->tick = 0;
    }

    f32 run(const f32 target_value, const f32 input_signal = 0) {
        error = target_value - input_signal;

        pid_result = this->PidModel::run(error);
        const f32 arx_result = this->ModelARX::run(pid_result);

        this->tick++;

        return arx_result;
    }

    f32 get_error() const
    {
        return error;
    }
    f32 get_pid_result() const
    {
        return pid_result;
    }
};

#endif //FEEDBACK_LOOP_HPP
