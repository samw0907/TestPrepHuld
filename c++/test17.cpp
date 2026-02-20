/*
 * File: fizzbuzz.cpp
 * Task: Classic FizzBuzz from 1 to 100
 * 
 * ## **Exercise 8: FizzBuzz (Classic - Loops & Conditionals)**

**Type:** THE Classic Test Question

**Task:**
Print numbers 1 to 100, but:
- For multiples of **3**, print "Fizz" instead of the number
- For multiples of **5**, print "Buzz" instead
- For multiples of **both 3 and 5**, print "FizzBuzz"
- Otherwise, print the number

**Expected Output (first 20 lines):**
```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
 */

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if ( i % 5 == 0) {
            cout << "Buzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}