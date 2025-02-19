#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"
#include <iostream>
using namespace std;
class Boat:public WaterVehicle {
    double length;
    public:
    Boat(string b, int y,string vt,double len):WaterVehicle(b,y,vt),length(len){}
    string getInfo() const override {
        return "Boat class:: Length: " + to_string(length) + " meters\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //BOAT_H
