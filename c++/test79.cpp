#include <iostream>
#include <vector>
using namespace std;

// Write two functions:
//
// filterReadings - takes vector<double>, returns new vector<double>
//                  containing only values >= 0
//
// calcAverage    - takes vector<double>, returns double average
//                  return 0 if vector is empty
//
// Expected output:
//   Valid readings: 5
//   Average signal: 67.3

// TODO: filterReadings
vector<double> filterReadings(vector<double> rawReadings) {
    vector<double> newReadings = {};
    for (int i = 0; i < rawReadings.size(); i++) {
        if (rawReadings[i] >= 0) {
           newReadings.push_back(rawReadings[i]);
        }
    }
    return newReadings;
}
// TODO: calcAverage
double calcAverage(vector<double> valid ) {
    if (valid.size() == 0) return 0;
    double sum = 0;
    for (int i = 0; i < valid.size(); i++) {
        sum += valid[i];
    }
    return sum / valid.size();
}


int main() {
    vector<double> rawReadings = {55.0, -1.0, 72.5, -9.9, 88.0, 43.5, -2.0, 77.5};

    vector<double> valid = filterReadings(rawReadings);
    cout << "Valid readings: " << valid.size() << endl;
    cout << "Average signal: " << calcAverage(valid) << endl;

    return 0;
}