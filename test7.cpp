#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {2, 5, 7, 1, 9};
    int threshold = 5;
    int count = 0;

    for (int i = 0; i < values.size(); i++) {
        if (values[i] > threshold) {
            count++;
        }
    }

    std::cout << "Count: " << count << std::endl;
    return 0;
}
