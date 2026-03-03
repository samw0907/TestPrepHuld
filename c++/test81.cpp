#include <iostream>
#include <vector>
using namespace std;

// findBrightest  - takes vector<vector<int>>, returns int (max value)
// countAbove     - takes vector<vector<int>> and int threshold,
//                  returns count of pixels above threshold
// averageIntensity - takes vector<vector<int>>, returns double average
//
// Expected output:
//   Brightest pixel: 214
//   Pixels above 100: 6
//   Average intensity: 109.0

// TODO: three functions
int findBrightest(vector<vector<int>> image) {
    int brightest = image[0][0];
    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < image[i].size(); j++) {
            if (image[i][j] > brightest) {
                brightest = image[i][j];
            }
        }
    }
    return brightest;
}

int countAbove(vector<vector<int>> image, int threshold) {
    int count = 0;
    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < image[i].size(); j++) {
            if (image[i][j] > threshold) {
            count ++;
            }
        }
    }
    return count;
}

double averageIntensity(vector<vector<int>> image) {
    double sum = 0;
    int count = 0;
    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < image[i].size(); j++) {
            sum += image[i][j];
            count++;
        }
    }
    return sum / count;   
}

int main() {
    vector<vector<int>> image = {
        {34,  120, 214},
        {88,  176, 95},
        {142, 201, 13}
    };

    cout << "Brightest pixel: " << findBrightest(image) << endl;
    cout << "Pixels above 100: " << countAbove(image, 100) << endl;
    cout << "Average intensity: " << averageIntensity(image) << endl;

    return 0;
}