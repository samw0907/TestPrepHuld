/*
Write a function that takes a vector of integers and returns their sum.

Example:
sumVector({1, 2, 3, 4, 5}) → 15
*/

#include <iostream>
#include <vector>
using namespace std;

int sumVector(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << sumVector(v) << endl;  // Should print 15
    return 0;
}