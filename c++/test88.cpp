/*
Write a function that returns the sum of a specific row in a 2D vector.

Example:
grid = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
        
sumRow(grid, 0) → 6  (row 0: 1+2+3)
sumRow(grid, 1) → 15 (row 1: 4+5+6)
sumRow(grid, 2) → 24 (row 2: 7+8+9)
*/

#include <iostream>
#include <vector>
using namespace std;

int sumRow(vector<vector<int>> grid, int rowIndex) {
    int sum = 0;
    for (int j = 0; j < grid[rowIndex].size(); j++) {
        sum += grid[rowIndex][j];
    }
    return sum;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << sumRow(grid, 0) << endl;  // Should print 6
    cout << sumRow(grid, 1) << endl;  // Should print 15
    cout << sumRow(grid, 2) << endl;  // Should print 24
    return 0;
}