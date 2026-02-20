/*
 * File: row_sums.cpp
 * Task: Calculate the sum of each row in a 2D grid
 * Integration Problem 6: 2D Grid Row Sums (Q2 Level)
Type: Function + 2D Vector
Objective: Write a function that takes a 2D vector (grid) and returns a 1D vector containing the sum of each row.
Expected Output:
Row 0 sum: 6
Row 1 sum: 15
Row 2 sum: 24
Key Concepts:

Processing 2D vectors
Nested loops
Building result vector row by row
Function returns a vector

Time: 20 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write getRowSums function
// Takes: vector<vector<int>> grid
// Returns: vector<int> (sum of each row)
// Logic: For each row, sum all elements in that row, add to result vector
vector<int> getRowSums(vector<vector<int>> grid) {
    vector<int> temp {};
    for (int i = 0; i < grid.size(); i++) {
        int sum = 0;
        for (int j = 0; j < grid[i].size(); j++) {
         sum += grid[i][j];
        }
        temp.push_back(sum);
    }
    return temp;
}


int main() {
  vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  
  vector<int> rowSums = getRowSums(grid);
  
  for (int i = 0; i < rowSums.size(); i++) {
    cout << "Row " << i << " sum: " << rowSums[i] << endl;
  }
  
  return 0;
}