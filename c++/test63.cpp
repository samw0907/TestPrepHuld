/*
 * File: count_neighbors.cpp
 * Task: Count valid neighbors (up, down, left, right) for a given cell
 * 
 * ## Integration Problem 12: Count Neighbors (Q3 Level - CRITICAL)
**Type:** Function + 2D Vector - Boundary Checking  
**Objective:** Write a function that counts how many valid neighbors a cell has (up, down, left, right only - no diagonals).

**Expected Output:**
```
Cell [0][0] has 2 neighbors
Cell [1][1] has 4 neighbors
Cell [2][2] has 2 neighbors
Key Concepts:

4-direction neighbor pattern (THE most common in embedded/space)
Boundary checking (don't go outside grid)
Each direction needs separate check

Time: 25 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write countNeighbors function
// Takes: vector<vector<int>> grid, int row, int col
// Returns: int (how many valid neighbors exist)
//
// Check 4 directions with boundary conditions:
//   Up:    if (row > 0)
//   Down:  if (row < grid.size() - 1)
//   Left:  if (col > 0)
//   Right: if (col < grid[0].size() - 1)
//
// Count how many of these conditions are true
int countNeighbors(vector<vector<int>> grid, int row, int col) {
    int validNeighours = 0;
        if (row > 0) {
           validNeighours++; 
        }
        if (row < grid.size() - 1) {
            validNeighours++; 
        }
        if (col > 0) {
            validNeighours++; 
        }
        if (col < grid[0].size() - 1) {
            validNeighours++; 
        }
    return validNeighours;
}


int main() {
  vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  
  cout << "Cell [0][0] has " << countNeighbors(grid, 0, 0) << " neighbors" << endl;
  cout << "Cell [1][1] has " << countNeighbors(grid, 1, 1) << " neighbors" << endl;
  cout << "Cell [2][2] has " << countNeighbors(grid, 2, 2) << " neighbors" << endl;
  
  return 0;
}