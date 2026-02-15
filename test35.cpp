/*
 * File: 2d_vector_basics.cpp
 * Task: Create and access a 2D vector (grid)
 * 
 * Exercise 26: 2D Vector Basics - Create and Access
Type: 2D Vector Fundamentals - CRITICAL FOR SPACE SOFTWARE
Objective: Understand 2D vector structure - creating grids and accessing elements. This is your foundation for sensor data, image processing, coordinate grids.
Requirements:

Create a 3x3 grid initialized with zeros
Set specific values: grid[0][0] = 5, grid[1][1] = 10, grid[2][2] = 15
Print the entire grid in a readable format

Expected Output:
5 0 0
0 10 0
0 0 15
Key Concepts:

2D vector = vector of vectors
Declaration: vector<vector<int>> grid(rows, vector<int>(cols, value))
Access: grid[row][col]
Nested loops for printing

Time: 8-10 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create 3x3 grid of zeros
    vector<vector<int>> grid(3, vector<int>(3, 0));
    
    // Set diagonal values
    grid[0][0] = 5;
    grid[1][1] = 10;
    grid[2][2] = 15;
    
    // Print the grid using nested loops
    // Outer loop: rows (i from 0 to 3)
    // Inner loop: columns (j from 0 to 3)
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}