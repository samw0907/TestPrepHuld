/*
 * File: 2d_vector_row_sums.cpp
 * Task: Compute and print sum of each row
 * 
 * Exercise 9: Sum Each Row Separately
Type

2D Vector – Row-wise aggregation

Objective

Instead of summing everything, compute the sum of each row.

For a 4x4 grid filled 1 → 16, expected row sums:

Row 0 sum = 10
Row 1 sum = 26
Row 2 sum = 42
Row 3 sum = 58


(You should verify mentally why those are correct.)

Requirements

Same 4x4 sequential fill.

For each row:

Compute a sum

Print it before moving to the next row

Do NOT use a single global sum.

Reset properly for each row.
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(4, vector<int>(4, 0));

    int value = 1;

    // Fill sequentially
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++) {
            grid[i][j] = value;
            value++;
        }
    }

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Compute row sums
    for (int i = 0; i < grid.size(); i++){
        int sum = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            sum += grid[i][j];
        }
        cout << "Row " << i << " sum = " << sum << endl;
    }
    
    return 0;
}
