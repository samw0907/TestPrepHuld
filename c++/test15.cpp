/*
 * File: reverse_vector.cpp
 * Task: Reverse a vector without using reverse() function
 * 
 * Exercise 6: Reverse a Vector (Simple - Loops & Vectors)
Type: Common Test Scenario
Task:
Write a program that:

Creates a vector: {1, 2, 3, 4, 5}
Reverses the order of elements without using the reverse() function
Prints the reversed vector

Expected Output:
Original: 1 2 3 4 5
Reversed: 5 4 3 2 1
Hint: You can either:

Create a new vector and add elements in reverse order, OR
Swap elements from both ends moving toward the center

Time Estimate: 7-8 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    cout << "Original: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;
    
    vector<int> newVector = {};
    
    for (int i = numbers.size() -1; i >= 0; i--) {
        newVector.push_back(numbers[i]);
    };
    
    cout << "Reversed: ";
    for (int x : newVector) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}