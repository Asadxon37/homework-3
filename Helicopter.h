#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include "AirVehicle.h"
using namespace std;
class Helicopter:public AirVehicle {
    int rotorCount;
    public:
    Helicopter(string b, int y,int ml,int rc):AirVehicle(b,y,ml),rotorCount(rc){}
    void getInfo() {
        cout << "Helicopter class:: Rotor count: " << rotorCount << endl;
        showBaseInfo();
    }
};
#endif //HELICOPTER_H
