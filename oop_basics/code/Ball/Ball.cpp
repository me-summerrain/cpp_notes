#include <iostream>
#include <iomanip>
#include "Ball.h"

Ball::Ball(double x, double y, double xSpeed, double ySpeed) : x(x), y(y), xSpeed(xSpeed), ySpeed(ySpeed){}

// getter and setter for x
double Ball::getX() const{
    return x;
}
void Ball::setX(double x){
    this->x = x;
}

// getter and setter for y
double Ball::getY() const{
    return y;
}
void Ball::setY(double y){
    this->y = y;
}

// getter and setter for xSpeed
double Ball::getXSpeed() const{
    return xSpeed;
}
void Ball::setXSpeed(double xSpeed){
    this->xSpeed = xSpeed;
}

// getter and setter for ySpeed
double Ball::getYSpeed() const{
    return ySpeed;
}
void Ball::setYSpeed(double ySpeed){
    this->ySpeed = ySpeed;
}

// setter for x and y
void Ball::setXY(double x, double y){
    this->x = x;
    this->y = y;
}

// setter for xSpeed and ySpeed
void Ball::setXYSpeed(double xSpeed, double ySpeed){
    this->xSpeed = xSpeed;
    this->ySpeed = ySpeed;
}


// Move the ball by increases x and y by xSpeed and ySpeed
void Ball::move(){
    x += xSpeed; // increment x by xSpeed
    y += ySpeed; // increment y by ySpeed
}

// print  a description about this Ball instance
void Ball::print() const{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Ball @ (" << x << ", " << y << ") with speed (" << xSpeed << ", " << ySpeed << ")" << std::endl;
}