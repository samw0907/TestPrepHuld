/*
 * File: secondary_diagonal.cpp
 * Task: Sum the secondary diagonal using the n-1-i pattern
 * Integration Problem 11: Secondary Diagonal Sum (Q3 Level)
Type: Function + 2D Vector - Formula Pattern
Objective: Write a function that returns the sum of the secondary diagonal (top-right to bottom-left).
Expected Output:
Secondary diagonal sum: 15
Key Concepts:

Secondary diagonal uses formula: grid[i][n-1-i] where n = grid.size()
Only ONE loop needed (not nested)
Pattern to memorize for test

Time: 15 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write getSecondaryDiagonalSum function
// Takes: vector<vector<int>> grid
// Returns: int (sum of secondary diagonal)
// 
// Pattern: grid[i][n-1-i] where n = grid.size()
// For 3x3 grid:
//   i=0: grid[0][2]  (top-right)
//   i=1: grid[1][1]  (middle)
//   i=2: grid[2][0]  (bottom-left)

int getSecondaryDiagonalSum (vector<vector<int>> grid) {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++) {
        sum += grid[i][grid.size() - 1 - i];
    }
    return sum;
}


int main() {
  vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  // Secondary diagonal: 3, 5, 7
  
  int diagonalSum = getSecondaryDiagonalSum(grid);
  
  cout << "Secondary diagonal sum: " << diagonalSum << endl;
  
  return 0;
}