/*
 * File: filter_above.cpp
 * Task: Return a new vector containing only numbers above threshold
 * 
 * Integration Problem 3: Filter Numbers Above Threshold
Type: Function + Vector - Return New Vector
Objective: Write a function that creates and returns a new vector containing only numbers above a given threshold.
Expected Output:
Numbers above 50: 67 92 78
Key Concepts:

Function returns a vector
Create empty result vector
Loop and conditionally add elements
Two parameters (vector and threshold value)

Time: 8 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write filterAbove function
// Takes: vector<int> numbers, int threshold
// Returns: vector<int> (new vector with only numbers > threshold)
  vector<int> filterAbove(vector<int> numbers, int threshold) {
    vector<int> filtered {};
    for (int i = 0; i < numbers.size(); i++)
        if (numbers[i] >= threshold) {
            filtered.push_back(numbers[i]);
        }
    return filtered;
}


int main() {
  vector<int> numbers = {45, 23, 67, 12, 92, 34, 78};
  int threshold = 50;
  
  vector<int> filtered = filterAbove(numbers, threshold);
  
  cout << "Numbers above " << threshold << ": ";
  for (int i = 0; i < filtered.size(); i++) {
    cout << filtered[i] << " ";
  }
  cout << endl;
  
  return 0;
}