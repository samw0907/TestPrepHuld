/*
 * File: count_evens.cpp
 * Task: Write a function that counts even numbers in a vector
 * 
 * Integration Problem 1: Count Even Numbers in Vector
Type: Function + Vector Integration - Basic
Objective: Write a function that processes a vector and returns a count. Combines function writing with vector iteration.
Expected Output:
Even numbers: 4
Key Concepts:

Function takes vector parameter: int countEvens(vector<int> numbers)
Loop through vector
Count matching elements with counter pattern
Return the count

Time: 8 minutes
Template:
 */

#include <iostream>
#include <vector>
using namespace std;

int countEvens(vector<int> numbers) {
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


int main() {
  vector<int> numbers = {12, 7, 4, 9, 18, 3, 20};
  
  int evenCount = countEvens(numbers);
  
  cout << "Even numbers: " << evenCount << endl;
  
  return 0;
}