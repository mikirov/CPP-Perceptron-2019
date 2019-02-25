//
// Created by misho on 24/02/19.
//

#ifndef MACHINELEARNING_POINT_H
#define MACHINELEARNING_POINT_H


class point {
public:
    void show(char symbol);

private:
    int x;
    int y;
    bool right;
public:
    void setRight(bool right);

public:
    bool isRight() const;

public:
    point(int x, int y, int label);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    int getLabel() const;

    void setLabel(int label);

private:
    int label;

};


#endif //MACHINELEARNING_POINT_H
