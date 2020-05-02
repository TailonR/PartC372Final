//
// Created by renew on 4/30/2020.
//

#include "../Headers/InventoryOfJeeps.h"
InventoryOfJeeps::InventoryOfJeeps(std::initializer_list<std::shared_ptr<Car>> carsInInventory): InventoryOfCars(carsInInventory)
{}

void InventoryOfJeeps::setMake(std::string make) { _make = make; }

InventoryIterator InventoryOfJeeps::createIterator()
{
    InventoryIterator it(_carsOnTheLot.begin(), _carsOnTheLot);
    return it;
}

