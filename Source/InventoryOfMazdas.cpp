//Tailon Russell
// Created by renew on 4/30/2020.
//

#include "../Headers/InventoryOfMazdas.h"
InventoryOfMazdas::InventoryOfMazdas(std::initializer_list<std::shared_ptr<Car>> carInventory): InventoryOfCars(carInventory)
{}

void InventoryOfMazdas::setMake(std::string make) { _make = make; }

InventoryIterator InventoryOfMazdas::createIterator()
{
    InventoryIterator it(_carsOnTheLot.begin(), _carsOnTheLot);
    return it;
}