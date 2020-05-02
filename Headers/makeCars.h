//
// Created by renew on 4/30/2020.
//
#include "Car.h"
#include "Jeep.h"
#include "Mazda.h"
#include "InventoryOfCars.h"
#include "InventoryOfJeeps.h"
#include "InventoryOfMazdas.h"

#ifndef UNTITLED1_MAKECARS_H
#define UNTITLED1_MAKECARS_H
std::shared_ptr<Car> makeJeep(std::string model, int year);
std::shared_ptr<Car> makeMazda(std::string model, int year);
std::shared_ptr<InventoryOfCars> makeMazdaInventory(std::initializer_list<std::shared_ptr<Car>> carInventory);
std::shared_ptr<InventoryOfCars> makeJeepInventory(std::initializer_list<std::shared_ptr<Car>> carInventory);
#endif //UNTITLED1_MAKECARS_H
