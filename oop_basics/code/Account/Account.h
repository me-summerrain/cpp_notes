#ifndef ACCOUNT_H 
#define ACCOUNT_H

class Account{
private:
    int accountNumeber;
    double balance;

public:
    Account(int accountNumeber, double balance = 0.0);
    int getAccountNumber() const;

    double getBalance() const;
    void setBalance(double balance);

    void credit(double amount);
    void debit(double amount);
    void print() const;
};

#endif