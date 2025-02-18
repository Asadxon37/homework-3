#ifndef SPORTSCAR_H
#define SPORTSCAR_H
#include <iostream>
#include "Car.h"
using namespace std;
class SportsCar : public Car {
    int speed;
    public:
    SportsCar(string b, int y,int w, int d,int s):Car(b,y,w,d),speed(s){}
    void getInfo()const override {
        cout<< "SportsCar class:: Max speed: " << speed << " km/h" << endl;
        showBaseInfo();
    }
};
#endif //SPORTSCAR_H
