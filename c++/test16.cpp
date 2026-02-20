/*
 * File: filter_evens.cpp
 * Task: Extract all even numbers from a vector
 * 
 * Exercise 7: Find All Even Numbers (Simple - Vectors & Conditionals)
Type: Common Test Scenario
Task:
Write a program that:

Creates a vector: {12, 7, 23, 18, 5, 30, 41, 16}
Creates a new vector containing only the even numbers
Prints both the original and the filtered vector

Expected Output:
Original: 12 7 23 18 5 30 41 16
Even numbers: 12 18 30 16
Time Estimate: 6-7 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {12, 7, 23, 18, 5, 30, 41, 16};
    
    cout << "Original: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;
    
    vector<int> evenNumbers = {};
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
        evenNumbers.push_back(numbers[i]);
        }
    }
    
    cout << "Even numbers: ";
    for (int x : evenNumbers) {
    cout << x << " ";
    }
    
    
    return 0;
}