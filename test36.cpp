/*
 * File: 2d_vector_2x2_basic.cpp
 * Task: Create a 2x2 grid, set values, and print it
 * 
 * Exercise 1: 2D Vector — Create and Print a 2x2 Grid (Zeros)
Type

2D Vector Absolute Basics (first ever)

Objective

Learn the shape of a 2D vector and prove you can:

create it

access it with [row][col]

print it with nested loops

Requirements

Create a 2x2 grid filled with 0

Set:

grid[0][0] = 1

grid[0][1] = 2

grid[1][0] = 3

grid[1][1] = 4

Print the grid (each row on a new line)

Expected Output
1 2
3 4

Key Concepts

2D vector = vector<vector<int>>

Access with grid[row][col]

Print with nested loops

Time

5–8 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // 1) Create a 2x2 grid filled with 0
    vector<vector<int>> grid(2, vector<int>(2, 0));

    // 2) Set values
    // grid[row][col] = value;
    grid[0][0] = 1;
    grid[0][1] = 2;
    grid[1][0] = 3;
    grid[1][1] = 4;

    // 3) Print using nested loops
    // Outer loop: rows
    // Inner loop: columns
        for (int i = 0; i < grid.size(); i++) {       // rows
        for (int j = 0; j < grid[i].size(); j++) {   // columns
            cout << grid[i][j] << " ";
        }
        cout << endl;  // new line after each row
    }

    return 0;
}
