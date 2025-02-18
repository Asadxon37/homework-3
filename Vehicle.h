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
    virtual void getInfo()const {
        showBaseInfo();
    };
    void showBaseInfo()const {
        cout<<"Vehicle class:: Brand: "<<brand<<endl;
        cout<<"Vehicle class:: Year: "<<year<<endl;
    }
};


#endif //VEHICLE_H
