/*
 * File: column_sum.cpp
 * Task: Calculate the sum of a specific column
 * 
 * Integration Problem 9: Column Sum (Q2 Level - Easier)
Type: Function + 2D Vector - Column Operations
Objective: Write a function that returns the sum of a specific column in a 2D grid.
Expected Output:
Column 0 sum: 12
Column 1 sum: 15
Column 2 sum: 18
Key Concepts:

Column access pattern: fix j, vary i
Opposite of row operations
Function takes column number as parameter

Time: 15 minutes
Template:
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write getColumnSum function
// Takes: vector<vector<int>> grid, int columnIndex
// Returns: int (sum of all values in that column)
// Logic: Loop through rows, access grid[i][columnIndex]
int getColumnSum(vector<vector<int>> grid, int columnIndex) {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++) {
        sum += grid[i][columnIndex];
    }
    return sum;
}


int main() {
  vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  
  cout << "Column 0 sum: " << getColumnSum(grid, 0) << endl;
  cout << "Column 1 sum: " << getColumnSum(grid, 1) << endl;
  cout << "Column 2 sum: " << getColumnSum(grid, 2) << endl;
  
  return 0;
}