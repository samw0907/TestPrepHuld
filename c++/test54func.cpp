// Car.cpp
#include "test54.hpp"

// TODO: Implement constructor
// Initialize brand and speed using initializer list
Car::Car(string b, int s) : brand(b), speed(s) {};

// TODO: Implement getBrand
// Should return the brand
string Car::getBrand() {
   return brand;
}

// TODO: Implement getSpeed
// Should return the current speed
int Car::getSpeed() {
   return speed;
}

// TODO: Implement accelerate
// Should add the given amount to speed
void Car::accelerate(int amount) {
   speed += amount;
}