//
// Created by User on 04.03.2020.
//
#include <iostream>
#include "BearCan.h"
void BeerCan::info() const
{
    std::cout<<max_volume<<std::endl;
}

BeerCan::BeerCan(const std::string&beerBrand):brand(beerBrand)
{
    max_volume=500;
    current_volume=500;
    voltage=6.5;
    isOpen= false;
}

BeerCan::BeerCan():brand("Mocne")
{
    max_volume=500;
    current_volume=500;
    voltage=6.5;
    isOpen= false;
}

BeerCan::BeerCan():BeerCan("Mocne")
{
    max_volume=500;
    current_volume=500;
    voltage=6.5;
    isOpen= false;
}
