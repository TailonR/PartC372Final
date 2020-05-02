//Tailon Russell
// Created by renew on 4/30/2020.
//
#include "Car.h"
#ifndef UNTITLED1_MAZDA_H
#define UNTITLED1_MAZDA_H
class Mazda: public Car{
public:
    Mazda(std::string model, int year);
    std::string getModel() override;
    int getYear() override;
private:
    std::string _model;
    int _year;
};
#endif //UNTITLED1_MAZDA_H
