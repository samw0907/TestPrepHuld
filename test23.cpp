/*
 * File: palindrome.cpp
 * Task: Check if a string is a palindrome
 * 
 * 
 * Exercise 14: Palindrome Checker (Simple - Strings & Functions)
Type: Common Test Scenario
Task:
Write a function called isPalindrome that:

Takes a string as a parameter
Returns true if the string reads the same forwards and backwards
Returns false otherwise
Test with: "radar", "hello", "level"

Expected Output:
radar is a palindrome
hello is not a palindrome
level is a palindrome
Hint: Compare characters from both ends moving toward center, OR reverse the string and compare.
Time Estimate: 8-10 minutes
 */

#include <iostream>
#include <string>
using namespace std;

// Declare your isPalindrome function here

Full Solution:
cpp/*
 * File: palindrome.cpp
 * Task: Check if a string is a palindrome
 */

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    // Compare characters from both ends moving toward center
    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            return false;  // Characters don't match
        }
    }
    return true;  // All characters matched
}

int main() {
    string word1 = "radar";
    string word2 = "hello";
    string word3 = "level";
    
    // Test word1
    if (isPalindrome(word1)) {
        cout << word1 << " is a palindrome" << endl;
    } else {
        cout << word1 << " is not a palindrome" << endl;
    }
    
    // Test word2
    if (isPalindrome(word2)) {
        cout << word2 << " is a palindrome" << endl;
    } else {
        cout << word2 << " is not a palindrome" << endl;
    }
    
    // Test word3
    if (isPalindrome(word3)) {
        cout << word3 << " is a palindrome" << endl;
    } else {
        cout << word3 << " is not a palindrome" << endl;
    }
    
    return 0;
}