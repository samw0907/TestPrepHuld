// main.cpp
#include <iostream>
#include "test53.hpp"
using namespace std;

int main() {
  Circle myCircle(5.0);
  cout << "Area: " << myCircle.getArea() << endl;
  cout << "Circumference: " << myCircle.getCircumference() << endl;
  return 0;
}