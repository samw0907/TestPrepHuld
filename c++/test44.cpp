/*
 * File: 2d_vector_col_sums.cpp
 * Task: Compute and print sum of each column in a 4x4 grid
 * 
 * Exercise 10: Column Sums (First “index twist”)
Type

2D Vector – Column-wise aggregation

Objective

Row sums are straightforward because your outer loop already iterates rows.
Column sums force you to think: “hold column fixed, walk down rows.”

Requirements

Create a 4x4 grid.

Fill sequentially with 1 → 16 (same as before).

Compute and print the sum of each column:

Print format:

Col 0 sum = X
Col 1 sum = X
Col 2 sum = X
Col 3 sum = X

Expected Results (so you can verify)

For a 4x4 filled like:

1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16


Column sums should be:

Col 0: 1 + 5 + 9 + 13 = 28

Col 1: 2 + 6 + 10 + 14 = 32

Col 2: 3 + 7 + 11 + 15 = 36

Col 3: 4 + 8 + 12 + 16 = 40

So:

Col 0 sum = 28
Col 1 sum = 32
Col 2 sum = 36
Col 3 sum = 40
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(4, vector<int>(4, 0));

    int value = 1;

    // Fill sequentially (1..16)
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
    
    // Compute column sums
    for (int j = 0; j < grid[0].size(); j++) {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            sum += grid[i][j];
        }
        cout << "Col " << j << " sum = " << sum << endl;
    }
 
    return 0;
}
