// test5.cpp
// Compile: g++ test5.cpp -o test5
// Run:     ./test5
//
// Using the Student struct from Q4,
// create a vector of three students and loop through it,
// printing each student's name and grade
//
// Expected output:
//   Alice: 88.5
//   Bob: 52.0
//   Charlie: 76.0

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    double grade;
    bool passed;
};

int main() {
    vector<Student> students = {
        {"Alice", 88.5, true},
        {"Bob", 52.0, false},
        {"Charlie", 76.0, true}
    };

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].name << ": " << students[i].grade << endl;
    }

    return 0;
}