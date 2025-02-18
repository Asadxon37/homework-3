#ifndef BOAT_H
#define BOAT_H
#include "WaterVehicle.h"
#include <iostream>
using namespace std;
class Boat:public WaterVehicle {
    double length;
    public:
    Boat(string b, int y,string vt,double len):WaterVehicle(b,y,vt),length(len){}
    void getInfo() const override {
        cout << "Boat class:: Length: " << length << " meters" << endl;
        showBaseInfo();
    }
};
#endif //BOAT_H
