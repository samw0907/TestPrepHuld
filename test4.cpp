#include <iostream>
#include <vector>

int countInvalidReadings(const std::vector<int>& readings) {
    // TODO: implement this function
    int count = 0;

    for (int i = 0; i < readings.size(); i++) {
        if (readings[i] < 0){
        count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> readings = {5, -1, -3, 8, 0, -2, 4};

    int invalidCount = countInvalidReadings(readings);

    std::cout << "Invalid readings: " << invalidCount << std::endl;

    return 0;
}
