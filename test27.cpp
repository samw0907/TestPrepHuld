/*
 * File: reverse_string.cpp
 * Task: Reverse a string and return the result
 * 
 * Exercise 18: Reverse a String (Simple - Strings & Functions)
Type: Common Test Scenario
Task:
Write a function called reverseString that:

Takes a string as a parameter
Returns the reversed string (don't modify the original)
Test with "hello" - should return "olleh"

Expected Output:
Original: hello
Reversed: olleh
Time Estimate: 6-7 minutes
 */

#include <iostream>
#include <string>
using namespace std;

// Declare your reverseString function here
string reverseString(string original) {
    string reverse = "";
    for (int i = original.length() -1; i >= 0; i--) {
        reverse.push_back(original[i]);
        }
        return reverse;
}

int main() {
    string original = "hello";
    
    // Call function and print both original and reversed
    string result = reverseString(original);
    cout << "Original: " << original << endl;
    cout << "Reverse: " << result << endl;    
    return 0;
}