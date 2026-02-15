/*
 * File: swap_function.cpp
 * Task: Create a function that swaps two integers using references
 * 
 * Exercise 12: Swap Function (Functions - Pass by Reference)
Type: Common Test Scenario - Critical Concept
Task:
Write a function called swap that:

Takes two integers by reference (using &)
Swaps their values
In main(), create two variables a = 10 and b = 20, swap them, and print before/after

Expected Output:
Before swap: a = 10, b = 20
After swap: a = 20, b = 10
Time Estimate: 6-7 minutes
 */

#include <iostream>
using namespace std;

// Declare your swap function here
// Remember: use & for pass by reference!

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
};


int main() {
    int a = 10;
    int b = 20;
    
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // Call swap function
    swap(a, b);
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}