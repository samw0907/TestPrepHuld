/*
Write a function that returns a reversed version of the string.

Example:
reverseString("hello") → "olleh"
reverseString("C++") → "++C"
*/

#include <iostream>
#include <string>
using namespace std;

string reverseString(string text) {
    string reverse = "";
    char c = ' ';
    for (int i = text.length() - 1; i >= 0; i--) {
        char c = text[i];
        reverse.push_back(c);
    }
    return reverse;
}

int main() {
    cout << reverseString("hello") << endl;  // Should print "olleh"
    cout << reverseString("C++") << endl;     // Should print "++C"
    return 0;
}