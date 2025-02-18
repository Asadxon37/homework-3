#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "LandVehicle.h"
using namespace std;
class Truck:public LandVehicle {
    double loadCapacity;
    public:
    Truck(string b,int y, int w, double l):LandVehicle(b,y,w),loadCapacity(l){}
    void getInfo() const override {
        cout << "Truck class:: Load capacity: " << loadCapacity << " tons" << endl;
        LandVehicle::getInfo();
    }
};
#endif //TRUCK_H
