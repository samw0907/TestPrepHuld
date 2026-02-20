#include <iostream>
#include <vector>

void applyCalibrationInPlace(std::vector<std::vector<int>>& frame, int offset, int minVal, int maxVal) {
    for (int r = 0; r < frame.size(); r++) {
        for (int c = 0; c < frame[r].size(); c++) {
            frame[r][c] += offset;

            if (frame[r][c] < minVal) {
                frame[r][c] = minVal;
            } else if (frame[r][c] > maxVal) {
                frame[r][c] = maxVal;
            }
        }
    }
}

void computeRowSums(const std::vector<std::vector<int>>& frame, std::vector<int>& rowSums) {
    rowSums.clear();
    rowSums.resize(frame.size(), 0);

    for (int r = 0; r < frame.size(); r++) {
        int sum = 0;
        for (int c = 0; c < frame[r].size(); c++) {
            sum += frame[r][c];
        }
        rowSums[r] = sum;
    }
}


int findFirstHotRow(const std::vector<int>& rowSums, int cols, double threshold) {
    for (int r = 0; r < rowSums.size(); r++) {
        double avg = static_cast<double>(rowSums[r]) / static_cast<double>(cols);
        if (avg > threshold) {
            return r;
        }
    }
    return -1;
}


int main() {
    std::vector<std::vector<int>> frame = {
        { 3,  7, -2,  4},
        {10,  0,  5,  1},
        { 6,  9,  8,  2}
    };

    int offset = 2;         // calibration bias to add
    int minVal = 0;         // valid range min
    int maxVal = 12;        // valid range max
    double threshold = 8.0; // average threshold for a "hot" row

    applyCalibrationInPlace(frame, offset, minVal, maxVal);

    std::vector<int> rowSums;
    computeRowSums(frame, rowSums);

    int cols = static_cast<int>(frame[0].size());
    int hotRow = findFirstHotRow(rowSums, cols, threshold);

    // Print calibrated frame
    std::cout << "Calibrated frame:\n";
    for (int r = 0; r < frame.size(); r++) {
        for (int c = 0; c < frame[r].size(); c++) {
            std::cout << frame[r][c] << " ";
        }
        std::cout << "\n";
    }

    // Print row sums
    std::cout << "Row sums: ";
    for (int i = 0; i < rowSums.size(); i++) {
        std::cout << rowSums[i] << " ";
    }
    std::cout << "\n";

    std::cout << "First hot row index: " << hotRow << "\n";
    return 0;
}
