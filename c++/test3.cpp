#include <iostream>
#include <vector>

int main() {
    std::vector<int> readings = {5, -1, -3, 8, 0, -2, 4};

    // TODO: replace negative readings with 0

    for (int i = 0; i < readings.size(); i++) {
        if (readings[i] < 0) {
            readings[i] = 0;
        };
        std::cout << readings[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
