/*
 * File: is_even_function.cpp
 * Task: Create a function to check if a number is even
 * 
 * ## **Exercise 11: Simple Function (Functions - Pass by Value)**

**Type:** Common Test Scenario

**Task:**
Write a program with a function called `isEven` that:
- Takes an integer as a parameter
- Returns `true` if the number is even, `false` if odd
- In `main()`, test it with numbers 4, 7, and 10

**Expected Output:**
```
4 is even
7 is odd
10 is even
 */

#include <iostream>
using namespace std;


bool isEven (int number) {
    if (number % 2 == 0) {
        cout << number << " is even" << endl;
        return true;
    } else {
        cout << number << "is odd" << endl;
        return false;
    }
};


int main() {

    int number = 0;

    cout << "Please enter number" << endl;
    cin >> number;
    isEven(number);
    
    return 0;
}