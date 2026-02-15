// BankAccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
  private:
    string accountHolder;
    double balance;
  
  public:
    BankAccount(string accountHolder, double balance);
    
    string getAccountHolder();

    double getBalance();

    void deposit(double amount);

    void withdraw(double amount);
};

#endif