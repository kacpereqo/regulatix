#include <iostream>
#include "feedback_loop.hpp"
#include "pid.hpp"
#include "arx.hpp"

int main() {
    FeedbackLoop loop(PidModel(2.0f, 0.5f, 2.0f), ModelARX( {0.1f}, {0.1f}, 1.0f, 0.1f));

    f32 last = 0.0f;
    for (size i = 0; i < 500; i++) {
        const f32 result = loop.run(50.0f, last);
        last = result;
        std::cout << result << std::endl;
    }
}