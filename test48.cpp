/*
 * File: 2d_vector_count_threshold.cpp
 * Task: Count values >= 100
 * 
 * Exercise 14: Count Pixels Above Threshold (No Modification)
Type

2D Vector – Scan + Count (Read-only)

Objective

Instead of modifying the grid, just count how many values are ≥ 100.

Same dataset:

120  85   200
60   150  30
95   180  110

Expected Result

Values ≥ 100 are:

120
200
150
180
110


So:

Count = 5

Requirements

Do NOT modify the grid.

Traverse normally.

Count qualifying values.

Print:

Count = X
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

    int count = 0;

    // Count values >= 100
        for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] >= 100) {
                count++;
            }
         }
    }
    
    
    cout << "Count = " << count << endl;

    return 0;
}
