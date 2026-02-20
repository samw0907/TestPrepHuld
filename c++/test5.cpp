#include <iostream>
#include <vector>

int findFirstInvalid(const std::vector<int>& readings) {
    // TODO: implement this function
    for (int i = 0; i < readings.size(); i++) {
        if (readings[i] < 0){
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> readings = {5, 3, -1, -3, 8};

    int index = findFirstInvalid(readings);

    std::cout << "First invalid index: " << index << std::endl;

    return 0;
}
