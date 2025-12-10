#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Author.h"

class Book{
private:
    std::string name;
    Author author;
    double price;
    int qtyInStock;

public:
    Book(std::string name, Author author, double price, int qtyInstock = 0);

    std::string getName() const;
    Author getAuthor() const;

    double getPrice() const;
    void setPrice(double price);

    int getQtyInStock() const;
    void setQtyInStock(int qtyInStock);

    void print() const;
    std::string getAuthorName() const;
};

#endif