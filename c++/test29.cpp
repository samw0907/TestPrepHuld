/*
 * File: swap_pointers.cpp
 * Task: Swap two integers using pointers
 * 
 * Exercise 20: Swap with Pointers
Type: Common Pattern - Pointer Practice
Objective: Write a swap function using pointers instead of references. This reinforces the difference between & (reference) and * (pointer).
Expected Output:
Before: x=5, y=10
After: x=10, y=5
Key Concepts:

Pass addresses with &x when calling
Use *a and *b inside function to access/modify values
Same temp variable swap logic

Time: 3-4 minutes
 */

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    // Swap using pointers
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int x = 5, y = 10;
    cout << "Before: x=" << x << ", y=" << y << endl;
    
    swap(&x, &y);  // Pass addresses
    
    cout << "After: x=" << x << ", y=" << y << endl;
    return 0;
}