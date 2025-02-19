#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include "Vehicle.h"
#include <iostream>
using namespace std;
class AirVehicle : public Vehicle {
    int maxAltitude;
    public:
    AirVehicle(string b, int y,int ml):Vehicle(b,y),maxAltitude(ml) {
        this->maxAltitude = ml;
    }
    string getInfo() const override {
        return "AirVehicle class:: Max altitude: " + to_string(maxAltitude) + " meters\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }

};
#endif //AIRVEHICLE_H
