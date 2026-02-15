/*
 * File: find_min.cpp
 * Task: Find minimum value and its index in a vector
 * 
 * ## **Exercise 10: Find Minimum Value and Position (Simple - Vectors)**

**Type:** Common Test Scenario - **Index vs Element Practice**

**Task:**
Write a program that:
1. Creates a vector: `{45, 12, 78, 3, 91, 34, 67}`
2. Finds the **minimum value** in the vector
3. Finds the **index** where the minimum is located
4. Prints both

**Expected Output:**
```
Minimum value: 3
Found at index: 3
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 78, 3, 91, 34, 67};
    int min = numbers[0];
    int index = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            index = i;
        }
    }
    
    cout << "Minimum value: " << min << endl;
    cout << "Found at index: " << index << endl;   
    
    
    return 0;
}