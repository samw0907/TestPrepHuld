// BankAccount.cpp
#include "test55.hpp"

// TODO: Implement constructor
// Initialize accountHolder and balance using initializer list
BankAccount::BankAccount(string s, double b) : accountHolder(s), balance(b) {};

string BankAccount::getAccountHolder() {
    return accountHolder;
}

// TODO: Implement getBalance
// Should return the current balance
double BankAccount::getBalance() {
    return balance;
}
// TODO: Implement deposit
// Should add the given amount to balance
void BankAccount::deposit(double amount) {
    balance += amount;
}

// TODO: Implement withdraw
// Should subtract the given amount from balance
void BankAccount::withdraw(double amount) {
    balance -= amount;
}