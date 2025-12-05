#include <iostream>
#include "Ball.h"

int main(){

    Ball ball;
    ball.print();  // Ball @ (0.00, 0.00) with speed (0.00, 0.00)

    ball.setXY(1.1, 2.2);
    ball.setXYSpeed(3.3, 4.4);
    ball.print();  // Ball @ (1.10, 2.20) with speed (3.30, 4.40)

    ball.setX(5.5);
    ball.setY(6.6);
    std::cout << "x is " << ball.getX() << std::endl;   // x is 5.50
    std::cout << "y is " << ball.getY() << std::endl;   // y is 6.60

    ball.move();
    ball.print(); // Ball @ (8,80, 11.00) with speed (3.30, 4.40)


    return 0;
}