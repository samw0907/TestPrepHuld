/*
 * File: 2d_vector_sum.cpp
 * Task: Calculate sum of all elements in a 3x3 grid
 * 
 * Exercise 5: Sum All Elements in a 2D Grid
Type

2D Vector — Reading + Accumulator Pattern

Objective

Practice scanning the grid and computing something.

This is very common in:

Image brightness totals

Sensor energy sums

Heatmap accumulation

Grid-based simulation

Requirements

Create a 3x3 grid.

Fill it with sequential numbers 1 → 9 (same as previous exercise).

Calculate the sum of all elements.

Print the sum.

Expected Output
Sum = 45


(1 + 2 + ... + 9 = 45)

Key Concepts

Nested loops for reading

Accumulator pattern in 2D

sum += grid[i][j];

Time Target

7–10 minutes
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
    
    
    int sum = 0;

    // Calculate the sum of all elements
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            sum += grid[i][j];
        }
    }
    
    
    cout << "Sum = " << sum << endl;

    return 0;
}
