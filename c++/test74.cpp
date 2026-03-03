// test4.cpp
// Compile: g++ test4.cpp -o test4
// Run:     ./test4
//
// Define a struct called Student with three fields:
//   name   (string)
//   grade  (double)
//   passed (bool)
//
// In main, create two Student objects and print each field for both
//
// Expected output:
//   Alice 88.5 1
//   Bob 52.0 0

#include <iostream>
#include <string>
using namespace std;

// TODO: define struct Student
struct Student {
    string name;
    double grade;
    bool passed;
};



int main() {
    // TODO: create two Student objects and print their fields
    Student stu1 = {"Alice", 88.5, true};
    Student stu2 = {"Bob", 52.0, false};

    cout << stu1.name << " " << stu1.grade << " " << stu1.passed << endl;
    cout << stu2.name << " " << stu2.grade << " " << stu2.passed << endl;
    return 0;
}