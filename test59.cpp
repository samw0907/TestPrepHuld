/*
 * File: stats_calculator.cpp
 * Task: Write three functions to calculate min, max, and average
 * 
 * Integration Problem 5: Statistics Calculator (Q2 Level)
Type: Multiple Functions Working Together
Objective: Write three separate functions that work together to analyze a vector of test scores.
Expected Output:
Minimum score: 45
Maximum score: 95
Average score: 73.5
Key Concepts:

Multiple functions in one program
Each function does one task
Calling multiple functions from main
Reusing patterns (min/max/average)

Time: 20 minutes
 */

#include <iostream>
#include <vector>
using namespace std;

// TODO: Write findMin function
// Takes: vector<double> scores
// Returns: double (minimum score)
double findMin(vector<double> scores){
    double min = scores[0];
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}


// TODO: Write findMax function
// Takes: vector<double> scores
// Returns: double (maximum score)
double findMax(vector<double> scores){
    double max = scores[0];
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}


// TODO: Write calculateAverage function
// Takes: vector<double> scores
// Returns: double (average of all scores)
double calculateAverage(vector<double> scores){
    double sum = 0;
    int count = 0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
        count++;
    }
    return sum / count;
}


int main() {
  vector<double> scores = {78.5, 92.0, 45.0, 88.5, 67.0, 95.0, 82.0};
  
  double minScore = findMin(scores);
  double maxScore = findMax(scores);
  double avgScore = calculateAverage(scores);
  
  cout << "Minimum score: " << minScore << endl;
  cout << "Maximum score: " << maxScore << endl;
  cout << "Average score: " << avgScore << endl;
  
  return 0;
}