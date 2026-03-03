#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a class called GroundStation with:
//   private fields:
//     name         (string)
//     signalLog    (vector<double>)
//
//   public methods:
//     constructor  - takes a string name
//     logSignal    - takes a double, adds it to signalLog
//     getAverage   - returns double average of signalLog
//     printReport  - prints name and average signal
//
// Expected output:
//   Station: Espoo
//   Average signal: 72.5

// TODO: class GroundStation
class GroundStation {
    private:
        string name;
        vector<double> signalLog;

    public:
        GroundStation(string stationName) {
            name = stationName;
        }

        void logSignal(double signal) {
            signalLog.push_back(signal);
        }

        double getAverage() {
            double sum = 0;
            for (int i = 0; i < signalLog.size(); i++) {
                sum += signalLog[i];
            }
            return sum / signalLog.size();
        }

        void printReport() {
            cout << "Station: " << name << endl;
            cout << "Average signal: " << getAverage() << endl;
        }
};

int main() {
    GroundStation station("Espoo");
    station.logSignal(55.0);
    station.logSignal(88.0);
    station.logSignal(74.5);
    station.logSignal(72.5);
    station.printReport();
    return 0;
}