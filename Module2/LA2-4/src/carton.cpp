#include "carton.h"

Carton::Carton()
{
    height_ = 0;
    width_ = 0;
    length_ = 0;
}

//functions that are part of a class are called methods.
double Carton::length()
{
    return length_;
}

double Carton::height()
{
    return height_;
}

double Carton::width()
{
    return width_;
}