/*
 * File: above_average.cpp
 * Task: Return vector of values above the average
 * 
 * Warm-Up Problem 1: Find All Above Average (Q2 Level)
Type: Function + Vector - Two-Pass Logic
Objective: Write a function that returns a new vector containing only the numbers that are above the average of all numbers.
Expected Output:
Above average values: 85 92 88
Key Concepts:

Calculate average first (one pass)
Filter based on that average (second pass)
Return new vector
Two-step logic

Time: 15 minutes
Template:
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write getAboveAverage function
// Takes: vector<int> numbers
// Returns: vector<int> (values above average)
// 
// Step 1: Calculate average
// Step 2: Create new vector with values > average

vector<int> getAboveAverage(vector<int> numbers ) {
    double sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    double average = sum / numbers.size();
    vector<int> vector {};

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > average) {
            vector.push_back(numbers[i]);
        }
    }
    return vector;
}


int main() {
  vector<int> numbers = {45, 85, 67, 92, 34, 88, 56};
  // Average = 467/7 = 66.7
  // Above average: 85, 67, 92, 88
  
  vector<int> result = getAboveAverage(numbers);
  
  cout << "Above average values: ";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  
  return 0;
}