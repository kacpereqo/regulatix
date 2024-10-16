//
// Created by remza on 16.10.2024.
//

#ifndef FEEDBACK_LOOP_HPP
#define FEEDBACK_LOOP_HPP


#include "pid.hpp"
#include "arx.hpp"

#include "utils/units.hpp"

class FeedbackLoop {
private:
    PidModel pid;
    ModelARX arx;

    size tick;

public:
    FeedbackLoop(const PidModel  & pid, const ModelARX & arx): pid(pid), arx(arx) {
        this->pid = pid;
        this->arx = arx;
        this->tick = 0;
    }

    f32 run(const f32 target_value, const f32 input_signal = 0) {
        const f32 error = target_value - input_signal;

        const f32 pid_result = this->pid.run(error);
        const f32 arx_result = this->arx.run(pid_result);

        this->tick++;

        return arx_result;
    }
};

#endif //FEEDBACK_LOOP_HPP
