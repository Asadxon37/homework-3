#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "LandVehicle.h"
using namespace std;
class Truck:public LandVehicle {
    double loadCapacity;
    public:
    Truck(string b,int y, int w, double l):LandVehicle(b,y,w),loadCapacity(l) {
        this->loadCapacity=l;
    }
    string getInfo() const override {
        return "Truck class:: Load capacity: " + to_string(loadCapacity) + " tons\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";

    }
};
#endif //TRUCK_H
