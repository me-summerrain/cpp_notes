#include <iostream>
#include <cmath>
#include "Point.h"

Point::Point(int x, int y): x(x), y(y){}

int Point::getX() const{
    return x;
}

void Point::setX(int x){
    this->x = x;
}

int Point::getY() const{
    return y;
}

void Point::setY(int y){
    this->y = y;
}

void Point::setXY(int x, int y){
    this->x = x;
    this->y = y;
}

double Point::getMagnitude()const{
    return sqrt(x*x + y*y);
}

double Point::getArgument() const{
    return atan2(y, x);
}

void Point::print() const{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}