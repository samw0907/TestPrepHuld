// main.cpp
#include <iostream>
#include "test54.hpp"
using namespace std;

int main() {
  // Create a Car object with brand "Tesla" and speed 50
  Car myCar("Tesla", 50);
  
  // Print brand and speed
  cout << "Brand: " << myCar.getBrand() << endl;
  cout << "Speed: " << myCar.getSpeed() << endl;
  
  // Accelerate by 20
  myCar.accelerate(20);
  
  // Print new speed
  cout << "New Speed: " << myCar.getSpeed() << endl;
  
  return 0;
}