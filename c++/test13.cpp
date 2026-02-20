/*
 * File: find_max.cpp
 * Task: Find maximum value and its index in a vector¨
 * Exercise 4: Find Maximum in Vector (Moderate - Vectors)
Type: Common Test Scenario
Task:
Write a program that:

Creates a vector of integers with these values: {45, 12, 78, 23, 91, 34, 67}
Finds and prints the maximum value in the vector
Also prints the index (position) where the maximum value is located

Expected Output:
Maximum value: 91
Found at index: 4
Hint: You'll need to track both the max value AND its position as you loop through.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 78, 23, 91, 34, 67};
    int max = numbers[0];
    int index = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            index = i;
        }
    }
    cout << "Maximum value: " << max << endl;
    cout << "Found at index: " << index << endl;
    
    return 0;
}