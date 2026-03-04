/*
Write a function that finds the maximum value in a vector and returns it.

Example:
findMax({3, 7, 2, 9, 1}) → 9
*/

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> numbers) {
    int max = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    vector<int> v = {3, 7, 2, 9, 1};
    cout << findMax(v) << endl;  // Should print 9
    return 0;
}