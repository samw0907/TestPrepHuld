/*
 * File: 2d_vector_secondary_diagonal.cpp
 * Task: Sum the secondary diagonal
 * 
 * Exercise 17: Secondary Diagonal Sum

Now we increase spatial awareness slightly.

Type

2D Vector – Index relationship logic

Objective

Sum the other diagonal (top-right → bottom-left).

For a 3x3 grid, those positions are:

(0,2)
(1,1)
(2,0)


Using the same grid:

120  85   200
60   150  30
95   180  110


Secondary diagonal values are:

200
150
95


Expected:

Secondary diagonal sum = 445

Important

This time the condition is not i == j.

You need to think about the index relationship.

Do not hardcode numbers.
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

    int diagonalSum = 0;
    int n = grid.size();

    // Compute secondary diagonal sum
    for (int i = 0; i < n; i++) {
        diagonalSum += grid[i][n - 1 - i];
    }
    
    cout << "Secondary diagonal sum = " << diagonalSum << endl;

    return 0;
}
