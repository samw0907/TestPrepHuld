/*
Write a function that checks if a string is a palindrome 
(reads the same forwards and backwards). Case sensitive.

Example:
isPalindrome("racecar") → true
isPalindrome("hello") → false
isPalindrome("noon") → true
*/

#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string text) {
    string reverse = "";
    for (int i = text.length() -1; i >= 0; i--) {
        char c = text[i];
        reverse.push_back(c);
    }
    if (reverse == text) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << isPalindrome("racecar") << endl;  // Should print 1 (true)
    cout << isPalindrome("hello") << endl;    // Should print 0 (false)
    cout << isPalindrome("noon") << endl;     // Should print 1 (true)
    return 0;
}