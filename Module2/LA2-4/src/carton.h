/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** carton
*/

#ifndef CARTON_H_
#define CARTON_H_
#include <iostream>
#include <string>

//create your first class
class Carton
{
private:
    double length_; // private variables should have an underscore at the end.
    double width_;
    double height_;
public:
    //constructor: build/create your object.
    Carton();
    
    //Getters //convention states that 
    double length();
    double height();
    double width();

    //Setters
    void set_length(double length);
    void set_height(double height);
    void set_width(double width);

    //other methods
    void ShowInfo();

    // ~Carton();
};



#endif /* !CARTON_H_ */
