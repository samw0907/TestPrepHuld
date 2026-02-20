/*
 * File: 2d_vector_min_max.cpp
 * Task: Find min and max in one traversal
 * 
 * Exercise 15: Find Min AND Max in One Traversal
Type

2D Vector – Dual tracking in a single pass

Objective

Traverse the grid once and determine:

Minimum value

Maximum value

Do not traverse twice.
Do not hardcode anything.

Use this grid:

120  85   200
60   150  30
95   180  110

Expected Result

Minimum = 30
Maximum = 200

Requirements

Initialize both properly.

Update both inside the same nested loop.

Print both at the end.
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

    int minValue = grid[0][0];
    int maxValue = grid[0][0];

    // Traverse once and update both
    for (int i = 0; i < grid.size(); i ++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] > maxValue) {
                maxValue = grid[i][j];
            } else if (grid[i][j] < minValue) {
                minValue = grid[i][j];
            };
        };
    };
    
    
    cout << "Min = " << minValue << endl;
    cout << "Max = " << maxValue << endl;

    return 0;
}
