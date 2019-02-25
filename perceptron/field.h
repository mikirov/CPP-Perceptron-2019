//
// Created by misho on 24/02/19.
//

#ifndef MACHINELEARNING_FIELD_H
#define MACHINELEARNING_FIELD_H

#include <vector>
class point;
class ostream;

class field {
private:
    int width;
public:
    int getWidth() const;

    int getHeight() const;

private:
    int height;
public:
    field(int width, int height);
    void add_points(std::vector<point*>& points);
    virtual ~field();

    std::vector<std::vector<point*>> canvas;
    void show();
};


#endif //MACHINELEARNING_FIELD_H
