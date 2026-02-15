#include <iostream>
#include <vector>
using namespace std;

int getRowMax(vector<vector<int>> grid, int rowIndex) {
    int max = grid[rowIndex][0];  // First element of THAT row
    
    for (int j = 0; j < grid[rowIndex].size(); j++) {  // Loop columns only
        if (grid[rowIndex][j] > max) {
            max = grid[rowIndex][j];
        }
    }
    
    return max;
}

int main() {
  vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 6, 5},
    {7, 8, 9}
  };
  
  int maxVal = getRowMax(grid, 1);
  
  cout << "Max in row 1: " << maxVal << endl;
  
  return 0;
}