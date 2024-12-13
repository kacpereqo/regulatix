#include <iostream>
#include <cmath>
#include "signal_generators/sinus.hpp"
#include "signal_generators/square.hpp"
#include "signal_generators/single_jump.hpp"


bool nearly_equal(float a, float b, float tolerance = 1e-5) 
{
    return std::fabs(a - b) < tolerance;
}


void test_sinus_signal_generator() 
{
    SinusSignalGenerator generator(1.0f, 100);

    if (nearly_equal(generator.generate(0), 0.0f) &&
        nearly_equal(generator.generate(25), 1.0f) &&
        nearly_equal(generator.generate(50), 0.0f) &&
        nearly_equal(generator.generate(75), -1.0f)) 
    {
        std::cerr << "SinusSignalGenerator: Passed\n";
    } 
    else 
    {
        std::cerr << "SinusSignalGenerator: Failed\n";
    }
}


void test_rectangle_signal_generator() 
{
    RectangleSignalGenerator generator(1.0f, 100, 0.5f);

    if (generator.generate(0) == 1.0f &&
        generator.generate(49) == 1.0f &&
        generator.generate(50) == 0.0f &&
        generator.generate(99) == 0.0f &&
        generator.generate(100) == 1.0f) {
        std::cerr << "RectangleSignalGenerator: Passed\n";
    } 
    else 
    {
        std::cerr << "RectangleSignalGenerator: Failed\n";
    }
}


int main() 
{
    test_sinus_signal_generator();
    test_rectangle_signal_generator();

    return 0;
}
