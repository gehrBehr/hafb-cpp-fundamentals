/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** distance
*/

#ifndef DISTANCE_H_
#define DISTANCE_H_
#include <iostream>
#include <array>

class Distance
{
private:
    float inches_;
    int feet_;
    double miles_;
public:
    Distance() : feet_(0), inches_(0){}
    Distance(int feet, float inches) : feet_(feet), inches_(inches){}

    ~Distance(){}
    //Getters and Setters.
    int feet()const {return feet_;}
    float inches()const {return inches_;}

    void set_feet(int feet){feet_ = feet;}
    void set_inches(float inches){inches_ = inches;}
    // other methods
    void ShowDist() const;
};

#endif /* !DISTANCE_H_ */
