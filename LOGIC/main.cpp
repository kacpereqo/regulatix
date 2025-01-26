#include <iostream>
#include "control_models/feedback_loop.hpp"
#include "control_models/pid/pid.hpp"
#include "control_models/arx/arx.hpp"
#include "signal_generators/sinus.hpp"
#include "filesystem/csv.hpp"

int main()
    {
        constexpr size ITERATIONS = 100;

        FeedbackLoop loop(PidModel(2.0f, 0.5f, 2.0f), ModelARX( {0.1f}, {0.1f}, 1.0f, 0.5f));

        f32 last = 0.0f;
        SinusSignalGenerator generator(1.0f, 50);

        std::vector<std::vector<f32>> val;
        val.reserve(ITERATIONS);

        for (size i = 0; i < ITERATIONS; i++) {
            const f32 signal = generator.generate(i);
            const f32 result = loop.run(signal, last);

            std::vector<f32> temp;
            temp.reserve(3);

            temp.push_back(static_cast<f32>(i));
            temp.push_back(signal);
            temp.push_back(result);

            val.push_back(temp);

            last = result;

            std::cout << result << " | " << signal << std::endl;
        }
        const std::vector<std::string> header = {"Time", "Signal", "Result"};

        CSVFactory::write("output.csv", header, val);
    }
