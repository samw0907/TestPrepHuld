#include <iostream>
#include <string>
using namespace std;

// Write a function called countVowels
// that takes a string and returns the number of vowels in it
// vowels are: a e i o u (lowercase only)
//
// Expected output:
//   Hello World has 3 vowels
//   satellite has 4 vowels

// TODO: countVowels function


int countVowels(string text) {
    int count = 0;
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    cout << "Hello World has " << countVowels("Hello World") << " vowels" << endl;
    cout << "satellite has " << countVowels("satellite") << " vowels" << endl;
    return 0;
}