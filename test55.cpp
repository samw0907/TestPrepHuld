// main.cpp
#include <iostream>
#include "test55.hpp"
using namespace std;

int main() {
  // Create account for "John" with initial balance 1000.0
  BankAccount account("John", 1000.0);
  
  // Print account info
  cout << "Account Holder: " << account.getAccountHolder() << endl;
  cout << "Balance: $" << account.getBalance() << endl;
  
  // Deposit 500
  account.deposit(500.0);
  cout << "After deposit: $" << account.getBalance() << endl;
  
  // Withdraw 200
  account.withdraw(200.0);
  cout << "After withdrawal: $" << account.getBalance() << endl;
  
  return 0;
}