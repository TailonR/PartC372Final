//
// Created by renew on 5/1/2020.
//

#include "../Headers/Iterator.h"
std::shared_ptr<Car> InventoryIterator::operator*()
{
    return *currIter;
}

InventoryIterator::InventoryIterator(std::vector<std::shared_ptr<Car>>::iterator position, std::vector<std::shared_ptr<Car>> &inventory): currIter(position), _carsInInventory(&inventory)
{}

InventoryIterator& InventoryIterator::operator++() {currIter++; return *this;}
InventoryIterator& InventoryIterator::operator--() {currIter--; return *this;}
InventoryIterator InventoryIterator::operator++(int) &
{
    auto returned = *this;
    ++(*this);
    return returned;
}

InventoryIterator InventoryIterator::operator--(int) &
{
    auto returned = *this;
    --(*this);
    return returned;
}
