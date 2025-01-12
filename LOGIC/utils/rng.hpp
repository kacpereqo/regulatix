#ifndef RANDOM_HPP
#define RANDOM_HPP

#include "units.hpp"
#include <random>

class Random {
public:
    static f32 random_uniform( f32 min, f32 max);
    static f32 random_normal(f32 mean, f32 std_dev);
};

inline f32 Random::random_uniform(const f32 min, const f32 max) {
    static std::random_device rd;
    static std::mt19937 mt(rd());
    static std::uniform_real_distribution<f32> dist(min, max);

    return dist(mt);
}

inline f32 Random::random_normal(const f32 mean, const f32 std_dev) {
    static std::random_device rd;
    static std::mt19937 mt(rd());
    static std::normal_distribution<f32> dist(mean, std_dev);

    return dist(mt);
}

#endif //RANDOM_HPP
