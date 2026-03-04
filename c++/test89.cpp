/*
Write a function that returns the sum of a specific column in a 2D vector.

Example:
grid = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
        
sumColumn(grid, 0) → 12 (column 0: 1+4+7)
sumColumn(grid, 1) → 15 (column 1: 2+5+8)
sumColumn(grid, 2) → 18 (column 2: 3+6+9)
*/

#include <iostream>
#include <vector>
using namespace std;

int sumColumn(vector<vector<int>> grid, int colIndex) {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++) {
        sum += grid[i][colIndex];
    }
    return sum;
}
int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << sumColumn(grid, 0) << endl;  // Should print 12
    cout << sumColumn(grid, 1) << endl;  // Should print 15
    cout << sumColumn(grid, 2) << endl;  // Should print 18
    return 0;
}