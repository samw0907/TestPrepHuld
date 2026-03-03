#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a struct called Pass with fields:
//   satelliteName  (string)
//   maxElevation   (double)
//   contacted      (bool)
//
// Write a function called summaryReport that takes a vector<Pass>
// and prints:
//   - total passes
//   - number successfully contacted
//   - highest elevation seen across all passes
//
// Expected output:
//   Total passes: 4
//   Contacted: 3
//   Highest elevation: 78.5

// TODO: struct Pass
struct Pass {
    string satelliteName;
    double maxElevation;
    bool contacted;
};
// TODO: summaryReport

void summaryReport(vector<Pass> passes) {
    int total_passes = 0;
    int contacted_total = 0;
    double highest_elevation = passes[0].maxElevation;
    for (int i = 0; i < passes.size(); i++) {
        total_passes++;
        if (passes[i].contacted == true) {
            contacted_total++;
        }
        if (passes[i].maxElevation > highest_elevation) {
            highest_elevation = passes[i].maxElevation;
        }
    }
    cout << total_passes << endl;
    cout << contacted_total  << endl;
    cout << highest_elevation << endl;
};

int main() {
    vector<Pass> passes = {
        {"NOAA-19", 45.2, true},
        {"METEOR-M2", 78.5, true},
        {"NOAA-15", 12.3, false},
        {"AQUA", 67.0, true}
    };

    summaryReport(passes);
    return 0;
}