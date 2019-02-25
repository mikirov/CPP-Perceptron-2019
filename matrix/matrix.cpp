//
// Created by misho on 24/02/19.
//

#include "matrix.h"
#include <vector>
using namespace std;

matrix::~matrix() {
    delete data;
}

matrix::matrix(int rows, int cols) {
    data = new double[rows * cols];
}

double matrix::at(int x, int y) {
    return data[y * cols + x];
}


int matrix::getRows() const {
    return rows;
}

void matrix::setRows(int rows) {
    matrix::rows = rows;
}

int matrix::getCols() const {
    return cols;
}

void matrix::setCols(int cols) {
    matrix::cols = cols;
}

vector<vector<double>> matrix::toVectorMatrix() {
    vector<vector<double>> result;
    for(int row = 0; row < rows; row++){
        vector<double> row_vector;
        int starting_index = row * cols;
        for(int col = 0; col < cols; col++){

            row_vector.push_back(data[starting_index + col]);
        }
        result.push_back(row_vector);
    }
    return result;
}

matrix::matrix(const matrix &other) : matrix(other.rows, other.cols) {
    for(int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++){
            this->data[row * cols + col] = other.data[row * cols + col];
        }
    }
}
/*
matrix matrix::operator+(const double number) {
    matrix result(*this);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result.setElement(j, i, this->at(j, i) + number);
        }
    }
    return result;
}

matrix &matrix::operator+=(const double number) {
    *this = operator+(number);
    return *this;
}

matrix matrix::operator-(const double number) {
    matrix result(*this);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result.setElement(j, i, this->at(j, i) - number);
        }
    }
    return *this;
}

matrix &matrix::operator-=(const double number) {
    *this = operator-(number);
    return *this;
}*/
/*
matrix matrix::operator*(const double number) {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            double element = at(j, i);
            element*= number;
            setElement(j, i, element);
        }
    }
    return *this;
}*/
/*
matrix &matrix::operator*=(const double number) {
    *this = operator*(number);
    return *this;
}

vector<double> matrix::operator*(const std::vector<double> &vector) {
    return <#initializer#>;

}

matrix &matrix::operator*=(const std::vector<double> &vector) {

}

void matrix::setElement(int x, int y, double value) {
    data[y * cols + x] = value;
}

matrix matrix::operator*(const matrix &matrix) {
    return matrix(0, 0);

}

matrix &matrix::operator*=(const matrix &matrix) {
    return <#initializer#>;
}

*/

