/*
 * File: second_largest.cpp
 * Task: Find the second largest value in a vector
 * 
 * Exercise 17: Find Second Largest (Moderate - Vectors)
Type: Common Test Scenario
Task:
Write a program that:

Creates a vector: {45, 12, 78, 23, 91, 34, 67}
Finds the second largest value (not the largest, the second one)
Prints the result

Expected Output:
Second largest value: 78
Hint: Find the largest first, then find the largest that's less than the maximum.
Time Estimate: 8-10 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 78, 23, 91, 34, 67};
int highest = numbers[0];
int secondHighest = numbers[0];

for (int i = 1; i < numbers.size(); i++) {
    if (numbers[i] > highest) {
        secondHighest = highest;  // Old highest becomes second
        highest = numbers[i];      // New highest
    } else if (numbers[i] > secondHighest && numbers[i] < highest) {
        secondHighest = numbers[i];
    }
}
    cout << "Second largest value: " << secondHighest << endl;
    
    return 0;
}