#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    double grade;
    bool passed;
};

// TODO: getTopStudent function
// Takes: vector<Student>
// Returns: string (name of student with highest grade)

string getTopStudent(vector<Student> students) {
    string topName = students[0].name;
    double topGrade = students[0].grade;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].grade > topGrade) {
            topName = students[i].name;
            topGrade = students[i].grade;
        }
    }
    return topName;
}

int main() {
    vector<Student> students = {
        {"Alice", 88.5, true},
        {"Bob", 52.0, false},
        {"Charlie", 76.0, true}
    };

    cout << "Top student: " << getTopStudent(students) << endl;
    return 0;
}