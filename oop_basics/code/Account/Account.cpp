#include<iostream>
#include <iomanip>
#include "Account.h"

Account::Account(int accountNumeber, double balance):accountNumeber(accountNumeber), balance(balance){}

int Account::getAccountNumber() const{
    return accountNumeber;
}

double Account::getBalance() const{
    return balance;
}

void Account::setBalance(double balance){
    this->balance = balance;
}

void Account::credit(double amount){
    balance += amount;
}

void Account::debit(double amount){
    if(amount <= balance){
        balance -=amount;
    }else{
        std::cout << "Amount withdrawn exceeds the current balance!" << std::endl;
    }
}

void Account::print()const{
    std::cout <<  std::fixed << std::setprecision(2);
    std::cout << "A/C no: " << accountNumeber << " Balance=$" << balance << std::endl;
}