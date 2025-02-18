#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
class Vehicle {
    protected:
    string brand;
    int year;
public:
    Vehicle(string b, int y):brand(b),year(y){}
    virtual ~Vehicle(){}
    virtual void getInfo()const=0;

};


#endif //VEHICLE_H
