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
    void getInfo() const override {
        cout << "WaterVehicle class:: Vessel type: " << vesselType << endl;
        cout << "Vehicle class:: Brand: " << brand << "\nVehicle class:: Year: " << year << endl;
    }
};
#endif //WATERVEHICLE_H
