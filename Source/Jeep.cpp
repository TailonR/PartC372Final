//Tailon Russell
// Created by renew on 4/30/2020.
//

#include "../Headers/Jeep.h"

Jeep::Jeep(std::string model, int year): _model(std::move(model)), _year(year)
{}

std::string Jeep::getModel() { return _model; }

int Jeep::getYear() {return _year;}