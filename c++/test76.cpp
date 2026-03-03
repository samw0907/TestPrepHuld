// test6.cpp
// Compile: g++ test6.cpp -o test6
// Run:     ./test6
//
// Write a function called printPassed
// that takes a vector<Student> and prints only
// the names of students where passed == true
//
// Expected output:
//   Alice
//   Charlie

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    double grade;
    bool passed;
};

// TODO: printPassed function

void printPassed(vector<Student> students) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].passed == true) {
        cout << students[i].name << endl;
        }
    }
}

int main() {
    vector<Student> students = {
        {"Alice", 88.5, true},
        {"Bob", 52.0, false},
        {"Charlie", 76.0, true}
    };

    printPassed(students);
    return 0;
}