#include <iostream>
#include <vector>

int main() {
    std::vector<int> readings = {12, -3, 7, 0, -5, 9};

    // TODO: calculate the sum of all positive readings
       int sum = 0;

    for (int i = 0; i < readings.size(); i++) {
        if (readings[i] > 0) {
            sum = sum + readings[i];
        }
    };


    std::cout << "Sum of valid readings: " << sum << std::endl;

    return 0;
}
