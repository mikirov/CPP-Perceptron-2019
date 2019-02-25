//
// Created by misho on 24/02/19.
//

#include "point.h"
#include <iostream>

using namespace std;

void point::show(char symbol) {
    cout << symbol;
}

point::point(int x, int y, int label) : x(x), y(y), label(label) {

}

int point::getX() const {
    return x;
}

void point::setX(int x) {
    point::x = x;
}

int point::getY() const {
    return y;
}

void point::setY(int y) {
    point::y = y;
}

int point::getLabel() const {
    return label;
}

void point::setLabel(int label) {
    point::label = label;
}

void point::setRight(bool right) {
    point::right = right;
}

bool point::isRight() const {
    return right;
}
