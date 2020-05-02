//
// Created by renew on 4/30/2020.
//
#include "Car.h"
#ifndef UNTITLED1_JEEP_H
#define UNTITLED1_JEEP_H
class Jeep: public Car {
public:
    Jeep(std::string model, int year);
    std::string getModel() override;
    int getYear() override;
private:
    std::string _model;
    int _year;
};
#endif //UNTITLED1_JEEP_H
