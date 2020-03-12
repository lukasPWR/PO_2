//
// Created by User on 04.03.2020.
//

#ifndef PO_2_BEARCAN_H
#define PO_2_BEARCAN_H
#include <string>


class  BeerCan
{
    int max_volume;
    int current_volume;
    float voltage;
    std::string brand;
    bool isOpen;
public:
    BeerCan();
    BeerCan(const std::string &brand );
   void open();//
    int drink(int ammount);//zwraca ile udalo sie wypic
    void info()const;

};


#endif //PO_2_BEARCAN_H
