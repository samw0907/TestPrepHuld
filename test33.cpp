/*
 * File: bank_account.cpp
 * Task: Create a complete BankAccount class from scratch
 * 
 * Exercise 24: Bank Account Class - Build from Scratch
Type: Object-Oriented Programming - Full Class Creation
Objective: Create the ENTIRE class yourself. No template provided - you write the whole thing.
Requirements:
Create a class called BankAccount with:

Private members: balance (double), accountNumber (int)
Constructor: Takes account number and initial balance
Methods:

deposit(double amount) - add to balance
withdraw(double amount) - subtract from balance
getBalance() - return current balance
getAccountNumber() - return account number



Expected Output:
Account 12345: Initial balance = 1000
After deposit of 500: Balance = 1500
After withdrawal of 200: Balance = 1300

Account 67890: Initial balance = 500
After deposit of 100: Balance = 600
Time: 10-12 minutes
 */

#include <iostream>
using namespace std;

// Create your BankAccount class here
 class BankAccount {
    private:
        double balance;
        int accountNumber;

    public:
    BankAccount(int ac, double ba) : accountNumber(ac), balance(ba) {};

    void deposit(double valueIn) {
       balance += valueIn;
    }

    void withdraw(double valueOut) {
       balance -= valueOut;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
 };



int main() {
    BankAccount acc1(12345, 1000);
    cout << "Account " << acc1.getAccountNumber() 
         << ": Initial balance = " << acc1.getBalance() << endl;
    
    acc1.deposit(500);
    cout << "After deposit of 500: Balance = " << acc1.getBalance() << endl;
    
    acc1.withdraw(200);
    cout << "After withdrawal of 200: Balance = " << acc1.getBalance() << endl;
    
    cout << endl;
    
    BankAccount acc2(67890, 500);
    cout << "Account " << acc2.getAccountNumber() 
         << ": Initial balance = " << acc2.getBalance() << endl;
    
    acc2.deposit(100);
    cout << "After deposit of 100: Balance = " << acc2.getBalance() << endl;
    
    return 0;
}