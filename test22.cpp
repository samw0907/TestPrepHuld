/*
 * File: distance_function.cpp
 * Task: Calculate distance between two 2D points
 * 
 * Exercise 13: Calculate Distance (Functions - Multiple Parameters & Return)
Type: Space/Physics Domain-Specific
Task:
Write a function called distance that:

Takes 4 parameters: x1, y1, x2, y2 (coordinates of two points)
Calculates and returns the distance between them
Formula: distance = sqrt((x2-x1)² + (y2-y1)²)
In main(), test with points (0, 0) and (3, 4) - answer should be 5.0

Expected Output:
Distance between (0, 0) and (3, 4): 5
Time Estimate: 7-8 minutes
 */

#include <iostream>
#include <cmath>  // For sqrt() and pow()
using namespace std;

double distance (double x1, double y1, double x2, double y2) {
    return sqrt((pow(x2-x1, 2)) + (pow(y2-y1, 2)));
};


int main() {
    double x1 = 0, y1 = 0;
    double x2 = 3, y2 = 4;
    

    double result = distance(x1, y1, x2, y2);
    cout << "Distnace between " << "(" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << "): " << result << endl;

    return 0;
}