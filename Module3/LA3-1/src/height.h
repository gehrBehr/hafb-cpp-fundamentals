/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description: definition for the Height class.
** height
*/

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>

class Height
{
private:
    double inches_;
    double feet_;

public:
    Height(){inches_ = 0;};
    Height(double inches): inches_(inches){}
    ~Height(){}

    //getters and setters
    double inches() const {return inches_;};
    double feet() const {return inches_ * 12;};

    void set_inches(double inches){inches_ = inches;};
    void set_feet(double feet){feet_ = feet;};

    //other methods
    friend void print_feet(Height h1);
};

