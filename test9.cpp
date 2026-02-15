#include <iostream>
#include <string>

int countMissing(const std::string& s) {
    // TODO: count '*'
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '*') {
            count++;
        }
        return count;
    }
}

bool isValidPacket(const std::string& s, int maxMissing) {
    // condition 1: missing count
    if (countMissing(s) > maxMissing) {
        return false;
    }

    // condition 2: contains "OK"
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'O' && s[i + 1] == 'K') {
            return true;
        }
    }

    return false;
}

int main() {
    std::string packet = "WARN*OK**END";
    int maxMissing = 2;

    int missing = countMissing(packet);
    bool valid = isValidPacket(packet, maxMissing);

    std::cout << "Missing: " << missing << "\n";
    std::cout << "Valid: " << (valid ? "YES" : "NO") << "\n";

    return 0;
}
