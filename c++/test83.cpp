#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a class called SatelliteTracker with:
//   private fields:
//     satelliteName  (string)
//     elevations     (vector<double>)
//
//   public methods:
//     constructor    - takes a string name
//     addPass        - takes a double elevation, adds it to elevations
//     getHighest     - returns the highest elevation recorded
//     getTotalPasses - returns the number of passes logged
//     printSummary   - prints name, total passes, and highest elevation
//
// Expected output:
//   Satellite: NOAA-19
//   Total passes: 4
//   Highest elevation: 78.5

// TODO: class SatelliteTracker

class SatelliteTracker {
    private:
        string satelliteName;
        vector<double> elevations;
    
    public:
        SatelliteTracker(string name) {
            satelliteName = name;
        }

        void addPass(double elevation) {
            elevations.push_back(elevation);
        }

        double getHighest() {
            double highest = elevations[0];
            for (int i = 0; i < elevations.size(); i++) {
                if (elevations[i] > highest) {
                    highest = elevations[i];
                }
            }
            return highest;
        }

        int getTotalPasses() {
            return elevations.size();
        }

        void printSummary() {
            cout << satelliteName << endl;
            cout << getTotalPasses() << endl;
            cout << getHighest() << endl;
        }

};

int main() {
    SatelliteTracker tracker("NOAA-19");
    tracker.addPass(45.2);
    tracker.addPass(78.5);
    tracker.addPass(23.0);
    tracker.addPass(61.3);
    tracker.printSummary();
    return 0;
}