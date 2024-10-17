#include <iostream>
#include "feedback_loop.hpp"
#include "pid.hpp"
#include "arx.hpp"
#include "signal_generators/sinus.hpp"


int main()
    {
        FeedbackLoop loop(PidModel(2.0f, 0.5f, 2.0f), ModelARX( {0.1f}, {0.1f}, 1.0f, 0.5f));

        f32 last = 0.0f;
        SinusSignalGenerator generator(1.0f, 50);

        for (size i = 0; i < 10; i++) {
            const f32 signal = generator.generate(i);
            const f32 result = loop.run(signal, last);

            last = result;

            std::cout << result << " | " << signal << std::endl;
        }
    }