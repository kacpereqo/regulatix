//
// Created by remza on 14.10.2024.
//

#ifndef MODEL_HPP
#define MODEL_HPP

class Model {
public:
    virtual ~Model() = default;

private:
    virtual float run(float input_signal) = 0;
    virtual float noise() const = 0;
};

#endif //MODEL_HPP
