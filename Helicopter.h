#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include "AirVehicle.h"
using namespace std;
class Helicopter:public AirVehicle {
    int rotorCount;
    public:
    Helicopter(string b, int y,int ml,int rc):AirVehicle(b,y,ml),rotorCount(rc) {
        this->rotorCount = rc;
    }
    string getInfo() const override {
        return "Helicopter class:: Rotor count: " + to_string(rotorCount) + "\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //HELICOPTER_H
