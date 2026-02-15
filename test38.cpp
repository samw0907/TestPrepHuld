/*
 * File: 2d_vector_traversal_order.cpp
 * Task: Print traversal order of a 3x3 grid
 * 
 * Exercise 3: Print the Order of Traversal
Type

2D Vector – Understanding Traversal Order

Objective

See exactly how the nested loops move through the grid.

You will print:

(0,0) (0,1) (0,2)
(1,0) (1,1) (1,2)
(2,0) (2,1) (2,2)


This shows the precise order of execution.

Requirements

Create a 3x3 grid (values don’t matter).

Use nested loops.

Instead of printing grid values, print:

"(" << i << "," << j << ") "


Each row on a new line.

Expected Output
(0,0) (0,1) (0,2)
(1,0) (1,1) (1,2)
(2,0) (2,1) (2,2)

Why This Matters

This removes abstraction.

You will SEE:

Outer loop controls row

Inner loop controls column

Inner finishes before outer increments

Once you see this printed, the mental model locks.

Time Target

5 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(3, vector<int>(3, 0));

    // Print traversal coordinates
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << "(" << i << ", " << j << ")";
        }
        cout << endl;
    }
    
    
    return 0;
}
