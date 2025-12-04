// Circle class implementation (Circle.cpp)
#include "Circle.h"

// Constructor
// Default values shall only be specified in the declaration,
// cannot be repeated in definition

Circle::Circle(double radius, std::string color){
    this->radius = radius;
    this->color = color;
}

// public getter for private data member raduis
double Circle::getRadius() const{
    return radius;
}

// public setter for private data member raduis
void Circle::setRadius(double raduis){
    this->radius = raduis;
}


// public getter for private data member color
std::string Circle::getColor() const{
    return color;
}

// public setter for private data member color
void Circle::setColor(std::string color){
    this->color = color;
}

// a public member function
double Circle :: getArea() const{
    return radius*radius*3.14159265;
}
