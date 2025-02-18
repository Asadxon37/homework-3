#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class LandVehicle : public Vehicle {
    int numWheels;
    public:
    LandVehicle(string b,int y, int w):Vehicle(b,y),numWheels(w){}
    void getInfo()const override {
        cout << "LandVehicle class:: Number of wheels: " << numWheels << endl;
        cout << "Vehicle class:: Brand: " << brand << "\nVehicle class:: Year: " << year << endl;
    }
};



#endif //LANDVEHICLE_H
