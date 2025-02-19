#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;
class LandVehicle : public Vehicle {
    protected:
    int numWheels;
public:
    LandVehicle(string b,int y, int w):Vehicle(b,y),numWheels(w) {
        this->numWheels = w;
    }
    string getInfo() const override {
         return "LandVehicle class:: Number of wheels: " + to_string(numWheels) + "\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";}
};



#endif //LANDVEHICLE_H
