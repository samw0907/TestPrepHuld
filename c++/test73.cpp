// test2.cpp
// Compile: g++ test2.cpp -o test2
// Run:     ./test2
//
// Given the 2D vector below, write a function called rowSums
// that takes a 2D vector and prints the sum of each row
//
// Expected output:
//   Row 0 sum: 6
//   Row 1 sum: 15
//   Row 2 sum: 24

#include <iostream>
#include <vector>
using namespace std;

void rowSums(vector<vector<int>> grid) {
    for (int i = 0; i < grid.size(); i++) {
        int sum = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            sum += grid[i][j];
        }
        cout << "Row " << i << " sum: " << sum << endl;
    }
}

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rowSums(grid);
    return 0;
};