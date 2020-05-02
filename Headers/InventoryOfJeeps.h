//Tailon Russell
// Created by renew on 4/30/2020.
//
#include "InventoryOfCars.h"
#ifndef UNTITLED1_INVENTORYOFJEEPS_H
#define UNTITLED1_INVENTORYOFJEEPS_H
class InventoryOfJeeps: public InventoryOfCars {
public:
    InventoryOfJeeps(std::initializer_list<std::shared_ptr<Car>> carsInInventory);
    InventoryIterator createIterator() override;
    void setMake(std::string make) override;
};
#endif //UNTITLED1_INVENTORYOFJEEPS_H
