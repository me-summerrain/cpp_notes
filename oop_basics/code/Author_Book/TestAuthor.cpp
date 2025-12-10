#include <iostream>
#include "Author.h"

int main(){

    Author au1("Mark Twain", "mark@example.com", 'm');
    au1.print();

    au1.setEmail("@asddf.com");
    au1.print();

    Author au2("Someone", "someone.com@", 'p');
    au2.print();

    return 0;
}