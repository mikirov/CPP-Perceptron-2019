//
// Created by misho on 24/02/19.
//

#ifndef MACHINELEARNING_PERCEPTRON_H
#define MACHINELEARNING_PERCEPTRON_H


#include "field.h"

class perceptron {

public:
public:
    perceptron(int input_count);

    int guess(std::vector<int> &input);
    void train(std::vector<int> &input, int expected_output);
private:

    std::vector<double> weights;
    virtual double activation(double number); // activation function
    const double learning_factor = 0.1; // TODO: move to constructor

};


#endif //MACHINELEARNING_PERCEPTRON_H
