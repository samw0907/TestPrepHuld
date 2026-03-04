/*
Write a function that calculates the sum of all elements in a 2D vector.

Example:
grid = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
        
sumGrid(grid) → 45
*/

#include <iostream>
#include <vector>
using namespace std;

int sumGrid(vector<vector<int>> grid) {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            sum += grid[i][j];
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << sumGrid(grid) << endl;  // Should print 45
    return 0;
}