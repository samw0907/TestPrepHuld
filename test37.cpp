/*
 * File: 2d_vector_row_plus_col.cpp
 * Task: Fill a 3x3 grid with row + column values
 * 
 * Exercise 2: Fill a 3x3 Grid with Row + Column Index
Type

2D Vector — Writing Values with Nested Loops

Objective

Instead of manually assigning each element, you will:

Use nested loops

Fill each cell with a formula

Print the result

This builds:

Spatial awareness (row vs column)

Confidence modifying grid values

Automatic nested loop structure

Requirements

Create a 3x3 grid filled with 0.

Use nested loops to assign:

grid[row][col] = row + col;


Print the grid.

Expected Output
0 1 2
1 2 3
2 3 4

Why This Matters

You are now:

Writing into the grid using loops

Using indices intentionally

Thinking in row/column coordinates

This is exactly how image data and sensor matrices are processed.

Time Target

7–10 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 1) Create 3x3 grid filled with 0
    vector<vector<int>> grid(3, vector<int>(3, 0));

    // 2) Fill using nested loops
    // grid[i][j] = i + j;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            grid[i][j] = i + j;
        }
    }
    
    // 3) Print the grid
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
