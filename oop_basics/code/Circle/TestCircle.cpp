#include<iostream>
#include "Circle.h"

int main(){
    Circle c1(1.2, "red");
    std::cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea() << " Color=" << c1.getColor() << std::endl;
 
   c1.setRadius(2.1);   // Change radius and color of c
   c1.setColor("blue");
   std::cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()<< " Color=" << c1.getColor() << std::endl;
 
   // Construct another instance using the default constructor
   Circle c2;
   std::cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea() << " Color=" << c2.getColor()  << std::endl;
   return 0;
}