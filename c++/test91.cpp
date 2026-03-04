/*
Write a function that counts how many vowels (a, e, i, o, u) are in a string.
Case insensitive - count both 'A' and 'a'.

Example:
countVowels("Hello World") → 3  (e, o, o)
countVowels("Programming") → 3  (o, a, i)
*/

#include <iostream>
#include <string>
using namespace std;

int countVowels(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (c == 'a' || c == 'A' || 
            c == 'e' || c == 'E' || 
            c == 'i' || c == 'I' || 
            c == 'o' || c == 'O' || 
            c == 'u' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    cout << countVowels("Hello World") << endl;   // Should print 3
    cout << countVowels("Programming") << endl;    // Should print 3
    return 0;
}