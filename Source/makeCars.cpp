//
// Created by renew on 4/30/2020.
//

#include "../Headers/makeCars.h"
std::shared_ptr<Car> makeJeep(std::string model, int year)
{
    return std::make_shared<Jeep>(model, year);
}

std::shared_ptr<Car> makeMazda(std::string model, int year)
{
    return std::make_shared<Mazda>(model, year);
}

std::shared_ptr<InventoryOfCars> makeMazdaInventory(std::initializer_list<std::shared_ptr<Car>> carInventory)
{
    return std::make_shared<InventoryOfMazdas>(carInventory);
}
std::shared_ptr<InventoryOfCars> makeJeepInventory(std::initializer_list<std::shared_ptr<Car>> carInventory)
{
    return std::make_shared<InventoryOfJeeps>(carInventory);
}
