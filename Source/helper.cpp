//Tailon Russell
// Created by renew on 4/30/2020.
//
#include <iostream>

#include "../Headers/helper.h"
void printMessage(const std::shared_ptr<InventoryOfCars> &cars)
{
    cars->whatsInTheLot(std::cout);
    std::cout << std::endl;
}