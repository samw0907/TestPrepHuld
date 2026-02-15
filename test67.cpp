#include <iostream>
#include <string>
using namespace std;

int countConsonants(string text) {
    int count = 0;  // Outside the loop!
    
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        
        // Check if it's a letter AND not a vowel
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {  // Is a letter?
            // Now check if NOT a vowel (use AND, not OR)
            if (c != 'a' && c != 'A' && 
                c != 'e' && c != 'E' && 
                c != 'i' && c != 'I' && 
                c != 'o' && c != 'O' && 
                c != 'u' && c != 'U') {
                count++;
            }
        }
    }
    
    return count;  // Outside the loop!
}

int main() {
  string text = "Hello World";
  
  int count = countConsonants(text);
  
  cout << "Consonants: " << count << endl;
  
  return 0;
}