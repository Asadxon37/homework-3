#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"
#include <iostream>
using namespace std;
class Submarine:public WaterVehicle {
    int maxDepth;
public:
    Submarine(string b, int y,string vt,int md):WaterVehicle(b,y,vt),maxDepth(md){}
    string getInfo() const override {
        return "Submarine class:: Max depth: " + to_string(maxDepth) + " meters\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //SUBMARINE_H
