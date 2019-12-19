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
#include <math.h>

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
    Distance operator + (Distance rhs) const;
    friend std::ostream& operator <<(std::ostream& os, const Distance& distance); //return a reference to an output stream.

  
    Distance operator - (Distance rhs) const;

    void update_distance(int ft, float in);
};

#endif /* !DISTANCE_H_ */
