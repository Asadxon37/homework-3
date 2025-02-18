#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "LandVehicle.h"
using namespace std;
class Car:public LandVehicle {
    int numDoors;
    public:
    Car(string b, int y,int w, int d):LandVehicle(b,y,w),numDoors(d){}
    void getInfo() const override {
        cout<< "Car class:: Number of doors:" << numDoors << endl;
        showBaseInfo();
    }
};
#endif //CAR_H
