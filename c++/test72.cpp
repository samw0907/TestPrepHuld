// test1.cpp
// Compile: g++ test1.cpp -o test1
// Run:     ./test1
//
// Write three functions:
//   findMin        - takes vector<double>, returns the minimum value
//   findMax        - takes vector<double>, returns the maximum value
//   calculateAverage - takes vector<double>, returns the average
//
// Expected output:
//   Minimum score: 45
//   Maximum score: 95
//   Average score: 73.5

#include <iostream>
#include <vector>
using namespace std;

// TODO: findMin function
double findMin(vector<double> scores) {
    double min = scores[0];
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}

// TODO: findMax function
double findMax(vector<double> scores) {
    double max = scores[0];
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

// TODO: calculateAverage function
double calculateAverage(vector<double> scores) {
    double count = 0;
    for (int i = 0; i < scores.size(); i++) {
        count += scores[i];
    }
    return count / scores.size();
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