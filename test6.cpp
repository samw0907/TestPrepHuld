#include <iostream>
#include <string>

int main() {
    std::string status = "OK**WARN*OK";

    // TODO: count how many '*' characters appear
    int count = 0;

    for (int i = 0; i < status.length(); i++) {
        if (status[i] == '*') {
            count++;
        }
    }

    std::cout << "Missing values: " << count << std::endl;

    return 0;
}
