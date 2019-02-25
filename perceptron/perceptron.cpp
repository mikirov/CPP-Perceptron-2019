//
// Created by misho on 24/02/19.
//

#include "perceptron.h"
#include <vector>
#include <cstdlib>
#include "point.h"
using namespace std;


int perceptron::guess(std::vector<int> &inputs) {
    double sum = 0;
    for(int i = 0; i < inputs.size(); i++){
        sum += inputs[i]*weights[i];
    }
    return activation(sum);
}

perceptron::perceptron(int input_count)  {
    for(int i = 0; i < input_count; i++){
        weights.push_back(rand() % 10 - 5); // weights are initially random;
    }
}

double perceptron::activation(double number) {
    if(number >= 0){
        return 1.0;
    }
    return -1.0;
}
// train the perceptron for 1 iteration
void perceptron::train(std::vector<int> &input,int  expected_output) {
    int guess_number = guess(input);
    double error = expected_output - guess_number;

    for(int i = 0; i < weights.size(); i++){
        weights[i] += error * input[i] * learning_factor; // gradient descent
    }
}



