cmake_minimum_required(VERSION 3.15)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 Source/main.cpp Source/Car.cpp Headers/Car.h Source/InventoryOfJeeps.cpp Headers/InventoryOfJeeps.h Source/InventoryOfMazdas.cpp Headers/InventoryOfMazdas.h Source/makeCars.cpp Headers/makeCars.h Source/InventoryOfCars.cpp Headers/InventoryOfCars.h Source/Jeep.cpp Headers/Jeep.h Source/Mazda.cpp Headers/Mazda.h Source/helper.cpp Headers/helper.h Source/Iterator.cpp Headers/Iterator.h)