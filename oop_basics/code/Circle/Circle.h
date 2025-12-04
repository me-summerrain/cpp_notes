#ifndef CIRCLE_H
#define CIRCLE_H

// The Circle classs Header (Circle.h)
#include <string>

class Circle{
private:
    double radius;
    std::string color;

public:
    // Declare prototype of member functions
    // Constructor with default values
    Circle(double radius = 1.0, std::string color="red");

    // public getters and setters for private data members
    double getRadius() const;
    void setRadius(double raduis);
    std::string getColor() const;
    void setColor(std::string color);

    // public member fucntion
    double getArea() const;

};

#endif