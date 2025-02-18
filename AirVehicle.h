#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include "Vehicle.h"
#include <iostream>
using namespace std;
class AirVehicle : public Vehicle {
    int maxAltitude;
    public:
    AirVehicle(string b, int y,int ml):Vehicle(b,y),maxAltitude(ml){}
    virtual ~AirVehicle() {}
    void getInfo() const override {
        cout << "AirVehicle class:: Max altitude: " << maxAltitude << " meters" << endl;
        cout << "Vehicle class:: Brand: " << brand << "\nVehicle class:: Year: " << year << endl;
    }

};
#endif //AIRVEHICLE_H
