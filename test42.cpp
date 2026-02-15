/*
 * File: 2d_vector_find_max_position.cpp
 * Task: Find max value and its position
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
    
    
    int maxValue = grid[0][0];
    int maxRow = 0;
    int maxCol = 0;

    // Traverse and update max + position
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] > maxValue) {
                maxValue = grid[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    
    cout << "Max value = " << maxValue << endl;
    cout << "Position = (" << maxRow << ", " << maxCol << ")" << endl;

    return 0;
}
