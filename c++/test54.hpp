// Car.h
#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
  private:
    string brand;
    int speed;
  
  public:
    Car(string brand, int speed);
    
    // TODO: Declare getBrand method
    string getBrand();
    // TODO: Declare getSpeed method
    int getSpeed();
    // TODO: Declare accelerate method
    void accelerate(int amount);
};

#endif