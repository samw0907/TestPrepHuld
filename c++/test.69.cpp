#include <iostream>
using namespace std;

/* Write printRange here
Exercise 2: Loop - Print Numbers in a Range
Write a function called printRange that takes two integers, start and end, and prints every number from start to end inclusive, one per line. Call it from main with 3 and 7.
Expected output:
3
4
5
6
7
*/

void printRange(int a, int b){
    for (int i = a; i <= b; i++)
     cout << i << endl;
}


int main() {

    printRange(3, 7);
    return 0;
}