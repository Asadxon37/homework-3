#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H
#include "Vehicle.h"
#include <iostream>
using namespace std;
class WaterVehicle : public Vehicle {
    string vesselType;
    public:
    WaterVehicle(string b, int y,string vt):Vehicle(b,y),vesselType(vt){}
    virtual ~WaterVehicle() {}
    string getInfo() const override {
        return "WaterVehicle class:: Vessel type: " + vesselType + "\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //WATERVEHICLE_H
