#include <iostream>
#include <iomanip>
#include "Time.h"

// Time::Time(int hour, int minute, int second){
//     this->hour = hour;
//     this->minute = minute;
//     this->second = second;
// }
Time::Time(int hour, int minute, int second): hour(hour), minute(minute), second(second){}


int Time::getHour() const{
    return this->hour;
}

void Time::setHour(int hour){
    this->hour = hour;
}

int Time::getMinute() const{
    return this->minute;
}

void Time::setMinute(int minute){
    this->minute = minute;
}

int Time::getSecond() const{
    return this->second;
}

void Time :: setSecond(int second){
    this->second = second;
}

void Time::setTime(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Time::print() const{
    std::cout << std::setfill('0'); // zero-filled, need <iomanip>, sticky
    std::cout << std::setw(2) << hour    // set width to 2 spaces, need <iomanip>, non-sticky
    << ":" << std::setw(2) << minute
    << ":" << std::setw(2) << second << std::endl;
}


// increase this instance by one second
void Time::nextSecond(){
    ++this->second;
    if(second >= 60){
        second = 0;
        ++this->minute;
    }

    if(minute >= 60){
        minute = 0;
        ++this->hour;
    }

    if(hour >= 24){
        this->hour = 0;
    }
}