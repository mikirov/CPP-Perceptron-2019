//
// Created by misho on 24/02/19.
//

#ifndef MACHINELEARNING_MATRIX_H
#define MACHINELEARNING_MATRIX_H

#include <vector>

class matrix {
public:
    matrix(int, int);
    virtual ~matrix();
    double at(int x, int y);
    void setElement(int x, int y, double value);

    std::vector<std::vector<double>> toVectorMatrix();
    matrix(const matrix& other);
    /*matrix operator+(const double number);
    matrix& operator+=(const double number);

    matrix operator-(const double number);
    matrix& operator-=(const double number);
*/
/*
    matrix operator*(const double number);

    matrix& operator*=(const double number);

    std::vector<double> operator*(const std::vector<double> &vector);
    matrix& operator*=(const std::vector<double>& vector);

    matrix operator*(const matrix &matrix);
    matrix& operator*=(const matrix& matrix);
*/


private:
    double* data;
    int rows, cols;
public:
    int getRows() const;

    void setRows(int rows);

    int getCols() const;

    void setCols(int cols);

};


#endif //MACHINELEARNING_MATRIX_H
