//
// Created by renew on 4/30/2020.
//
#include "Car.h"

#ifndef UNTITLED1_NULLCAR_H
#define UNTITLED1_NULLCAR_H
class NullCar: public Car {
public:
    NullCar();
    std::string returnMessage();
    std::string model();
    int year();

private:
    std::string _message;
    std::string _model = "No car in lot for this model";
    int _year = 0;
};
#endif //UNTITLED1_NULLCAR_H
