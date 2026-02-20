/*
 * File: rectangle_class.cpp
 * Task: Create a Rectangle class with constructor and area calculation
 * 
 * Exercise 22: Simple Class - Rectangle
Type: Object-Oriented Programming Basics
Objective: Create a basic class with constructor, private member variables, and public methods. This tests fundamental OOP understanding.
Expected Output:
Rectangle 1: Width=5, Height=10, Area=50
Rectangle 2: Width=3, Height=7, Area=21
Key Concepts:

Constructor initializes member variables
Private variables (width, height)
Public methods (getArea, getWidth, getHeight)
Creating objects from class

Time: 8-10 minutes
 */

#include <iostream>
using namespace std;

class Rectangle {
  private:
    double width;
    double height;
    
  public:
    // Constructor - takes width and height
    Rectangle(double w, double h) : width(w), height(h) {}
    
    // Method to calculate area
    double getArea() {
        return width * height;
    }
    
    // Getters
    double getWidth(){return width;}
    double getHeight(){return height;}
};

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2(3, 7);
    
    cout << "Rectangle 1: Width=" << rect1.getWidth() 
         << ", Height=" << rect1.getHeight() 
         << ", Area=" << rect1.getArea() << endl;
         
    cout << "Rectangle 2: Width=" << rect2.getWidth() 
         << ", Height=" << rect2.getHeight() 
         << ", Area=" << rect2.getArea() << endl;
    
    return 0;
}