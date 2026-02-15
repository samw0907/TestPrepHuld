/*
 * File: 2d_vector_threshold_mask.cpp
 * Task: Convert grid to binary mask (>=100 -> 1, else 0)
 * 
 * Exercise 13: Threshold Mask (Binary Classification)
Type

2D Vector – Conditional rewrite to binary mask

Objective

Convert reflectance values into a simple mask:

If value ≥ 100 → set to 1

Otherwise → set to 0

This simulates:

Vegetation thresholding

Brightness segmentation

Simple binary classification

Grid
120  85   200
60   150  30
95   180  110

Expected Output
1 0 1
0 1 0
0 1 1
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

    // Apply threshold mask
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] >= 100) {
                grid[i][j] = 1;
            } else {
                grid[i][j] = 0;
            }
         }
    }
    
    // Print result
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
