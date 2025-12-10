#include <iostream>
#include "Book.h"


Book::Book(std::string name, Author author, double price, int qtyInSock): name(name), author(author){
    setPrice(price);
    setQtyInStock(qtyInSock);
}

std::string Book::getName() const{
    return name;
}

Author Book::getAuthor() const{
    return author;
}

double Book::getPrice() const{
    return price;
}

void Book::setPrice(double price){
    if(price >= 0)
        this->price = price;
    else{
        std::cout << "Price cannot be negative. Set to 0" << std::endl;
        this->price = 0.0;
    }
}

void Book::setQtyInStock(int qtyInSrock){
    this->qtyInStock = qtyInSrock;
}
int Book::getQtyInStock()const{
    return qtyInStock;
}

void Book::print()const{
    std::cout << this->name << " by " << author.getName() << std::endl;
}

std::string Book :: getAuthorName() const{
    return author.getName();
}