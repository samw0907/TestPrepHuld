/*
 * File: count_vowels.cpp
 * Task: Count vowels in a string
 * 
 * Exercise 16: Count Vowels in String (Simple - Strings & Loops)
Type: Common Test Scenario
Task:
Write a function called countVowels that:

Takes a string as a parameter
Counts how many vowels (a, e, i, o, u) are in the string
Returns the count (ignore case - count both 'A' and 'a')
Test with: "Hello World" - answer should be 3 (e, o, o)

Expected Output:
"Hello World" contains 3 vowels
 */

#include <iostream>
#include <string>
using namespace std;

// Declare your countVowels function here
 int countVowels (string text) {
    int count = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == 'A' || text[i] == 'a' || text[i] == 'E'|| text[i] == 'e' || text[i] == 'I' || text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] == 'u') {
            count++;
        }
    }
    return count;
 }

int main() {
    string text = "Hello World";
    
    // Call function and print result
    int result = countVowels(text);
    cout << text << " contains " << result << " vowels" << endl;
    return 0;
}