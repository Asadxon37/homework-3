#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
    protected:
    string brand;
    int year;
public:
    Vehicle(string b, int y):brand(b),year(y) {
        this->year = y;
        this->brand = b;
    }
    virtual string getInfo()const=0;

};


#endif //VEHICLE_H
