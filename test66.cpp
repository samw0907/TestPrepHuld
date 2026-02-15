/*
 * File: count_range.cpp
 * Task: Count numbers within a range
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write countInRange function
// Takes: vector<int> numbers, int minVal, int maxVal
// Returns: int (count of numbers where minVal <= num <= maxVal)
int countInRange (vector<int> numbers, int lower, int higher) {
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ( numbers[i] >= lower && numbers[i] <= higher)
        count++;
    }
    return count;
}



int main() {
  vector<int> numbers = {45, 85, 67, 92, 34, 72, 56};
  
  int count = countInRange(numbers, 50, 80);
  
  cout << "Numbers between 50 and 80: " << count << endl;
  
  return 0;
}