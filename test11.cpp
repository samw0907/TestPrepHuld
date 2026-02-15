/*
 * File: even_odd.cpp
 * Task: Check if number is even or odd, and if divisible by 6
 Exercise 2: Even or Odd Checker (Simple - Conditionals)
Type: Common Test Scenario
Task:
Write a program that:

Asks the user to input an integer
Determines if it's even or odd
Prints the result
BONUS: If the number is divisible by both 2 AND 3, print "Divisible by 6"

Expected Output Examples:
Enter a number: 7
7 is odd

Enter a number: 12
12 is even
12 is divisible by 6

Enter a number: 8
8 is even
 */

#include <iostream>
using namespace std;

int main() {
    // Your code here
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    if ( num % 2 == 0 && num % 3 == 0) {
        cout << num << " is even." << endl;
        cout << num << " is divisible by 6." << endl;
    } else if ( num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
       cout << num << " is odd." << endl; 
    }
    
    return 0;
}