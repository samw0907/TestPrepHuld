/*
 * File: sum_average.cpp
 * Task: Calculate sum and average of vector elements
 * 
 * ## **Exercise 9: Sum of Vector (Simple - Vectors & Accumulation)**

**Type:** Common Test Scenario

**Task:**
Write a program that:
1. Creates a vector: `{10, 25, 3, 42, 18, 7, 33}`
2. Calculates the sum of all elements
3. Calculates the average (as a double)
4. Prints both

**Expected Output:**
```
Sum: 138
Average: 19.7143
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 25, 3, 42, 18, 7, 33};
    
    int sum = 0;
    double avg = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        sum = sum + numbers[i];
    }
    avg = (double)sum / numbers.size();
    
    cout << sum << endl;
    cout << avg << endl;

    return 0;
}