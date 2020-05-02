//
// Created by renew on 4/30/2020.
//
#include "Car.h"
#include <initializer_list>
#include "Iterator.h"
#include <ostream>
#ifndef UNTITLED1_INVENTORYOFCARS_H
#define UNTITLED1_INVENTORYOFCARS_H
class InventoryOfCars{
public:
    virtual ~InventoryOfCars() = default;
    InventoryOfCars() = default;
    InventoryOfCars(std::initializer_list<std::shared_ptr<Car>> carsInInventory);
    std::ostream& whatsInTheLot (std::ostream& information) const;
    virtual InventoryIterator createIterator() = 0;
    virtual void setMake(std::string) = 0;
protected:
    std::vector<std::shared_ptr<Car>> _carsOnTheLot;
    std::string _make;
};
#endif //UNTITLED1_INVENTORYOFCARS_H
