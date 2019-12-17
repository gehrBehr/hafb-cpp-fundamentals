/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description: namespaces practice.
** cars
*/

#ifndef CARS_H_
#define CARS_H_
#include <iostream>

int HorsePower(); // nameless, ::


namespace lamborghini
{
    int HorsePower(); //inside lamborghini 
    void cout();           
}

namespace porsche
{
    int HorsePower(); //only belongs to porsche
}

#endif /* !CARS_H_ */
