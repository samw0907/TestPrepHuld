/*
 * File: find_max.cpp
 * Task: Write a function that returns the maximum value in a vector
 * 
 * Integration Problem 2: Find Maximum with Function
Type: Function + Vector - Return Value
Objective: Write a function that finds and returns the largest number in a vector.
Expected Output:
Maximum value: 92
Key Concepts:

Function returns a value
Track maximum while looping
Initialize max to first element

Time: 6 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write findMax function
// Takes: vector<int> numbers
// Returns: int (the maximum value)
int findMax(vector<int> numbers) {
    int max = numbers[0];
    for (int i =0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
};


int main() {
  vector<int> numbers = {45, 23, 67, 12, 92, 34, 78};
  
  int maxValue = findMax(numbers);
  
  cout << "Maximum value: " << maxValue << endl;
  
  return 0;
}