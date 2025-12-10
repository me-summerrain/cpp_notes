#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>

class Author{
private:
    std::string name;
    std::string email;
    char gender;
public:
    Author(std::string, std::string, char);

    std::string getName() const;
    std::string getEamil() const;
    char getGender() const;

    std::string getEmail() const;
    void setEmail(std::string email);

    void print() const;
};


#endif