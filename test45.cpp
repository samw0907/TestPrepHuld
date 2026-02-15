/*
 * File: 2d_vector_clamp_negatives.cpp
 * Task: Replace negative values with 0
 * 
 * Exercise 11: Clamp Negative Values to Zero
Type

2D Vector – Conditional modification

Objective

Simulate sensor data cleanup:

If any value in the grid is negative, replace it with 0.

Requirements

Create a 3x3 grid with the following values:

5  -3  8
-1  4 -6
7   2 -9


Traverse the grid.

If a value is less than 0, set it to 0.

Print the cleaned grid.

Expected Output
5 0 8
0 4 0
7 2 0


This introduces:

In-place modification

Real-world style filtering

Conditional logic inside nested loops
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid = {
        {5, -3, 8},
        {-1, 4, -6},
        {7, 2, -9}
    };

    // Clean negative values
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] < 0) {
                grid[i][j] = 0;
            }
        }
    }
    
    // Print cleaned grid
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }    
    
    
    return 0;
}
