#include <iostream>
#include <iomanip>
#include "Point.h"

int main(){

    Point p1(3, 4);
    p1.print();
    std::cout << "x = " << p1.getX() << std::endl;
    std::cout << "x = " << p1.getY() << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "mag = " << p1.getMagnitude() << std::endl;
    std::cout << "arg = " << p1.getArgument() << std::endl;

    p1.setX(6);
    p1.setY(8);
    p1.print();

    p1.setXY(1, 2);
    p1.print();

    Point p2;
    p2.print();


    return 0;
}

