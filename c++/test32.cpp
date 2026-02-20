/*
 * File: circle_class.cpp
 * Task: Create a Circle class with area and circumference calculations
 * 
 * Exercise 23: Simple Class - Circle
Type: Object-Oriented Programming Basics
Objective: Reinforce constructor syntax and class methods. Create a Circle class with radius, calculate area and circumference.
Expected Output:
Circle 1: Radius=5, Area=78.5398, Circumference=31.4159
Circle 2: Radius=3, Area=28.2743, Circumference=18.8496
Key Concepts:

Constructor with single parameter
Private member variable (radius)
Two calculation methods (area, circumference)
Getter for radius
Formulas: Area = π × r², Circumference = 2 × π × r

Time: 7-8 minutes
 */

#include <iostream>

using namespace std;

class Circle {
  private:
    double radius;
    
  public:
    // Constructor - takes radius
    Circle(double r) : radius(r) {}
    
    // Method to calculate area (PI * r * r)
    double getArea(){
        return 3.14159 * (radius * radius);   
    }
    
    // Method to calculate circumference (2 * PI * r)
    double getCircumference() {
        return 2 * 3.14159 * radius;
    }
    
    // Getter for radius
    double getRadius(){
        return radius;
    }
};

int main() {
    Circle c1(5);
    Circle c2(3);
    
    cout << "Circle 1: Radius=" << c1.getRadius() 
         << ", Area=" << c1.getArea() 
         << ", Circumference=" << c1.getCircumference() << endl;
         
    cout << "Circle 2: Radius=" << c2.getRadius() 
         << ", Area=" << c2.getArea() 
         << ", Circumference=" << c2.getCircumference() << endl;
    
    return 0;
}