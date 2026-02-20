/*
 * File: pointer_vs_reference.cpp
 * Task: Compare pointer and reference parameter passing
 * 
 * Exercise 21: Pointer vs Reference Comparison
Type: Concept Reinforcement - Quick
Objective: Understand when to use pointers vs references. Create two functions that modify a value - one using reference, one using pointer. Both should work the same.
Expected Output:
Original: 10
After reference: 15
After pointer: 20
Key Concepts:

Reference: void addFive(int& x) { x += 5; }
Pointer: void addFive(int* x) { *x += 5; }
Call reference: addFive(num)
Call pointer: addFive(&num)

Time: 5 minutes
 */

#include <iostream>
using namespace std;

void addFiveRef(int& x) {
    // Add 5 using reference
    x = x + 5;
}

void addFivePtr(int* x) {
    // Add 5 using pointer
    *x = *x +5;
}

int main() {
    int num = 10;
    cout << "Original: " << num << endl;
    
    addFiveRef(num);
    cout << "After reference: " << num << endl;
    
    addFivePtr(&num);
    cout << "After pointer: " << num << endl;
    
    return 0;
}