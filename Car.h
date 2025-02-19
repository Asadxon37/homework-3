#ifndef CAR_H
#define CAR_H
#include "LandVehicle.h"
class Car:public LandVehicle {
    int numDoors;
    public:
    Car(string b, int y,int w, int d):LandVehicle(b,y,w),numDoors(d) {
        this->numDoors =d;
    }
    string getInfo() const override {
       return "Car class:: Number of doors: " + to_string(numDoors) + "\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //CAR_H
