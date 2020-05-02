//Tailon Russell
// Created by renew on 4/30/2020.
//
#include "InventoryOfCars.h"
#include <tuple>
#ifndef UNTITLED1_INVENTORYOFMAZDAS_H
#define UNTITLED1_INVENTORYOFMAZDAS_H
class InventoryOfMazdas: public InventoryOfCars {
public:
    InventoryOfMazdas(std::initializer_list<std::shared_ptr<Car>> carsInInventory);
    InventoryIterator createIterator() override;
    void setMake(std::string make) override;
};

#endif //UNTITLED1_INVENTORYOFMAZDAS_H
