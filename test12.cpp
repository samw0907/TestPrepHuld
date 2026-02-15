/*
 * File: sum_evens.cpp
 * Task: Sum all even numbers in a given range
 * Exercise 3: Sum of Even Numbers in Range (Simple - Loops)
Type: Common Test Scenario
Task:
Write a program that:

Asks the user for two integers: start and end
Calculates the sum of all even numbers in that range (inclusive)
Prints the result

Expected Output Examples:
Enter start: 1
Enter end: 10
Sum of even numbers from 1 to 10: 30
(2 + 4 + 6 + 8 + 10 = 30)

Enter start: 5
Enter end: 15
Sum of even numbers from 5 to 15: 60
(6 + 8 + 10 + 12 + 14 = 60)
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code here
    int start;
    int end;
     int sum = 0;

    cout << "Enter start: " << endl;
    cin >> start;
    cout << "Enter end: " << endl;
    cin >> end;
    
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << "Sum of even numbers from " << start << " to " << end << ": " << sum << endl;

    return 0;
}