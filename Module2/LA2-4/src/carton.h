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
#include <array>


/**
 * @brief Carton is a basic class to represent a cube of
 * varied dimensions.
 * @param length
 * @param width
 * @param height
 */
class Carton
{
private:
    double length_; // private variables should have an underscore at the end.
    double width_;
    double height_;
public:
    //Static Constants
    // static const double kMaxSize;
    static const double kMinLength;
    static const double kMinWidth;
    static const double kMinHeight;

    //constructor: build/create your object.
    Carton();
    Carton(double length, double width, double height); 
    //Getters //convention states that 
    double length();
    double width();
    double height();

    //Setters
    void set_length(double length);
    void set_width(double width);
    void set_height(double height);

    //other methods
    void SetMeasurements(double length, double width, double height);
    void ShowInfo();
    double Volume() const;
    void WriteData(std::ostream& out) const;

    //destructor
    ~Carton();
};



#endif /* !CARTON_H_ */
