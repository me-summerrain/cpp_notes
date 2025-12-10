#include <iostream>
#include "Author.h"

Author::Author(std::string name, std::string email, char gender){
    this->name = name;
    setEmail(email);

    /*gender validation*/
    if(gender == 'm' || gender == 'f')
        this->gender = gender;
    else{
        std::cout << "Invalid gender! Set to 'u' (unknown)."<<std::endl;
        this->gender = 'u';
    }
}

std::string Author::getName()const{
    return name;
}

std::string Author::getEamil() const{
    return email;
}

char Author::getGender() const{
    return gender;
}

std::string Author::getEmail()const{
    return email;
}

void Author::setEmail(std::string email){
    /*Validation*/
    size_t position = email.find('@');
    if(position != std::string::npos && position != 0 && position != email.length()-1){
        this->email = email;
    }
    else{
        std::cout << "Invalid email! Set to empty." << std::endl;
        this->email = "";
    }
}

void Author::print() const{
    std::cout << this->name << '(' << this->gender << ") at " << this->email << std::endl;
}