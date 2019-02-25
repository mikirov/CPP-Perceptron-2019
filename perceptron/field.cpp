//
// Created by misho on 24/02/19.
//

#include "field.h"
#include <vector>
#include<cstdlib>
#include "point.h"
#include <iostream>

using namespace std;
field::field(int width, int height) : width(width), height(height) {
    for(int row = 0; row < height; row++){
        vector<point*> row_vector;
        for(int col = 0; col < width; col++){
            row_vector.push_back(nullptr);
        }
        canvas.push_back(row_vector);
    }
}

void field::show() {
    for( int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            point* p = canvas[row][col];
            if(p){
                if(p->isRight()){
                    if(p->getLabel() == 1){
                        cout << '1';
                    }
                    else{
                        cout << '2';
                    }
                }
                else{
                    p->show('X');
                }
            }
            else{
                cout << '_';
            }
        }
        cout << endl;
    }
}

field::~field() {
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++ ){
            point* p = canvas[row][col];
            delete p;

        }
    }
}

void field::add_points(std::vector<point *>& points) {
    for(auto point : points){
        int row = point->getY();
        int col = point->getX();
        canvas[row][col] = point;
    }
}

int field::getWidth() const {
    return width;
}

int field::getHeight() const {
    return height;
}

//helper function that returns the max y value based on x
//double f(int x){
//    return
//}
