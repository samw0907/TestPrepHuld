/*
Write a function that returns the sum of the main diagonal (top-left to bottom-right).

Example:
grid = {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
        
sumMainDiagonal(grid) → 15  (1 + 5 + 9)

Main diagonal: positions where row == column (0,0), (1,1), (2,2)
*/

#include <iostream>
#include <vector>
using namespace std;

int sumMainDiagonal(vector<vector<int>> grid) {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++) {
        sum += grid[i][i];
    }
    return sum;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << sumMainDiagonal(grid) << endl;  // Should print 15
    return 0;
}