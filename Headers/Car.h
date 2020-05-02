//Tailon Russell
// Created by renew on 4/30/2020.
//
#include <string>
#include <vector>
#include <initializer_list>
#include <memory>

#ifndef UNTITLED1_CAR_H
#define UNTITLED1_CAR_H
class Car
{
public:
    virtual ~Car() = default;
    virtual  std::string getModel() = 0;
    virtual int getYear() = 0;

private:

};
#endif //UNTITLED1_CAR_H
