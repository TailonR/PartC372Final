//
// Created by renew on 4/30/2020.
//

#include "../Headers/InventoryOfCars.h"
InventoryOfCars::InventoryOfCars(std::initializer_list<std::shared_ptr<Car>> carsInInventory)
{
    std::vector<std::shared_ptr<Car>> temp(carsInInventory.begin(), carsInInventory.end());
    _carsOnTheLot = temp;
}

std::ostream & InventoryOfCars::whatsInTheLot(std::ostream &information) const
{
    information << "This is what we've got for " << _make << ":\n";
    for (int iterator = 0; iterator < _carsOnTheLot.size(); ++iterator) {
        if(iterator == _carsOnTheLot.size()-1)
        {
            information << _carsOnTheLot[iterator]->getYear() << " " << _carsOnTheLot[iterator]->getModel() << "\n";
        }
        else
        {
            information << _carsOnTheLot[iterator]->getYear() << " " << _carsOnTheLot[iterator]->getModel() << ", ";
        }
    }
    return information;
}


