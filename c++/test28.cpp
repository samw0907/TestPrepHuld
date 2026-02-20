/*
## **Switching Gears: Pointers - Exercise 19**

**Type:** Critical Concept - Quick Drill

**Task:**
Complete this code that uses pointers:
- Declare an integer `x = 10`
- Create a pointer `ptr` that points to `x`
- Print the value of `x` using the pointer (dereference)
- Change `x` to 20 using the pointer
- Print again

**Expected Output:**
```
Value via pointer: 10
Value via pointer: 20
*/


#include <iostream>
using namespace std;


int main() {
    int x = 10;
    int* ptr = &x;  // Pointer to x
    
    // Print x using pointer (use *)
    cout << "Value via pointer: " << *ptr << endl;
    
    // Change x to 20 using pointer
    *ptr = 20;
    // Print again
    cout << "Value via pointer: " << *ptr << endl;

    return 0;
}