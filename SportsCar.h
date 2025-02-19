#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include <iostream>
#include "Car.h"
using namespace std;
class SportsCar : public Car {
    int speed;
    public:
    SportsCar(string b, int y,int w, int d,int s):Car(b,y,w,d),speed(s) {
        this->speed = s;
    }
    string getInfo() const override {
        return "SportsCar class:: Max speed: " + to_string(speed) + " km/h\nVehicle class:: Brand: " + brand + "\nVehicle class:: Year: " + to_string(year) + "\n";
    }
};
#endif //SPORTSCAR_H
