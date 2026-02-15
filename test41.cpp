/*
 * File: 2d_vector_find_max.cpp
 * Task: Find the maximum value in a 4x4 grid
 * 
 * Exercise 7: Find the Maximum Value in a 2D Grid
Type

2D Vector – Scan + Track Maximum

Objective

Traverse the entire grid and determine the largest value.

This combines:

Nested loops

Comparison logic

Proper initialization

Tracking state

Requirements

Create a 4x4 grid.

Fill it sequentially with numbers 1 → 16.

Traverse the grid and find the maximum value.

Print:

Max value = X

Expected Result

For 1 → 16, the max should be:

Max value = 16

Important

Do not hardcode anything.
Do not assume the last value is max.
Use proper comparison logic.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(4, vector<int>(4, 0));

    int value = 1;

    // Fill sequentially
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            grid[i][j] = value;
            value++;
        }
    }
    
    
    int maxValue = grid[0][0];   // Initialize properly

    // Traverse and update maxValue
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] > maxValue) {
                maxValue = grid[i][j];
            }
        }
    }
    
    
    cout << "Max value = " << maxValue << endl;

    return 0;
}
