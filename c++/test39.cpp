/*
 * File: 2d_vector_sequential_fill.cpp
 * Task: Fill a 3x3 grid with numbers 1 to 9
 * 
 * Exercise 4: Fill Grid with Sequential Numbers (1 → 9)

Now we add one new concept:

Instead of computing i + j,
you will keep a separate counter.

This introduces:

External variable modification inside nested loops

Order awareness

Grid filling logic

Objective

Fill a 3x3 grid with numbers 1 to 9 in traversal order.

Expected grid:

1 2 3
4 5 6
7 8 9

Requirements

Create a 3x3 grid of zeros.

Create an integer variable:

int value = 1;


In the nested loops:

grid[i][j] = value;
value++;


Print the grid normally.

Key Concept

The nested loops define the order.

The value variable remembers what number comes next.

This simulates:

Pixel numbering

Sensor indexing

Matrix flattening

Time Target

7–10 minutes.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(3, vector<int>(3, 0));

    int value = 1;

    // Fill the grid sequentially
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            grid[i][j] = value;
            value++;
        }
    }
    
    
    // Print the grid
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
