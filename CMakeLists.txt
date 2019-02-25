cmake_minimum_required(VERSION 3.13)
project(MachineLearning)

set(CMAKE_CXX_STANDARD 14)

add_executable(MachineLearning perceptron/main.cpp matrix/matrix.cpp matrix/matrix.h perceptron/point.cpp perceptron/point.h perceptron/field.cpp perceptron/field.h perceptron/perceptron.cpp perceptron/perceptron.h)