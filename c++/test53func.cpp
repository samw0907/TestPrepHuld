// Circle.cpp
#include "test53.hpp"

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() {
  return 3.14159 * radius * radius;
}

double Circle::getCircumference() {
  return 2 * 3.14159 * radius;
}