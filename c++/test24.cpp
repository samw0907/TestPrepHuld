/*
 * File: sum_array.cpp
 * Task: Sum elements of a C-style array
 * 
 * Exercise 15: Array Sum Function (Simple - Arrays & Functions)
Type: Common Test Scenario
Task:
Write a function called sumArray that:

Takes an array of integers and its size as parameters (arrays need size passed separately)
Returns the sum of all elements
In main(), test with array {10, 20, 30, 40, 50} - answer should be 150

Expected Output:
Sum of array: 150
Note: This uses a regular C-style array, not a vector!
Time Estimate: 5-6 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// Declare your sumArray function here
// Parameters: int array[], int size
int sumArray (int numbers[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }
    return sum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // Call sumArray and print result
    int result = sumArray(numbers, size);
    cout << "Sum of array: " << result << endl;
    
    return 0;
}