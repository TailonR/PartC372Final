//Tailon Russell
// Created by renew on 5/1/2020.
//
#include <string>
#include <iostream>
#include <vector>
#include "Car.h"
#ifndef UNTITLED1_ITERATOR_H
#define UNTITLED1_ITERATOR_H
class InventoryIterator{
public:
    InventoryIterator(std::vector<std::shared_ptr<Car>>::iterator position, std::vector<std::shared_ptr<Car>> &carsInInventory);
    std::shared_ptr<Car> operator*() ;
    InventoryIterator& operator++();
    InventoryIterator& operator--();
    InventoryIterator operator++(int) &;
    InventoryIterator operator--(int) &;
private:
    std::vector<std::shared_ptr<Car>>::iterator currIter;
    std::vector<std::shared_ptr<Car>> *_carsInInventory;

};
#endif //UNTITLED1_ITERATOR_H
