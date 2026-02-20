/*
 * File: 2d_vector_clamp_range.cpp
 * Task: Clamp all values to the range [0, 255]
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid = {
        {-5, 12, 250},
        {30, 999, 100},
        {8, -1, 60}
    };

    // Clamp values to [0, 255]
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] > 255) {
                grid[i][j] = 255;
            } else if (grid[i][j] < 0) {
                grid[i][j] = 0;
            }
        }
    }
    
    
    // Print cleaned grid
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
