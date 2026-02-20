/*
 * File: student_class.cpp
 * Task: Create a complete Student class from scratch
 * 
 * Exercise 25: Student Class - Build from Scratch
Type: Object-Oriented Programming - Full Class Creation
Objective: Create another complete class to reinforce constructor and method syntax.
Requirements:
Create a class called Student with:

Private members: name (string), grade (double), studentID (int)
Constructor: Takes student ID, name, and initial grade
Methods:

updateGrade(double newGrade) - modify the grade
addToGrade(double points) - add points to current grade
getGrade() - return current grade
getName() - return name
getStudentID() - return student ID



Expected Output:
Student 101: Alice, Grade = 85
After update: Grade = 92
After adding 3 points: Grade = 95

Student 102: Bob, Grade = 78
After adding 5 points: Grade = 83
 */

#include <iostream>
#include <string>
using namespace std;

// Create your Student class here
class Student {
    private:
    string name;
    double grade;
    int studentID;

    public:
    Student(int id, string n, double g) : studentID (id),  name (n), grade (g){};

    void updateGrade(double newGrade) {
        grade = newGrade;
    };

    void addToGrade(double points) {
        grade += points;
    }

    double getGrade(){
        return grade;
    }

    string getName(){
        return name;
    }

    int getStudentID(){
        return studentID;
    }
};


int main() {
    Student s1(101, "Alice", 85);
    cout << "Student " << s1.getStudentID() << ": " 
         << s1.getName() << ", Grade = " << s1.getGrade() << endl;
    
    s1.updateGrade(92);
    cout << "After update: Grade = " << s1.getGrade() << endl;
    
    s1.addToGrade(3);
    cout << "After adding 3 points: Grade = " << s1.getGrade() << endl;
    
    cout << endl;
    
    Student s2(102, "Bob", 78);
    cout << "Student " << s2.getStudentID() << ": " 
         << s2.getName() << ", Grade = " << s2.getGrade() << endl;
    
    s2.addToGrade(5);
    cout << "After adding 5 points: Grade = " << s2.getGrade() << endl;
    
    return 0;
}