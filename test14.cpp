/*
 * File: count_occurrences.cpp
 * Task: Count how many times a number appears in a vector
 * ## **Exercise 5: Count Occurrences (Simple - Loops & Vectors)**

**Type:** Common Test Scenario

**Task:**
Write a program that:
1. Creates a vector: `{5, 2, 8, 5, 1, 5, 9, 5, 3}`
2. Asks the user for a target number
3. Counts how many times that number appears in the vector
4. Prints the count

**Expected Output Example:**
```
Enter number to search for: 5
The number 5 appears 4 times
Time Estimate: 5 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 5, 1, 5, 9, 5, 3};
    int number = 0;
    int total = 0;
    
    cout << "Enter number to search for: ";
    cin >> number;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == number) {
            total++;
        }
    }
    
    cout << "The number " << number << " appears " << total << " times." << endl;
    
    return 0;
}