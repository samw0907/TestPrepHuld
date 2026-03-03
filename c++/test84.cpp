#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a struct called Reading with fields:
//   timestamp  (string)
//   value      (double)
//
// Define a class called Sensor with:
//   private fields:
//     sensorName  (string)
//     readings    (vector<Reading>)
//
//   public methods:
//     constructor     - takes a string name
//     addReading      - takes a string timestamp and double value,
//                       creates a Reading and adds it to readings
//     getMax          - returns the highest value recorded
//     printAll        - prints each timestamp and value
//
// Expected output:
//   09:00 -> 23.5
//   09:15 -> 31.2
//   09:30 -> 28.7
//   Max value: 31.2

// TODO: struct Reading
struct Reading {
    string timestamp;
    double value;
};

// TODO: class Sensor
class Sensor {
    private:
        string sensorName;
        vector<Reading> readings;

    public:
        Sensor(string name) {
            sensorName = name;
        }

        void addReading(string timestamp, double value) {
            Reading r;
            r.timestamp = timestamp;
            r.value = value;
            readings.push_back(r);
        }

        double getMax() {
            double highest = readings[0].value;
            for (int i = 0; i < readings.size(); i++) {
                if (readings[i].value > highest) {
                    highest = readings[i].value;
                }
            }
            return highest;
        }

        void printAll() {
            for (int i = 0; i < readings.size(); i++) {
                cout << readings[i].timestamp << " -> " << readings[i].value << endl;
            }
        }
};

int main() {
    Sensor sensor("Temperature Sensor A");
    sensor.addReading("09:00", 23.5);
    sensor.addReading("09:15", 31.2);
    sensor.addReading("09:30", 28.7);
    sensor.printAll();
    cout << "Max value: " << sensor.getMax() << endl;
    return 0;
}