#include <iostream>
#include "Time.h"

 int main(){

    Time t1(23, 59, 50);

    // Testing all public members
    t1.print();
    t1.setHour(12);
    t1.setMinute(30);
    t1.setHour(15);
    t1.print();
    std::cout << "Hour is " << t1.getHour() << std::endl;
    std::cout << "Minute is " << t1.getMinute() << std::endl;
    std::cout << "Second is " << t1.getSecond() << std::endl;
    
    // Testing constructor with default values
    Time t2;
    t2.print(); // 00:00:00
    t2.setTime(1, 2, 3);
    t2.print(); //01: 02: 03

    Time t3(12);
    t3.print(); //12:00:00

    // Test nextSecond()
    Time t4(23, 59, 58);
    t4.print();
    t4.nextSecond();
    t4.print();
    t4.nextSecond();
    t4.print();

    // No input validation
    Time t5(25, 61, 99);    // values out of range
    t5.print();  // 25:61:99

    return 0;
 }
