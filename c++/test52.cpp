/*
 * File: 2d_vector_neighbor_sum_4dir.cpp
 * Task: For each cell, compute sum of 4-direction neighbors (up/down/left/right)
 * 
 * Exercise 18: Neighbor Sum (4-direction) for Each Cell
Type

2D Vector – Neighbor access + boundary checks

Objective

For each cell, compute the sum of its 4-direction neighbors:

up

down

left

right

If a neighbor would be out-of-bounds, ignore it.

This is extremely common in:

image filters (basic kernels)

grid simulations

flood fill / path planning

sensor adjacency logic

Input Grid (3x3)
1 2 3
4 5 6
7 8 9

Output Grid Meaning

Each output cell should become:

sum of valid (up/down/left/right) neighbors


Example:

For center (1,1) = 5
neighbors are 2, 8, 4, 6 → sum = 20

For top-left (0,0) = 1
neighbors are right=2 and down=4 → sum = 6

Expected Output Grid
6 9 8
13 20 17
12 21 14

Requirements

Build the input grid exactly as above.

Create a new grid (out) same size, initialized to 0.

For each cell (i,j), compute neighbor sum with bounds checks.

Print out.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>> out(rows, vector<int>(cols, 0));

    // Compute neighbor sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int sum = 0;

            if (i > 0) {
                sum += grid[i - 1][j];
            }

            if (i < rows - 1) {
                sum += grid[i + 1][j];
            }

            if (j > 0) {
                sum += grid[i][j - 1];
            }

            if (j < cols - 1) {
                sum += grid[i][j + 1];
            }

            out[i][j] = sum;
        }
    }

    // Print result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << out[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}