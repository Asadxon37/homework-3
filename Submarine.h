#ifndef SUBMARINE_H
#define SUBMARINE_H
#include "WaterVehicle.h"
#include <iostream>
using namespace std;
class Submarine:public WaterVehicle {
    int maxDepth;
public:
    Submarine(string b, int y,string vt,int md):WaterVehicle(b,y,vt),maxDepth(md){}
    void getInfo() const override {
        cout << "Submarine class:: Max depth: " << maxDepth << " meters" << endl;
        WaterVehicle::getInfo();
    }
};
#endif //SUBMARINE_H
