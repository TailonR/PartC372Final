//
// Created by renew on 4/30/2020.
//

#include "../Headers/Mazda.h"
Mazda::Mazda(std::string model, int year): _model(std::move(model)), _year(year)
{}

std::string Mazda::getModel() { return _model; }

int Mazda::getYear() {return _year;}