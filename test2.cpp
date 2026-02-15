#include <iostream>
#include <vector>

int main() {
    std::vector<int> readings = {5, -1, -3, 8, 0, -2, 4};

    
    // TODO: count how many readings are invalid (less than 0)
    int count = 0;

    for (int i = 0; i < readings.size(); i++) {
        if (readings[i] < 0 ) {
            count++;
        };
    }


    std::cout << "Invalid readings: " << count << std::endl;

    return 0;
}
