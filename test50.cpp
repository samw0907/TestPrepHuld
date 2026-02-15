/*
 * File: 2d_vector_diagonal_sum.cpp
 * Task: Sum the main diagonal of a 3x3 grid
 * 
 * Exercise 16: Diagonal Sum
Type

2D Vector – Position-based logic

Objective

Sum only the main diagonal (where row == col) in a 3x3 grid.

Requirements

Use this grid:

120  85   200
60   150  30
95   180  110


Compute the sum of:

grid[0][0]

grid[1][1]

grid[2][2]

Print:

Diagonal sum = 380
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid = {
        {120, 85, 200},
        {60, 150, 30},
        {95, 180, 110}
    };

    int diagonalSum = 0;

    // Compute diagonal sum
    for (int i = 0; i < grid.size(); i ++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (i == j) {
               diagonalSum += grid[i][j];
            }
        }
    }
    
    
    cout << "Diagonal sum = " << diagonalSum << endl;

    return 0;
}
